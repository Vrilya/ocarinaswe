const DMA_DELETED = 0xFFFFFFFF;

const BUILD_DATE_LEN = 17;

const ROM_VERSIONS = [
    { name: "NTSC 1.0",          buildDate: "26-05-18 10:00:04", buildOffset: 0x740C, dmaOffset: 0x7430, dmaCount: 1526 },
    { name: "NTSC 1.1",          buildDate: "26-05-18 10:00:05", buildOffset: 0x740C, dmaOffset: 0x7430, dmaCount: 1526 },
    { name: "NTSC 1.2",          buildDate: "26-05-18 10:00:06", buildOffset: 0x793C, dmaOffset: 0x7960, dmaCount: 1526 },
    { name: "NTSC GameCube",     buildDate: "26-05-18 10:00:07", buildOffset: 0x71D0, dmaOffset: 0x71F0, dmaCount: 1525 },
    { name: "NTSC Master Quest", buildDate: "26-05-18 10:00:08", buildOffset: 0x7150, dmaOffset: 0x7170, dmaCount: 1525 },
    { name: "PAL 1.0",           buildDate: "26-05-18 10:00:09", buildOffset: 0x792C, dmaOffset: 0x7950, dmaCount: 1527 },
    { name: "PAL 1.1",           buildDate: "26-05-18 10:00:10", buildOffset: 0x794C, dmaOffset: 0x7970, dmaCount: 1527 },
    { name: "PAL GameCube",      buildDate: "26-05-18 10:00:11", buildOffset: 0x71D0, dmaOffset: 0x71F0, dmaCount: 1526 },
    { name: "PAL Master Quest",  buildDate: "26-05-18 10:00:12", buildOffset: 0x71D0, dmaOffset: 0x71F0, dmaCount: 1526 },
];

function detectRomVersion(rom) {
    for (const ver of ROM_VERSIONS) {
        if (ver.buildOffset + BUILD_DATE_LEN > rom.length) continue;
        let match = true;
        for (let i = 0; i < BUILD_DATE_LEN; i++) {
            if (rom[ver.buildOffset + i] !== ver.buildDate.charCodeAt(i)) {
                match = false;
                break;
            }
        }
        if (match) return ver;
    }
    return null;
}

/**
 * Decompress Yaz0 data from src into dst at specified offsets.
 * Returns the uncompressed size.
 */
function yazDecompressInto(src, srcOffset, sz, dst, dstOffset) {
    if (sz < 16) throw new Error('Invalid Yaz0 data: too short');

    if (src[srcOffset]     !== 0x59 || // Y
        src[srcOffset + 1] !== 0x61 || // a
        src[srcOffset + 2] !== 0x7A || // z
        src[srcOffset + 3] !== 0x30)   // 0
    {
        throw new Error('Invalid Yaz0 magic');
    }

    const view = new DataView(src.buffer);
    const uncompSize = view.getUint32(srcOffset + 4, false); // big-endian

    let sp = srcOffset + 16; // skip 16-byte header
    let dp = dstOffset;
    const end = dstOffset + uncompSize;
    let validBitCount = 0;
    let currCodeByte = 0;

    while (dp < end) {
        if (validBitCount === 0) {
            currCodeByte = src[sp++];
            validBitCount = 8;
        }

        if (currCodeByte & 0x80) {
            // Literal byte - straight copy
            dst[dp++] = src[sp++];
        } else {
            // Match - copy from earlier in output
            const byte1 = src[sp++];
            const byte2 = src[sp++];

            const dist = ((byte1 & 0x0F) << 8) | byte2;
            let copySrc = dp - (dist + 1);

            let numBytes = byte1 >> 4;
            if (numBytes === 0) {
                numBytes = src[sp++] + 0x12;
            } else {
                numBytes += 2;
            }

            // Copy bytes one at a time (overlap copies are intentional in LZ77)
            for (let i = 0; i < numBytes; i++) {
                dst[dp++] = dst[copySrc++];
            }
        }

        validBitCount--;
        currCodeByte = (currCodeByte << 1) & 0xFF;
    }

    return uncompSize;
}

/**
 * Calculate and update N64 ROM CRC checksums in-place.
 * @param {Uint8Array} rom
 */
function n64Crc(rom) {
    const N64_HEADER_SIZE = 0x40;
    const N64_BC_SIZE = 0x1000 - N64_HEADER_SIZE;
    const CHECKSUM_START = 0x1000;
    const CHECKSUM_LENGTH = 0x100000;

    // Build CRC32 table
    const poly = 0xEDB88320;
    const crcTable = new Uint32Array(256);
    for (let i = 0; i < 256; i++) {
        let crc = i;
        for (let j = 0; j < 8; j++) {
            crc = (crc & 1) ? ((crc >>> 1) ^ poly) >>> 0 : (crc >>> 1) >>> 0;
        }
        crcTable[i] = crc;
    }

    function crc32(start, len) {
        let crc = 0xFFFFFFFF;
        for (let i = start; i < start + len; i++) {
            crc = ((crc >>> 8) ^ crcTable[(crc ^ rom[i]) & 0xFF]) >>> 0;
        }
        return (crc ^ 0xFFFFFFFF) >>> 0;
    }

    const bootcodeCrc = crc32(N64_HEADER_SIZE, N64_BC_SIZE);

    const cicSeeds = {
        0x6170A4A1: 0xF8CA4DDC,  // CIC 6101
        0x90BB6CB5: 0xF8CA4DDC,  // CIC 6102
        0x0B050EE0: 0xA3886759,  // CIC 6103
        0x98BC2C86: 0xDF26F436,  // CIC 6105
        0xACC8580A: 0x1FEA617A,  // CIC 6106
    };

    const cicTypeMap = {
        0x6170A4A1: 6101,
        0x90BB6CB5: 6102,
        0x0B050EE0: 6103,
        0x98BC2C86: 6105,
        0xACC8580A: 6106,
    };

    const seed = cicSeeds[bootcodeCrc];
    if (seed === undefined) return;

    const cicType = cicTypeMap[bootcodeCrc] || 0;
    const view = new DataView(rom.buffer);

    let t1 = seed, t2 = seed, t3 = seed, t4 = seed, t5 = seed, t6 = seed;

    let i = CHECKSUM_START;
    let end = CHECKSUM_START + CHECKSUM_LENGTH;
    if (end > rom.length) end = rom.length & ~3;

    while (i < end) {
        const d = view.getUint32(i, false);

        if (((t6 + d) >>> 0) < t6) {
            t4 = (t4 + 1) >>> 0;
        }
        t6 = (t6 + d) >>> 0;
        t3 = (t3 ^ d) >>> 0;

        const shift = d & 0x1F;
        const r = shift === 0 ? d : (((d << shift) | (d >>> (32 - shift))) >>> 0);
        t5 = (t5 + r) >>> 0;

        if (t2 > d) {
            t2 = (t2 ^ r) >>> 0;
        } else {
            t2 = (t2 ^ t6 ^ d) >>> 0;
        }

        if (cicType === 6105) {
            const offset = N64_HEADER_SIZE + 0x0710 + (i & 0xFF);
            const extra = view.getUint32(offset, false);
            t1 = (t1 + (extra ^ d)) >>> 0;
        } else {
            t1 = (t1 + (t5 ^ d)) >>> 0;
        }

        i += 4;
    }

    let crc1, crc2;
    if (cicType === 6103) {
        crc1 = ((t6 ^ t4) + t3) >>> 0;
        crc2 = ((t5 ^ t2) + t1) >>> 0;
    } else if (cicType === 6106) {
        crc1 = (Math.imul(t6, t4) + t3) >>> 0;
        crc2 = (Math.imul(t5, t2) + t1) >>> 0;
    } else {
        crc1 = (t6 ^ t4 ^ t3) >>> 0;
        crc2 = (t5 ^ t2 ^ t1) >>> 0;
    }

    view.setUint32(0x10, crc1, false);
    view.setUint32(0x14, crc2, false);
}

/**
 * Decompress a Zelda 64 ROM.
 * @param {Uint8Array} romData - The raw ROM bytes
 * @param {function} [onProgress] - Called with (fraction 0..1) during processing
 * @returns {{ data: Uint8Array, version: string }} - Decompressed ROM and detected version name
 */
function decompressRom(romData, onProgress) {
    const ver = detectRomVersion(romData);
    if (!ver) {
        const supported = ROM_VERSIONS.map(v =>
            `  ${v.name.padEnd(20)} build: ${v.buildDate}  @ 0x${v.buildOffset.toString(16).toUpperCase()}`
        ).join('\n');
        throw new Error(`Could not identify ROM version.\nSupported versions:\n${supported}`);
    }

    const dmaStart = ver.dmaOffset;
    const dmaNum   = ver.dmaCount;
    const compView = new DataView(romData.buffer, romData.byteOffset, romData.byteLength);

    console.log(`Detected: ${ver.name}`);
    console.log(`dmadata at 0x${dmaStart.toString(16).toUpperCase()} with ${dmaNum} entries`);

    // Determine decompressed size
    let dstSize = romData.length;
    for (let i = 0; i < dmaNum; i++) {
        const vend = compView.getUint32(dmaStart + i * 16 + 4, false);
        if (vend > dstSize) dstSize *= 2;
    }

    const dec     = new Uint8Array(dstSize); // zero-filled
    const decView = new DataView(dec.buffer);

    // Decompress / copy each DMA entry
    for (let i = 0; i < dmaNum; i++) {
        if (onProgress) onProgress(i / dmaNum);

        const eofs   = dmaStart + i * 16;
        const vstart = compView.getUint32(eofs,      false);
        const vend   = compView.getUint32(eofs + 4,  false);
        const pstart = compView.getUint32(eofs + 8,  false);
        const pend   = compView.getUint32(eofs + 12, false);

        const skip = pstart === DMA_DELETED || vstart === DMA_DELETED ||
                     pend   === DMA_DELETED || vend   === DMA_DELETED ||
                     vend <= vstart || (pend !== 0 && pend === pstart);

        if (!skip) {
            if (pend !== 0) {
                yazDecompressInto(romData, pstart, pend - pstart, dec, vstart);
            } else {
                dec.set(romData.subarray(pstart, pstart + (vend - vstart)), vstart);
            }
        }
    }

    // Write updated DMA table into dec (pstart=vstart, pend=0 for valid entries)
    for (let i = 0; i < dmaNum; i++) {
        const eofs   = dmaStart + i * 16;
        const vstart = compView.getUint32(eofs,      false);
        const vend   = compView.getUint32(eofs + 4,  false);
        const pstart = compView.getUint32(eofs + 8,  false);
        const pend   = compView.getUint32(eofs + 12, false);

        const skip = pstart === DMA_DELETED || vstart === DMA_DELETED ||
                     pend   === DMA_DELETED || vend   === DMA_DELETED ||
                     vend <= vstart || (pend !== 0 && pend === pstart);

        decView.setUint32(eofs,      vstart,          false);
        decView.setUint32(eofs + 4,  vend,            false);
        decView.setUint32(eofs + 8,  skip ? pstart : vstart, false);
        decView.setUint32(eofs + 12, skip ? pend   : 0,      false);
    }

    n64Crc(dec);

    if (onProgress) onProgress(1);
    return { data: dec.subarray(0, dstSize), version: ver.name };
}
