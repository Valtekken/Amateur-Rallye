typedef struct S3D8 { u32 flags; u8 *cur; u8 *end; } S3D8;
extern s32 func_003D8118(S3D8 *);
extern void func_003F931C(u8 *, u8 *, s64);

s32 func_003D8578(S3D8 *a, u8 *dst, s32 n) {
    s32 rem = n;
    do {
        s32 cnt = a->end - a->cur;
        if (cnt > 0) {
            if ((u64)(u32)rem < (u64)(s64)cnt) cnt = rem;
            if (cnt >= 0x15) {
                func_003F931C(dst, a->cur, cnt);
                dst += cnt;
                a->cur += cnt;
            } else if (cnt > 0) {
                s32 i = cnt - 1;
                if (i >= 0) {
                    u8 *p = a->cur;
                    do { *dst++ = *p++; } while (--i >= 0);
                    a->cur = p;
                }
            } else {
                cnt = 0;
            }
            rem -= cnt;
        }
        if (rem == 0) break;
    } while (func_003D8118(a) != -1);
    return n - rem;
}
