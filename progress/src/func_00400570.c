typedef union { s64 q; struct { s32 lo, hi; } w; } DU;
s64 func_00400570(s64 a, s64 b) {
    s32 pad[4];
    volatile void *p = pad;
    (void)p;
    register s32 k = ((s32)(a >> 32) & 0x7ff00000) + (s32)0xfcc00000;
    register DU u;
    u.q = b;
    if (k > 0) {
        u.w.lo = 0;
        u.w.hi = k;
    } else {
        k = (-k) >> 20;
        if (k < 20) {
            u.w.lo = 0;
            u.w.hi = 0x80000 >> k;
        } else {
            u.w.hi = 0;
            k -= 20;
            {
                register s32 t;
                if (k < 31) t = 1 << (31 - k);
                else t = 1;
                u.w.lo = t;
            }
        }
    }
    return u.q;
}
