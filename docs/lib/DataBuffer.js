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

    // Move the read position
    seek(position) {
        this.pos = position;
    }

    // Skip a number of bytes
    skip(count) {
        this.pos += count;
    }

    // Check if we've reached the end
    atEnd() {
        return this.pos >= this.size;
    }

    // Read one unsigned byte
    readByte() {
        return this.data[this.pos++];
    }

    // Read 32-bit unsigned int, big-endian
    readUint32BE() {
        const d = this.data;
        const v = (d[this.pos] * 0x1000000) +
                  ((d[this.pos + 1] << 16) |
                   (d[this.pos + 2] <<  8) |
                    d[this.pos + 3]);
        this.pos += 4;
        return v >>> 0;
    }

    // Write one byte
    writeByte(value) {
        this.data[this.pos++] = value & 0xFF;
    }

    // Copy a number of bytes to another DataBuffer
    copyRangeTo(target, targetOffset, count) {
        for (let i = 0; i < count; i++) {
            target.data[targetOffset + i] = this.data[this.pos + i];
        }
        this.pos += count;
    }

    // Return a new DataBuffer with a slice of the content
    extract(start, length) {
        const end = (length !== undefined) ? start + length : this.size;
        const slice = new DataBuffer(this.data.buffer.slice(start, end));
        slice.name = this.name;
        return slice;
    }

    // Compute CRC32 for the entire buffer
    hashCRC32() {
        return Checksums.crc32(this.data.buffer);
    }
}
