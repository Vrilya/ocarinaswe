const XdeltaPatcher = (function () {

    // --- File header flags ---
    const HDR_SECONDARY  = 0x01;
    const HDR_CODETABLE  = 0x02;
    const HDR_APPDATA    = 0x04;

    // --- Per-window flags ---
    const WIN_FROM_SOURCE = 0x01;
    const WIN_FROM_TARGET = 0x02;
    const WIN_HAS_ADLER   = 0x04;

    // --- Instruction types ---
    const OP_NOOP = 0;
    const OP_ADD  = 1;
    const OP_RUN  = 2;
    const OP_COPY = 3;

    // --- Default code table ---
    function buildDefaultCodeTable() {
        const noOp  = { type: OP_NOOP, size: 0, mode: 0 };
        const table = [];

        // Index 0
        table.push([{ type: OP_RUN, size: 0, mode: 0 }, noOp]);

        // Index 1–18
        for (let sz = 0; sz < 18; sz++) {
            table.push([{ type: OP_ADD, size: sz, mode: 0 }, noOp]);
        }

        // Index 19–162
        for (let m = 0; m < 9; m++) {
            table.push([{ type: OP_COPY, size: 0, mode: m }, noOp]);
            for (let sz = 4; sz < 19; sz++) {
                table.push([{ type: OP_COPY, size: sz, mode: m }, noOp]);
            }
        }

        // Index 163–234
        for (let m = 0; m < 6; m++) {
            for (let addSz = 1; addSz < 5; addSz++) {
                for (let copySz = 4; copySz < 7; copySz++) {
                    table.push([
                        { type: OP_ADD,  size: addSz,  mode: 0 },
                        { type: OP_COPY, size: copySz, mode: m }
                    ]);
                }
            }
        }

        // Index 235–246
        for (let m = 6; m < 9; m++) {
            for (let addSz = 1; addSz < 5; addSz++) {
                table.push([
                    { type: OP_ADD,  size: addSz, mode: 0 },
                    { type: OP_COPY, size: 4,     mode: m }
                ]);
            }
        }

        // Index 247–255
        for (let m = 0; m < 9; m++) {
            table.push([
                { type: OP_COPY, size: 4, mode: m },
                { type: OP_ADD,  size: 1, mode: 0 }
            ]);
        }

        return table;
    }

    const CODE_TABLE = buildDefaultCodeTable();


    // --- Address cache for COPY instructions ---
    class AddrCache {
        constructor(nearSlots, sameSlots) {
            this.nearCount = nearSlots;
            this.sameCount = sameSlots;
            this.nearBuf   = new Array(nearSlots).fill(0);
            this.sameBuf   = new Array(sameSlots * 256).fill(0);
            this.nextNear  = 0;
            this.reader    = null;
        }

        prepare(streamReader) {
            this.reader   = streamReader;
            this.nextNear = 0;
            this.nearBuf.fill(0);
            this.sameBuf.fill(0);
        }

        resolveAddress(currentPos, mode) {
            let addr;

            if (mode === 0) {
                addr = this.reader.read7bit();
            } else if (mode === 1) {
                addr = currentPos - this.reader.read7bit();
            } else if (mode - 2 < this.nearCount) {
                addr = this.nearBuf[mode - 2] + this.reader.read7bit();
            } else {
                const m = mode - 2 - this.nearCount;
                addr = this.sameBuf[m * 256 + this.reader.readByte()];
            }

            // Update cache
            if (this.nearCount > 0) {
                this.nearBuf[this.nextNear] = addr;
                this.nextNear = (this.nextNear + 1) % this.nearCount;
            }
            if (this.sameCount > 0) {
                this.sameBuf[addr % (this.sameCount * 256)] = addr;
            }

            return addr;
        }
    }


    // --- Byte stream for reading from a DataBuffer ---
    class ByteStream {
        constructor(buf, startAt) {
            this.buf = buf;
            this.pos = startAt || 0;
        }

        atEnd()  { return this.pos >= this.buf.size; }
        skip(n)  { this.pos += n; }

        readByte() {
            return this.buf.data[this.pos++];
        }

        readUint32BE() {
            const d = this.buf.data;
            const v = (d[this.pos] * 0x1000000) +
                      ((d[this.pos + 1] << 16) |
                       (d[this.pos + 2] <<  8) |
                        d[this.pos + 3]);
            this.pos += 4;
            return v >>> 0;
        }

        // Read a variable-length 7-bit encoded integer
        read7bit() {
            let val = 0, octet;
            do {
                octet = this.readByte();
                val   = (val << 7) | (octet & 0x7F);
            } while (octet & 0x80);
            return val;
        }
    }


    // --- Patcher ---
    class Patcher {
        constructor(patchBuf) {
            this.patchBuf = patchBuf;
        }

        apply(sourceBuf) {
            const stream = new ByteStream(this.patchBuf, 0);

            // Verify magic bytes
            if (stream.readByte() !== 0xD6 ||
                stream.readByte() !== 0xC3 ||
                stream.readByte() !== 0xC4) {
                throw new Error('Ogiltig patchfil: saknar VCDIFF-signatur');
            }
            stream.readByte(); // versionsbyte

            // Read file header flags
            const headerFlags = stream.readByte();

            if (headerFlags & HDR_SECONDARY) {
                const compId = stream.readByte();
                if (compId !== 0) {
                    throw new Error('Sekundär kompressor stöds ej');
                }
            }
            if (headerFlags & HDR_CODETABLE) {
                const tableLen = stream.read7bit();
                if (tableLen !== 0) {
                    throw new Error('Anpassad kodtabell stöds ej');
                }
            }
            if (headerFlags & HDR_APPDATA) {
                stream.skip(stream.read7bit());
            }

            const dataOffset = stream.pos;

            // First pass: calculate total output size
            let outputSize = 0;
            while (!stream.atEnd()) {
                const winFlags = stream.readByte();
                if (winFlags & (WIN_FROM_SOURCE | WIN_FROM_TARGET)) {
                    stream.read7bit();
                    stream.read7bit();
                }
                stream.read7bit();
                outputSize += stream.read7bit();
                stream.readByte();
                const addRunLen  = stream.read7bit();
                const instrLen   = stream.read7bit();
                const addrLen    = stream.read7bit();
                if (winFlags & WIN_HAS_ADLER) stream.skip(4);
                stream.skip(addRunLen + instrLen + addrLen);
            }

            const output    = new DataBuffer(outputSize);
            const addrCache = new AddrCache(4, 3);
            let   writeHead = 0;

            // Second pass: apply each window
            stream.pos = dataOffset;
            while (!stream.atEnd()) {
                const winFlags  = stream.readByte();
                let   srcLength = 0;
                let   srcOffset = 0;

                if (winFlags & (WIN_FROM_SOURCE | WIN_FROM_TARGET)) {
                    srcLength = stream.read7bit();
                    srcOffset = stream.read7bit();
                }

                stream.read7bit();
                const winOutputLen  = stream.read7bit();
                const deltaFlags    = stream.readByte();
                if (deltaFlags !== 0) {
                    throw new Error('Delta-komprimering i fönster stöds ej');
                }

                const addRunLen = stream.read7bit();
                const instrLen  = stream.read7bit();
                const addrLen   = stream.read7bit();

                if (winFlags & WIN_HAS_ADLER) stream.skip(4); // skip checksum

                // Three separate byte streams for this window
                const addRunStream = new ByteStream(this.patchBuf, stream.pos);
                const instrStream  = new ByteStream(this.patchBuf, stream.pos + addRunLen);
                const addrStream   = new ByteStream(this.patchBuf, stream.pos + addRunLen + instrLen);

                addrCache.prepare(addrStream);

                let consumed      = 0; // bytes written in this window
                const instrEnd    = instrStream.pos + instrLen;

                while (instrStream.pos < instrEnd) {
                    const opcode = instrStream.readByte();

                    for (let slot = 0; slot < 2; slot++) {
                        const inst = CODE_TABLE[opcode][slot];
                        if (inst.type === OP_NOOP) continue;

                        let size = inst.size;
                        if (size === 0) size = instrStream.read7bit();

                        if (inst.type === OP_ADD) {
                            for (let i = 0; i < size; i++) {
                                output.data[writeHead + consumed + i] =
                                    addRunStream.buf.data[addRunStream.pos + i];
                            }
                            addRunStream.pos += size;
                            consumed         += size;

                        } else if (inst.type === OP_RUN) {
                            const fillByte = addRunStream.readByte();
                            for (let i = 0; i < size; i++) {
                                output.data[writeHead + consumed + i] = fillByte;
                            }
                            consumed += size;

                        } else if (inst.type === OP_COPY) {
                            const addr = addrCache.resolveAddress(consumed + srcLength, inst.mode);
                            let readPos, readBuf;

                            if (addr < srcLength) {
                                readPos = srcOffset + addr;
                                readBuf = (winFlags & WIN_FROM_SOURCE) ? sourceBuf : output;
                            } else {
                                readPos = writeHead + (addr - srcLength);
                                readBuf = output;
                            }

                            for (let i = 0; i < size; i++) {
                                output.data[writeHead + consumed + i] = readBuf.data[readPos + i];
                            }
                            consumed += size;
                        }
                    }
                }

                stream.skip(addRunLen + instrLen + addrLen);
                writeHead += winOutputLen;
            }

            return output;
        }
    }


    // Public interface
    return {
        load(patchBuffer) {
            return new Patcher(patchBuffer);
        }
    };

})();
