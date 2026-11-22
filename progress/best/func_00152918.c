extern void func_001528E0(void);
extern void func_00152720(void *, void *, void *);
extern s32 func_003F96F8(void);
extern void func_003F93CC(void *, void *, s32);

s32 func_00152918(u8 *arg0, s32 *arg1) {
    s32 var30 = 0;
    u8 *sub = arg0 + 0xC;
    u32 *cursor = *(u32 **)(sub + 4);
    u32 *begin, *end, *scratch, *s, *p, *i, *j, *t;
    u32 tmp, v;
    s32 n, r;
    if ((((s32)cursor - (s32)*(u32 **)(arg0 + 0xC)) >> 2) == 0) {
        u32 *b0, *e0;
        func_001528E0();
        b0 = *(u32 **)(arg0 + 0);
        e0 = *(u32 **)(arg0 + 4);
        var30 = 1;
        begin = b0;
        end = e0;
        if (begin != end) {
            i = begin + 1;
            j = i;
            if (i != end) {
                do {
                    n = ((s32)i - (s32)begin) >> 2;
                    r = func_003F96F8() % (n + 1);
                    t = begin + r;
                    tmp = *j;
                    *j = *t;
                    *t = tmp;
                    i++;
                    j++;
                } while (i != end);
            }
        }
        scratch = begin;
        *(u32 **)(arg0 + 0x18) = scratch;
        if ((u32)scratch < *(u32 *)(arg0 + 4)) {
            do {
                p = *(u32 **)(sub + 4);
                s = *(u32 **)(arg0 + 0x18);
                if (p != *(u32 **)(sub + 8)) {
                    if (p != 0) *p = *s;
                    *(u32 **)(sub + 4) = p + 1;
                } else {
                    func_00152720(sub, p, s);
                }
                s++;
                *(u32 **)(arg0 + 0x18) = s;
            } while ((u32)s < *(u32 *)(arg0 + 4));
        }
        func_003F93CC(begin, end, 0);
        *(u32 **)(arg0 + 4) = begin;
    }
    v = *(u32 *)((u32)*(u32 **)(sub + 4) - 4);
    *arg1 = v;
    end = *(u32 **)(arg0 + 4);
    if (end != *(u32 **)(arg0 + 8)) {
        if (end != 0) *end = v;
        *(u32 **)(arg0 + 4) = end + 1;
    } else {
        func_00152720(arg0, end, arg1);
    }
    *(u32 **)(sub + 4) = (u32 *)((u32)*(u32 **)(sub + 4) - 4);
    return var30;
}
