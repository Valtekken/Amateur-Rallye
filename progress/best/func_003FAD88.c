typedef struct { u64 a, b; } S16;
char *func_003FAD88(char *dst, const char *src, u32 n) {
    char *d = dst; const char *s = src; u32 lim;
    if ((((u32)dst | (u32)src) & 7) == 0) {
        lim = (((u32)dst | (u32)src) & 0xF) ? 8 : 16;
        if (n >= lim) {
            if (lim == 16) {
                while (n >= 16) {
                    S16 v = *(const S16 *)s;
                    u64 z1 = (v.a - 0x0101010101010101ULL) & ~v.a & 0x8080808080808080ULL;
                    u64 z2 = (v.b - 0x0101010101010101ULL) & ~v.b & 0x8080808080808080ULL;
                    if (z1 | z2) break;
                    *(S16 *)d = v; s += 16; d += 16; n -= 16;
                }
            } else {
                while (n >= 8) {
                    u64 v = *(const u64 *)s;
                    if ((v - 0x0101010101010101ULL) & ~v & 0x8080808080808080ULL) break;
                    *(u64 *)d = v; s += 8; d += 8; n -= 8;
                }
            }
        }
    }
    while (n) { char c = *s++; n--; *d++ = c; if (!c) { while (n) { *d++ = 0; n--; } return dst; } }
    return dst;
}
