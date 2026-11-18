extern s32 func_0040C4D0(s64);
extern s64 func_0040C758(s32);
extern s64 func_002ABEC8(s64, s64);
extern s64 func_002ABF20(s64, s64);
extern s64 func_002ABF88(s64, s64);
extern s32 func_002AC4B0(s64, s64);

s64 func_002B9C90(s64 arg0, s64 *arg1) {
    s32 i = 0;
    s64 v17 = arg0;
    s64 v21 = (s64)0xFFC0 << 46;
    s32 v18;
    for (;;) {
        if (i >= 100) break;
        v18 = func_0040C4D0(v17);
        s64 t = func_0040C758(v18);
        s64 a = func_002ABEC8(v17, (s64)0xFFC0 << 46);
        if (func_002AC4B0(t, a) > 0) {
            i++;
            v17 = func_002ABF88(v17, (((0xFEE6 << 17) | 0xCCCD)) << 29);
            v21 = func_002ABF88(v21, (s64)0x8048 << 47);
            continue;
        }
        t = func_0040C758(v18);
        a = func_002ABF20(v17, (s64)0xFFC0 << 46);
        if (func_002AC4B0(t, a) < 0) {
            i++;
            v17 = func_002ABF88(v17, (((0xFEE6 << 17) | 0xCCCD)) << 29);
            v21 = func_002ABF88(v21, (s64)0x8048 << 47);
            continue;
        }
        break;
    }
    if (i == 100) {
        *arg1 = 0;
        return 0;
    }
    if (i == 0) {
        s64 t = func_0040C758(v18);
        *arg1 = t;
        return func_002ABF20(v17, t);
    }
    s64 local;
    s64 t2 = func_0040C758(v18);
    s64 v16 = func_002B9C90(func_002ABF20(arg0, func_002ABF88(t2, v21)), &local);
    *arg1 = func_002ABEC8(func_002ABF88(t2, v21), local);
    return v16;
}
