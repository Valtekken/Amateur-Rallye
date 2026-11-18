extern void *func_002D04D0(void);
extern void func_0030C930(s32, s32, s32);
extern u8 D_00429868[];

void func_002CE408(s32 arg0, f32 fparg0, f32 fparg1) {
    if ((u32)(arg0 - 2) < 0x2E) {
        void *p = func_002D04D0();
        f32 f3 = *(f32 *)((char *)p + 0x18);
        f32 t1 = fparg0 * 8191.0f;
        f32 t0 = fparg1 * 8191.0f;
        t1 = t1 * 0.9f;
        t0 = t0 * 0.9f;
        t1 = t1 * f3;
        t0 = t0 * f3;
        s32 v5 = (s32)t1;
        s32 v6 = (s32)t0;
        if (v5 < 0) v5 = 0;
        else if (v5 >= 0x2000) v5 = 0x1FFF;
        if (v6 < 0) v6 = 0;
        else if (v6 >= 0x2000) v6 = 0x1FFF;
        func_0030C930(arg0, v5, v6);
        char *ptr = (char *)&D_00429868 + arg0 * 16;
        *(f32 *)(ptr + 8) = fparg1;
        *(f32 *)(ptr + 4) = fparg0;
    }
}
