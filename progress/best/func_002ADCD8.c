typedef struct { u32 f0, f4, f8, fC; } NAD;

s32 func_002ADCD8(u8 *arg0, u32 arg1, s32 (**arg2)(void *, s32, s32), u32 arg3, s32 *arg4) {
    u32 found = 0;
    s32 idx;
    u32 key;
    NAD *p;
    u32 cond;
    u32 a0 = (u32)arg0;
    u32 base = arg1 + 8;
    *arg4 = 1;
    if (arg1 != 0) {
        if (arg3 != 0) {
            idx = (s32)(a0 - base) >> 4;
            key = *(u32 *)(a0 + 4) - 1;
            if (~*(u32 *)((idx << 4) + base) != 0) idx++;
        } else {
            key = a0 - 1;
            idx = 0;
        }
        p = (NAD *)((idx << 4) + base);
        if (p->f0 != 0xFFFFFFFF) {
            cond = key < p->f0;
            for (;;) {
                if (cond == 0 && key < p->f4) {
                    if (p->fC != 0 && *arg2 != 0 && (*arg2)(arg2, p->fC, arg1) != 0) {
                        if (found == 0) found = p->f8;
                        *arg4 = 0;
                        break;
                    }
                    if (found == 0) found = p->f8;
                }
                p++;
                cond = key < p->f0;
                if (p->f0 == 0xFFFFFFFF) break;
            }
        }
    }
    return found;
}
