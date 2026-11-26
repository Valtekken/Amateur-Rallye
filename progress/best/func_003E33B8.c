typedef struct { s32 *out; s32 offset, rows, extra, stride; u8 *a, *b; } B;
void func_003E33B8(B *p) {
    u8 *a = p->a, *b = p->b;
    s16 *out = p->out;
    s32 row, i, pass, extra;
    for (pass = 0; pass < 2; pass++) {
        for (extra = 0; extra < 1 + !!p->extra; extra++) {
            for (row = p->rows; row > 0; row--) {
                u8 v[16];
                for (i = 0; i < 16; i++) v[i] = i < 8 ? a[i] : b[i - 8];
                for (i = 0; i < 8; i++) {
                    s32 x = v[(i + p->offset) & 15] + v[(i + p->offset + 1) & 15] + 2;
                    out[i] = x >> 2;
                }
                a += p->stride; b += p->stride;
                out = (s16 *)((u8 *)out + p->stride * 2);
            }
            a += 128; b += 128;
        }
        out = p->out;
    }
}
