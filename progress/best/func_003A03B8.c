extern s32 func_003D1388(s32, void *);

u32 func_003A03B8(register s32 arg0, register s32 arg1, register u32 arg2, register u32 arg3) {
    volatile s8 sp0 = (s8)arg1;
    register u32 i;
    for (i = arg2; i < arg3; i++) {
        if (func_003D1388(arg0 + i, &sp0) != 0)
            return i;
    }
    return 0xFFFFFFFFU;
}
