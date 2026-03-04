class DataBuffer {
    constructor(source) {
        this.pos  = 0;
        this.name = 'data.bin';

        if (source instanceof ArrayBuffer) {
            this.data = new Uint8Array(source);
        } else if (source instanceof Uint8Array) {
            this.data = new Uint8Array(source.buffer, source.byteOffset, source.byteLength);
        } else if (typeof source === 'number') {
            this.data = new Uint8Array(source);
        } else if (source instanceof DataBuffer) {
            this.data = new Uint8Array(source.data);
            this.name = source.name;
        } else {
            throw new Error('DataBuffer: okänd källtyp');
        }

        this.size = this.data.length;
    }

    // Flytta läspositionen
    seek(position) {
        this.pos = position;
    }

    // Hoppa förbi ett antal byte
    skip(count) {
        this.pos += count;
    }

    // Kontrollera om vi nått slutet
    atEnd() {
        return this.pos >= this.size;
    }

    // Läs en byte utan tecken
    readByte() {
        return this.data[this.pos++];
    }

    // Läs 32-bit unsigned int, big-endian
    readUint32BE() {
        const d = this.data;
        const v = (d[this.pos] * 0x1000000) +
                  ((d[this.pos + 1] << 16) |
                   (d[this.pos + 2] <<  8) |
                    d[this.pos + 3]);
        this.pos += 4;
        return v >>> 0;
    }

    // Skriv en byte
    writeByte(value) {
        this.data[this.pos++] = value & 0xFF;
    }

    // Kopiera ett antal byte till en annan DataBuffer
    copyRangeTo(target, targetOffset, count) {
        for (let i = 0; i < count; i++) {
            target.data[targetOffset + i] = this.data[this.pos + i];
        }
        this.pos += count;
    }

    // Returnera en ny DataBuffer med en del av innehållet
    extract(start, length) {
        const end = (length !== undefined) ? start + length : this.size;
        const slice = new DataBuffer(this.data.buffer.slice(start, end));
        slice.name = this.name;
        return slice;
    }

    // Beräkna CRC32 för hela bufferten
    hashCRC32() {
        return Checksums.crc32(this.data.buffer);
    }
}
