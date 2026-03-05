(function (global) {
    'use strict';

    /**
     * Compresses data in zlib format (RFC 1950).
     * @param {Uint8Array} data
     * @returns {Promise<Uint8Array>}
     */
    async function deflate(data) {
        const cs     = new CompressionStream('deflate');
        const writer = cs.writable.getWriter();
        const reader = cs.readable.getReader();

        writer.write(data);
        writer.close();

        const chunks = [];
        let total = 0;
        for (;;) {
            const { done, value } = await reader.read();
            if (done) break;
            chunks.push(value);
            total += value.length;
        }

        const out = new Uint8Array(total);
        let pos = 0;
        for (const c of chunks) { out.set(c, pos); pos += c.length; }
        return out;
    }

    global.pako = { deflate };

})(window);
