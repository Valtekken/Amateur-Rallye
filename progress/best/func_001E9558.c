typedef struct {
    s32 unk;
    s32 *bits;
    s32 cur;
} S12;

s32 func_001E9558(void *arg0, s32 arg1) {
    S12 u, s, t;
    s32 a = arg1;
    s32 mask;
    s32 *bits;
    if (a < 0) {
        S12 *p = (S12 *)((char *)arg0 + 0x48);
        s.bits = p->bits;
        s.cur = p->cur;
        t = s;
        S12 *pt = &t;
        pt->cur = a;
        s32 idx = pt->cur;
        s32 q = idx / 32;
        pt->bits += q;
        pt->cur = idx - q * 32;
        if (pt->cur < 0) { pt->cur += 32; pt->bits -= 1; }
        u = t;
        bits = u.bits;
        mask = 1 << u.cur;
        *(volatile s32 *)((char *)&t + 0) = (s32)bits;
    } else {
        S12 *p = (S12 *)((char *)arg0 + 0x48);
        s.bits = p->bits;
        s.cur = p->cur;
        t = s;
        S12 *pt = &t;
        pt->cur += a;
        s32 idx = pt->cur;
        s32 q = idx / 32;
        pt->bits += q;
        pt->cur = idx - q * 32;
        if (pt->cur < 0) { pt->cur += 32; pt->bits -= 1; }
        u = t;
        bits = u.bits;
        mask = 1 << u.cur;
        *(volatile s32 *)((char *)&t + 0) = (s32)bits;
    }
    *(volatile s32 *)((char *)&t + 4) = mask;
    return (*bits & mask) != 0;
}
