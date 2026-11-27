extern void func_003F931C();
typedef struct { s32 pad[2]; s32 p8; s32 len; } A1;
typedef struct { s32 pad[0x12]; s32 p48, p4C, p50, p54, p58; } A2;

s32 func_002C21D0(A1 *a, A2 *b) {
    s32 v, result, t7, t19;
    result = 0;
    v = b->p54 - b->p50;
    if (v < 0) v += b->p4C;
    if (v == 0 && b->p54 == b->p58) v = b->p4C;
    if ((u32)v >= (u32)a->len) {
        result = 1;
        t7 = b->p50;
        t19 = (t7 - b->p48) + a->len - b->p4C;
        if (t19 > 0) {
            func_003F931C((t7 & 0x0FFFFFFF) | 0x20000000, a->p8, a->len - t19, t7);
            func_003F931C((b->p48 & 0x0FFFFFFF) | 0x20000000, a->p8 + (a->len - t19), t19);
            b->p50 = b->p48 + t19;
        } else {
            func_003F931C((t7 & 0x0FFFFFFF) | 0x20000000, a->p8, a->len, t7);
            b->p50 = b->p50 + a->len;
        }
    }
    return result;
}
