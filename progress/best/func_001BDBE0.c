extern void func_001BDA18(void *, void *, s32);
extern void func_001BDD38(void *, s32, s32, void *);

void func_001BDBE0(void *arg0, s32 *arg1) {
    s32 sp0;
    s32 sp4;
    s32 i8 = *arg1;
    s32 *base3C = (s32 *)((char *)arg0 + 0x3C);
    s32 i17 = base3C[i8];
    s32 *arr1C = *(s32 **)((char *)arg0 + 0x1C);
    s32 divisor = arr1C[i17];
    s32 unk28 = *(s32 *)((char *)arg0 + 0x28);

    if ((unk28 % divisor) != 0) {
        void *base = (void *)((s32)divisor + i17 * 4);
        void *obj = *(void **)base;
        void *vt = *(void **)((char *)obj + 0xDC);
        s16 off = *(s16 *)((char *)vt + 0x10);
        typedef float (*fn_t)(void *);
        fn_t fn = *(fn_t *)((char *)vt + 0x14);
        float f = fn((char *)obj + off);
        if (f < 0.2f) {
            sp4 = 0;
            func_001BDA18(arg0, &sp4, 1);
            return;
        }
        func_001BDD38(arg0, i17, 0, arg1);
        base3C[*arg1] = i17;
        return;
    }

    {
        s32 *p5 = (s32 *)((char *)arg0 + 0x54 + i8 * 4);
        s32 val = *p5;
        s32 thr = *(s32 *)((char *)arg0 + 0x4C + i8 * 4);
        if (val >= thr) {
            *p5 = 0;
            if (*arg1 == 0) {
                sp0 = 1;
            } else if (*arg1 == 1) {
                sp0 = 0;
            }
        }
        func_001BDA18(arg0, &sp0, 0);
    }
}
