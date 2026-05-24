(function (global) {
    'use strict';

    // --- CRC32 (standard IEEE 802.3) ---

    const CRC32_TABLE = (function () {
        const t = new Uint32Array(256);
        for (let i = 0; i < 256; i++) {
            let c = i;
            for (let j = 0; j < 8; j++) c = (c & 1) ? (0xEDB88320 ^ (c >>> 1)) : (c >>> 1);
            t[i] = c >>> 0;
        }
        return t;
    })();

    function crc32(data) {
        let c = 0xFFFFFFFF;
        for (let i = 0; i < data.length; i++)
            c = ((c >>> 8) ^ CRC32_TABLE[(c ^ data[i]) & 0xFF]) >>> 0;
        return (c ^ 0xFFFFFFFF) >>> 0;
    }

    // --- MPQ crypto ---

    const CRYPT_TABLE = (function () {
        let seed = 0x00100001;
        const t = new Uint32Array(0x500);
        for (let i = 0; i < 0x100; i++) {
            let pos = i;
            for (let j = 0; j < 5; j++) {
                seed = (seed * 125 + 3) % 0x2AAAAB;
                const hi = (seed & 0xFFFF) << 16;
                seed = (seed * 125 + 3) % 0x2AAAAB;
                const lo = seed & 0xFFFF;
                t[pos] = (hi | lo) >>> 0;
                pos += 0x100;
            }
        }
        return t;
    })();

    function hashString(name, kind) {
        let a = 0x7FED7FED;
        let b = 0xEEEEEEEE;
        const s = name.toUpperCase();
        for (let i = 0; i < s.length; i++) {
            const v = s.charCodeAt(i);
            const entry = CRYPT_TABLE[kind * 0x100 + v];
            a = ((entry ^ ((a + b) >>> 0)) >>> 0);
            b = ((v + a + b + (b << 5) + 3) >>> 0);
        }
        return a >>> 0;
    }

    function readU32LE(buf, i) {
        return (buf[i] | (buf[i + 1] << 8) | (buf[i + 2] << 16) | (buf[i + 3] << 24)) >>> 0;
    }

    function writeU32LE(buf, i, v) {
        v = v >>> 0;
        buf[i]     =  v         & 0xFF;
        buf[i + 1] = (v >>>  8) & 0xFF;
        buf[i + 2] = (v >>> 16) & 0xFF;
        buf[i + 3] = (v >>> 24) & 0xFF;
    }

    function cryptInplace(buf, key) {
        key = key >>> 0;
        let b = 0xEEEEEEEE;
        for (let i = 0; i + 3 < buf.length; i += 4) {
            b = (b + CRYPT_TABLE[0x400 + (key & 0xFF)]) >>> 0;
            const plain = readU32LE(buf, i);
            const enc   = (plain ^ ((key + b) >>> 0)) >>> 0;
            const t     = (((~key) >>> 0) << 21) >>> 0;
            key         = (((t + 0x11111111) >>> 0) | (key >>> 11)) >>> 0;
            b           = (plain + b + (b << 5) + 3) >>> 0;
            writeU32LE(buf, i, enc);
        }
    }

    // --- Sectors / compression ---

    const SECTOR_SIZE  = 4096;      // 512 << 3
    const ZLIB_MARKER  = 0x02;
    const ZLIB_LEVEL   = 6;
    const FLAG_PLAIN   = 0x80000200 >>> 0;
    const FLAG_CRYPTED = 0x80030200 >>> 0;

    function concat(arrays) {
        const total = arrays.reduce((s, a) => s + a.length, 0);
        const out = new Uint8Array(total);
        let pos = 0;
        for (const a of arrays) { out.set(a, pos); pos += a.length; }
        return out;
    }

    async function splitSectors(data) {
        if (!data || data.length === 0) return [];
        const sectors = [];
        for (let i = 0; i < data.length; i += SECTOR_SIZE) {
            const chunk = data.subarray(i, i + SECTOR_SIZE);
            const z = await global.pako.deflate(chunk); // zlib-format = Python zlib.compress
            const compressed = new Uint8Array(1 + z.length);
            compressed[0] = ZLIB_MARKER;
            compressed.set(z, 1);
            sectors.push(compressed.length < chunk.length ? compressed : Uint8Array.from(chunk));
        }
        return sectors;
    }

    function makeSectorStream(sectors) {
        const n = sectors.length;
        const tblSz = (n + 1) * 4;
        const dataSize = sectors.reduce((s, sec) => s + sec.length, 0);
        const out = new Uint8Array(tblSz + dataSize);
        let pos = tblSz;
        writeU32LE(out, 0, tblSz);
        for (let i = 0; i < n; i++) {
            pos += sectors[i].length;
            writeU32LE(out, (i + 1) * 4, pos);
        }
        pos = tblSz;
        for (const s of sectors) { out.set(s, pos); pos += s.length; }
        return out;
    }

    async function packPlain(data) {
        if (!data || data.length === 0) {
            const out = new Uint8Array(8);
            writeU32LE(out, 0, 8);
            writeU32LE(out, 4, 8);
            return out;
        }
        return makeSectorStream(await splitSectors(data));
    }

    async function packEncrypted(data, baseKey, fileOffset) {
        const fs      = data.length;
        const sectors = await splitSectors(data);
        const buf     = new Uint8Array(makeSectorStream(sectors));
        const adjKey  = (((baseKey + fileOffset - 1) >>> 0) ^ fs) >>> 0;
        const tblSz   = (sectors.length + 1) * 4;

        const tbl = buf.slice(0, tblSz);
        cryptInplace(tbl, adjKey);
        buf.set(tbl, 0);

        let pos = tblSz;
        for (let i = 0; i < sectors.length; i++) {
            const blk = buf.slice(pos, pos + sectors[i].length);
            cryptInplace(blk, ((adjKey + 1 + i) >>> 0));
            buf.set(blk, pos);
            pos += sectors[i].length;
        }
        return buf;
    }

    // --- Archive builder ---

    function encodeLatinOne(str) {
        const buf = new Uint8Array(str.length);
        for (let i = 0; i < str.length; i++) buf[i] = str.charCodeAt(i) & 0xFF;
        return buf;
    }

    async function buildArchive(resourceMap) {
        const items = [...resourceMap.entries()];
        if (items.length === 0) throw new Error('Inga resurser att skriva');

        const fileCrcs    = items.map(([, d]) => crc32(d));
        const listfileStr = items.map(([p]) => p).join('\r\n') + '\r\n';
        const listfileData = encodeLatinOne(listfileStr);
        const listfileCrc  = crc32(listfileData);

        // attributes: version 100, flagga 1 (CRC32 aktiverat)
        const allCrcs  = [...fileCrcs, listfileCrc, 0];
        const attrData = new Uint8Array(8 + allCrcs.length * 4);
        const attrDV   = new DataView(attrData.buffer);
        attrDV.setUint32(0, 100, true);
        attrDV.setUint32(4, 1,   true);
        for (let i = 0; i < allCrcs.length; i++) attrDV.setUint32(8 + i * 4, allCrcs[i], true);

        const nTotal = items.length + 2; // user files + listfile + attributes

        // hash table size: at least 8x, max 64k, power of 2
        let htSize = 1;
        const rawHt = Math.min(nTotal * 8, 65536);
        while (htSize < rawHt) htSize <<= 1;
        if (htSize < nTotal) htSize = nTotal;

        const ht    = new Array(htSize).fill(null); // null | [hashA, hashB, blockIdx]
        const bt    = [];
        const parts = [];
        let cur     = 32; // data starts right after the 32-byte header

        async function insert(name, data, encrypted) {
            const idx = bt.length;
            let blob, flag;
            if (encrypted) {
                blob = await packEncrypted(data, hashString(name, 3), cur);
                flag = FLAG_CRYPTED;
            } else {
                blob = await packPlain(data);
                flag = FLAG_PLAIN;
            }
            bt.push([cur, blob.length, data.length, flag]);
            parts.push(blob);
            cur += blob.length;

            let slot = hashString(name, 0) % htSize;
            while (ht[slot] !== null) slot = (slot + 1) % htSize;
            ht[slot] = [hashString(name, 1), hashString(name, 2), idx];
        }

        for (const [name, data] of items) await insert(name, data, false);
        await insert('(listfile)',   listfileData, false);
        await insert('(attributes)', attrData,    true);

        // Hash table: 16 bytes/entry (IIHHI = 4+4+2+2+4)
        const htBuf = new Uint8Array(htSize * 16);
        for (let i = 0; i < htSize; i++) {
            const dv = new DataView(htBuf.buffer, i * 16, 16);
            const e  = ht[i];
            if (e === null) {
                dv.setUint32(0,  0xFFFFFFFF, true);
                dv.setUint32(4,  0xFFFFFFFF, true);
                dv.setUint16(8,  0, true);
                dv.setUint16(10, 0, true);
                dv.setUint32(12, 0xFFFFFFFF, true);
            } else {
                dv.setUint32(0,  e[0], true);
                dv.setUint32(4,  e[1], true);
                dv.setUint16(8,  0, true);
                dv.setUint16(10, 0, true);
                dv.setUint32(12, e[2], true);
            }
        }
        cryptInplace(htBuf, hashString('(hash table)', 3));

        // Block table: 16 bytes/entry (IIII = 4+4+4+4)
        const btBuf = new Uint8Array(bt.length * 16);
        for (let i = 0; i < bt.length; i++) {
            const dv = new DataView(btBuf.buffer, i * 16, 16);
            dv.setUint32(0,  bt[i][0], true); // offset
            dv.setUint32(4,  bt[i][1], true); // compressed size
            dv.setUint32(8,  bt[i][2], true); // uncompressed size
            dv.setUint32(12, bt[i][3], true); // flags
        }
        cryptInplace(btBuf, hashString('(block table)', 3));

        const htOffset  = cur;
        const btOffset  = htOffset + htBuf.length;
        const totalSize = btOffset + btBuf.length;

        // MPQ header: 32 bytes (<IIIHHIIII>)
        const header = new Uint8Array(32);
        const hDV    = new DataView(header.buffer);
        hDV.setUint32(0,  0x1A51504D, true); // 'MPQ\x1a'
        hDV.setUint32(4,  32,         true); // header size = data offset
        hDV.setUint32(8,  totalSize,  true); // archive size
        hDV.setUint16(12, 0,          true); // format v1
        hDV.setUint16(14, 3,          true); // sector exponent (512<<3 = 4096)
        hDV.setUint32(16, htOffset,   true); // hash offset
        hDV.setUint32(20, btOffset,   true); // block offset
        hDV.setUint32(24, htSize,     true); // hash count
        hDV.setUint32(28, nTotal,     true); // block count

        return concat([header, ...parts, htBuf, btBuf]);
    }

    // --- Resource format ---

    const RES_HEADER_SZ = 0x40;
    const RES_MAGIC     = 0xDEADBEEF; // 0xDEADBEEFDEADBEEF stored as 2 × uint32
    const TYPE_TEXTURE  = 0x4F544558; // 'OTEX'
    const TYPE_TEXT     = 0x4F545854; // 'OTXT'

    function makeResource(resType, version, payload, isMod) {
        const hdr = new Uint8Array(RES_HEADER_SZ);
        const dv  = new DataView(hdr.buffer);
        dv.setUint32(0x04, resType >>> 0, true);
        dv.setInt32(0x08,  version,        true);
        dv.setUint32(0x0C, RES_MAGIC,      true); // low 32 bits of magic
        dv.setUint32(0x10, RES_MAGIC,      true); // high 32 bits of magic
        if (isMod) hdr[0x18] = 1;
        return concat([hdr, payload]);
    }

    // --- Textures ---

    const PIXEL_FORMATS = {
        RGBA32: 1, RGBA16: 2,
        CI4: 3,    CI8: 4,
        I4: 5,     I8: 6,
        IA4: 7,    IA8: 8,  IA16: 9,
    };

    function pixelByteCount(fmt, pixels) {
        if (fmt === 1)                         return pixels * 4;
        if (fmt === 2 || fmt === 9)            return pixels * 2;
        if (fmt === 3 || fmt === 5 || fmt === 7) return Math.floor(pixels / 2);
        if (fmt === 4 || fmt === 6 || fmt === 8) return pixels;
        throw new Error('Okänt pixelformat id: ' + fmt);
    }

    function packTexture(fmt, w, h, pixels) {
        if (w <= 0 || h <= 0) throw new Error(`Ogiltiga texturdimensioner: ${w}x${h}`);
        const payload = new Uint8Array(16 + pixels.length);
        const dv = new DataView(payload.buffer);
        dv.setInt32(0,  fmt,           true);
        dv.setInt32(4,  w,             true);
        dv.setInt32(8,  h,             true);
        dv.setInt32(12, pixels.length, true);
        payload.set(pixels, 16);
        return makeResource(TYPE_TEXTURE, 0, payload);
    }

    // --- Text / messages ---

    const MSG_EXTRA_1 = new Set([0x05, 0x06, 0x0C, 0x0E, 0x13, 0x14, 0x1E]);
    const MSG_EXTRA_2 = new Set([0x07, 0x11, 0x12]);
    const MSG_EXTRA_3 = new Set([0x15]);
    const MSG_END     = 0x02;
    const MSG_CODES   = new Set(Array.from({ length: 30 }, (_, i) => i + 0x02));

    const PAL_CHARSET = (function () {
        const parts = [
            '0123456789', '\x01',
            'ABCDEFGHIJKLMN', '\x01',
            'OPQRSTUVWXYZ', '\x01',
            'abcdefghijklmn', '\x01',
            'opqrstuvwxyz', '\x01',
            ' -.', '\x01',
            '\x02\x02',
        ].join('');
        const buf = new Uint8Array(parts.length);
        for (let i = 0; i < parts.length; i++) buf[i] = parts.charCodeAt(i) & 0xFF;
        return buf;
    })();

    function readMessage(msgData, start) {
        const out = [];
        let pos = start, extra = 0, done = false;
        while (pos < msgData.length) {
            const c = msgData[pos];
            if (c === 0 && extra === 0 && !done) break;
            out.push(c);
            pos++;
            if (extra === 0) {
                if (MSG_CODES.has(c)) {
                    if      (c === MSG_END)         { done = true; }
                    else if (MSG_EXTRA_1.has(c))    { extra = 1; }
                    else if (MSG_EXTRA_2.has(c))    { extra = 2; if (c === 0x07) done = true; }
                    else if (MSG_EXTRA_3.has(c))    { extra = 3; }
                }
            } else {
                extra--;
            }
            if (done && extra === 0) break;
        }
        return new Uint8Array(out);
    }

    function packText(msgData, tableData, addCharset) {
        const entries = [];
        let idx = 0;
        while (idx < tableData.length) {
            if (idx + 7 >= tableData.length) break;
            const msgId = (tableData[idx] << 8) | tableData[idx + 1]; // big-endian
            if (msgId === 0xFFFF) break;
            if ((msgId === 0xFFFC || msgId === 0xFFFD) && addCharset) {
                entries.push([0xFFFC, 0, 0, PAL_CHARSET]);
                break;
            }
            const rawOff  = ((tableData[idx+4] << 24) | (tableData[idx+5] << 16) |
                              (tableData[idx+6] <<  8) |  tableData[idx+7]) >>> 0;
            const offset  = rawOff & 0x00FFFFFF;
            const boxByte = tableData[idx + 2];
            const boxType = (boxByte & 0xF0) >> 4;
            const boxPos  = (boxByte & 0x0F);
            entries.push([msgId, boxType, boxPos, readMessage(msgData, offset)]);
            idx += 8;
        }

        const rawParts = [];
        for (const [msgId, boxType, boxPos, content] of entries) {
            const entry = new Uint8Array(8 + content.length);
            const dv = new DataView(entry.buffer);
            dv.setUint16(0, msgId, true);
            entry[2] = boxType;
            entry[3] = boxPos;
            dv.setInt32(4, content.length, true);
            entry.set(content, 8);
            rawParts.push(entry);
        }

        const raw = concat(rawParts);
        const countBuf = new Uint8Array(4);
        new DataView(countBuf.buffer).setInt32(0, entries.length, true);
        return makeResource(TYPE_TEXT, 0, concat([countBuf, raw]));
    }

    // --- TOML manifest parser ---

    function hexToBytes(hexStr) {
        const buf = new Uint8Array(hexStr.length / 2);
        for (let i = 0; i < buf.length; i++) buf[i] = parseInt(hexStr.substr(i * 2, 2), 16);
        return buf;
    }

    function joinPath(...parts) { return parts.filter(Boolean).join('/'); }

    function stripTomlComment(line) {
        let inString = false;
        let escaped = false;
        for (let i = 0; i < line.length; i++) {
            const ch = line[i];
            if (escaped) {
                escaped = false;
            } else if (ch === '\\' && inString) {
                escaped = true;
            } else if (ch === '"') {
                inString = !inString;
            } else if (ch === '#' && !inString) {
                return line.slice(0, i);
            }
        }
        return line;
    }

    function parseTomlString(value) {
        return JSON.parse(value);
    }

    function parseTomlValue(value, lineNum) {
        value = value.trim();
        if (value.startsWith('"')) return parseTomlString(value);
        if (value === 'true') return true;
        if (value === 'false') return false;
        if (value.startsWith('[') && value.endsWith(']')) {
            const inner = value.slice(1, -1).trim();
            if (!inner) return [];
            return inner.split(',').map(part => {
                const item = part.trim();
                return item.startsWith('"') ? parseTomlString(item) : Number(item);
            });
        }
        const numberValue = Number(value);
        if (!Number.isNaN(numberValue)) return numberValue;
        throw new Error(`Okänt TOML-värde på rad ${lineNum}: ${value}`);
    }

    function parseTomlManifest(tomlText) {
        const manifest = { group: [], text: [] };
        let current = manifest;
        let currentGroup = null;
        let currentText = null;

        const lines = tomlText.replace(/\r\n/g, '\n').replace(/\r/g, '\n').split('\n');
        for (let lineNum = 1; lineNum <= lines.length; lineNum++) {
            const line = stripTomlComment(lines[lineNum - 1]).trim();
            if (!line) continue;

            if (line === '[[group]]') {
                currentGroup = { texture: [] };
                manifest.group.push(currentGroup);
                current = currentGroup;
                continue;
            }
            if (line === '[[group.texture]]') {
                if (!currentGroup) throw new Error(`group.texture utan group på rad ${lineNum}`);
                const texture = {};
                currentGroup.texture.push(texture);
                current = texture;
                continue;
            }
            if (line === '[[text]]') {
                currentText = { replacement: [] };
                manifest.text.push(currentText);
                current = currentText;
                continue;
            }
            if (line === '[[text.replacement]]') {
                if (!currentText) throw new Error(`text.replacement utan text på rad ${lineNum}`);
                const replacement = {};
                currentText.replacement.push(replacement);
                current = replacement;
                continue;
            }

            const match = line.match(/^([A-Za-z0-9_]+)\s*=\s*(.+)$/);
            if (!match) throw new Error(`Ogiltig TOML-rad ${lineNum}: ${line}`);
            current[match[1]] = parseTomlValue(match[2], lineNum);
        }

        return manifest;
    }

    function readRomSlice(imageData, offsetStr, lengthStr, label) {
        const start = parseInt(offsetStr, 16);
        const length = parseInt(lengthStr, 16);
        const end = start + length;
        if (start < 0 || end > imageData.length) {
            throw new Error(`${label}: offset ${offsetStr} med längd ${lengthStr} ligger utanför ROM:en`);
        }
        return imageData.slice(start, end);
    }

    function replaceAllBytes(data, oldHex, newHex) {
        const oldB = hexToBytes(oldHex);
        const newB = hexToBytes(newHex);
        if (!oldB.length) throw new Error('replacement.old får inte vara tom');

        const arr = Array.from(data);
        let i = 0;
        while (i <= arr.length - oldB.length) {
            let match = true;
            for (let j = 0; j < oldB.length; j++) {
                if (arr[i + j] !== oldB[j]) { match = false; break; }
            }
            if (match) {
                arr.splice(i, oldB.length, ...Array.from(newB));
                i += newB.length;
            } else {
                i++;
            }
        }
        return new Uint8Array(arr);
    }

    function expectString(table, key, label) {
        const value = table[key];
        if (typeof value !== 'string' || !value) throw new Error(`${label}: saknar strängfältet '${key}'`);
        return value;
    }

    function expectBool(table, key, defaultValue, label) {
        const value = table[key] === undefined ? defaultValue : table[key];
        if (typeof value !== 'boolean') throw new Error(`${label}: '${key}' måste vara true eller false`);
        return value;
    }

    function expectSize(table, label) {
        const value = table.size;
        if (!Array.isArray(value) || value.length !== 2 || !value.every(Number.isInteger)) {
            throw new Error(`${label}: 'size' måste vara [bredd, höjd]`);
        }
        if (value[0] <= 0 || value[1] <= 0) throw new Error(`${label}: 'size' måste vara positiv`);
        return value;
    }

    function packTextureFromManifest(imageData, texture, label) {
        const name = expectString(texture, 'name', label);
        const fmtName = expectString(texture, 'format', label);
        const offset = expectString(texture, 'offset', label);
        const [w, h] = expectSize(texture, label);
        const addHeader = expectBool(texture, 'add_header', true, label);

        const fmt = PIXEL_FORMATS[fmtName];
        if (fmt === undefined) throw new Error(`${label}: okänt texturformat '${fmtName}'`);

        const start = parseInt(offset, 16);
        const length = pixelByteCount(fmt, w * h);
        const end = start + length;
        if (start < 0 || end > imageData.length) throw new Error(`${label}: texturen '${name}' ligger utanför ROM:en`);

        const pixels = imageData.slice(start, end);
        return addHeader ? packTexture(fmt, w, h, pixels) : pixels;
    }

    function runManifest(imageData, manifestText) {
        const manifest = parseTomlManifest(manifestText);
        const resources = new Map();
        const otrName = manifest.output || 'Mod.otr';

        for (let i = 0; i < manifest.text.length; i++) {
            const text = manifest.text[i];
            const label = `text #${i + 1}`;
            const path = expectString(text, 'path', label);
            const name = expectString(text, 'name', label);

            let msgData = readRomSlice(
                imageData,
                expectString(text, 'messages_offset', label),
                expectString(text, 'messages_length', label),
                `${label} messages`
            );
            const tableData = readRomSlice(
                imageData,
                expectString(text, 'table_offset', label),
                expectString(text, 'table_length', label),
                `${label} table`
            );

            for (let r = 0; r < text.replacement.length; r++) {
                const replacement = text.replacement[r];
                const repLabel = `${label}.replacement #${r + 1}`;
                msgData = replaceAllBytes(
                    msgData,
                    expectString(replacement, 'old', repLabel),
                    expectString(replacement, 'new', repLabel)
                );
            }

            const addCharset = expectBool(text, 'add_charset', true, label);
            resources.set(joinPath(path, name), packText(msgData, tableData, addCharset));
        }

        for (let g = 0; g < manifest.group.length; g++) {
            const group = manifest.group[g];
            const groupLabel = `group #${g + 1}`;
            const path = expectString(group, 'path', groupLabel);
            const textures = Array.isArray(group.texture) ? group.texture : [];

            for (let t = 0; t < textures.length; t++) {
                const texture = textures[t];
                const texLabel = `${groupLabel}.texture #${t + 1}`;
                const name = expectString(texture, 'name', texLabel);
                resources.set(joinPath(path, name), packTextureFromManifest(imageData, texture, texLabel));
            }
        }

        return { resources, otrName };
    }
    // --- Public API ---

    /**
     * Build an OTR archive from decompressed ROM data and a TOML manifest.
     * @param {Uint8Array} romData      - Decompressed ROM
     * @param {string}     manifestText - Contents of the TOML manifest
     * @returns {{ data: Uint8Array, name: string }}
     */
    async function buildOtr(romData, manifestText) {
        const { resources, otrName } = runManifest(romData, manifestText);
        return { data: await buildArchive(resources), name: otrName };
    }

    global.buildOtr = buildOtr;

})(window);
