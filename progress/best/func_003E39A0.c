typedef struct Blend { u16 *out; s32 offset, rows, extra, stride; u8 *a, *b; } Blend;
void func_003E39A0(Blend *p) {
    u8 *a = p->a, *b = p->b;
    u16 *out = p->out;
    int pass, extra, row, i;
    for (pass = 0; pass < 2; pass++) {
        for (extra = 0; extra < 1 + !!p->extra; extra++) {
            for (row = p->rows; row > 0; row--) {
                u8 v[16];
                for (i = 0; i < 16; i++) v[i] = i < 8 ? a[i] : b[i - 8];
                for (i = 0; i < 8; i++) {
                    s32 s = v[(i + p->offset) & 15] + v[(i + p->offset + 1) & 15] + 1;
                    s >>= 1;
                    s += out[i];
                    if (s > 0) s++;
                    out[i] = s >> 1;
                }
                a += p->stride;
                b += p->stride;
                out = (u16 *)((char *)out + p->stride * 2);
            }
            a += 320;
            b += 320;
        }
        a = p->a + 64;
        b = p->b + 64;
        out = p->out + 64;
    }
}
