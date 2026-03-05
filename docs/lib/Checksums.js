const Checksums = (function () {

    // --- CRC32 ---
    // Builds a 256-entry lookup table with polynomial table for CRC32
    const crcTable = (function () {
        const t = new Uint32Array(256);
        for (let entry = 0; entry < 256; entry++) {
            let val = entry;
            for (let bit = 0; bit < 8; bit++) {
                val = (val & 1) ? (0xEDB88320 ^ (val >>> 1)) : (val >>> 1);
            }
            t[entry] = val;
        }
        return t;
    })();

    function crc32(arrayBuffer) {
        const bytes = new Uint8Array(arrayBuffer);
        let reg = 0xFFFFFFFF;
        for (let i = 0; i < bytes.length; i++) {
            reg = crcTable[(reg ^ bytes[i]) & 0xFF] ^ (reg >>> 8);
        }
        return (reg ^ 0xFFFFFFFF) >>> 0;
    }


    // --- MD5 ---
    // Shift amounts per round
    const shiftAmounts = [
         7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,
         5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,
         4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,
         6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21
    ];

    // Precomputed sine constants
    const sineConstants = new Uint32Array(64);
    for (let i = 0; i < 64; i++) {
        sineConstants[i] = (Math.abs(Math.sin(i + 1)) * 0x100000000) >>> 0;
    }

    function rotL(x, n) {
        return (x << n) | (x >>> (32 - n));
    }

    function compressBlock(digest, words) {
        let [p, q, r, s] = digest;

        for (let step = 0; step < 64; step++) {
            let mix, wordIndex;

            if (step < 16) {
                mix = (q & r) | (~q & s);
                wordIndex = step;
            } else if (step < 32) {
                mix = (s & q) | (~s & r);
                wordIndex = (5 * step + 1) & 15;
            } else if (step < 48) {
                mix = q ^ r ^ s;
                wordIndex = (3 * step + 5) & 15;
            } else {
                mix = r ^ (q | ~s);
                wordIndex = (7 * step) & 15;
            }

            const carry = s;
            s = r;
            r = q;
            q = (q + rotL((p + mix + sineConstants[step] + words[wordIndex]) | 0, shiftAmounts[step])) | 0;
            p = carry;
        }

        digest[0] = (digest[0] + p) | 0;
        digest[1] = (digest[1] + q) | 0;
        digest[2] = (digest[2] + r) | 0;
        digest[3] = (digest[3] + s) | 0;
    }

    function md5(arrayBuffer) {
        const src = new Uint8Array(arrayBuffer);
        const byteCount = src.length;

        // Calculate padded length
        const padded = byteCount + 1 + 8 + (64 - ((byteCount + 9) % 64)) % 64;
        const buf = new Uint8Array(padded);
        buf.set(src);
        buf[byteCount] = 0x80;

        // Append message length in bits as 64-bit little-endian at the end
        const bitsLow  = (byteCount * 8) >>> 0;
        const bitsHigh = Math.floor(byteCount / 0x20000000) >>> 0;
        const lenPos   = padded - 8;
        buf[lenPos]     =  bitsLow         & 0xFF;
        buf[lenPos + 1] = (bitsLow  >>>  8) & 0xFF;
        buf[lenPos + 2] = (bitsLow  >>> 16) & 0xFF;
        buf[lenPos + 3] = (bitsLow  >>> 24) & 0xFF;
        buf[lenPos + 4] =  bitsHigh         & 0xFF;
        buf[lenPos + 5] = (bitsHigh >>>  8) & 0xFF;
        buf[lenPos + 6] = (bitsHigh >>> 16) & 0xFF;
        buf[lenPos + 7] = (bitsHigh >>> 24) & 0xFF;

        // Initial digest values (little-endian magic numbers)
        const digest = [0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476];

        // Process 64-byte blocks
        const view = new DataView(buf.buffer);
        for (let blockStart = 0; blockStart < padded; blockStart += 64) {
            const chunk = new Array(16);
            for (let w = 0; w < 16; w++) {
                chunk[w] = view.getUint32(blockStart + w * 4, true);
            }
            compressBlock(digest, chunk);
        }

        // Produce hex string (4 bytes per word, little-endian)
        let result = '';
        for (let d = 0; d < 4; d++) {
            const word = digest[d] >>> 0;
            for (let octet = 0; octet < 4; octet++) {
                const b = (word >>> (octet * 8)) & 0xFF;
                result += b.toString(16).padStart(2, '0');
            }
        }
        return result;
    }

    return { md5, crc32 };

})();
