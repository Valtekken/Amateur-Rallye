typedef struct { s32 *out; s32 offset, rows, extra, stride; u8 *a, *b; } B;
void func_003E3180(B *p) {
    u8 *a = p->a, *b = p->b;
    u16 *out = p->out;
    s32 row, i, pass, extra;
    for (pass = 0; pass < 2; pass++) {
        for (extra = 0; extra < 1 + !!p->extra; extra++) {
            for (row = p->rows; row > 0; row--) {
                u8 v[16];
                for (i = 0; i < 16; i++) v[i] = i < 8 ? a[i] : b[i-8];
                for (i = 0; i < 8; i++) out[i] = (v[(i+p->offset)&15] + v[(i+p->offset+1)&15] + 1) >> 1;
                a += p->stride; b += p->stride;
                out = (u16*)((u8*)out + p->stride*2);
            }
            a += 320; b += 320;
        }
        a = p->a + 64; b = p->b + 64; out = p->out + 64;
    }
}
