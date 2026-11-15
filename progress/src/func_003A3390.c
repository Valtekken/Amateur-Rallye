s32 func_003AB738(s32);
s32 func_003A32A8(s32);
s32 func_003D2EB8(s32, s32);
extern u32 D_0040E618[];

void func_003A3390(register s32 *arg0) {
    if (--arg0[2] == 0)
        func_003AB738(arg0);
}

void func_003A32E8(u32 *arg0, s32 arg1) {
    u32 *p = arg0;
    if (arg1 == 0) {
        s32 idx = func_003A32A8(arg1);
        u32 *slot = &D_0040E618[idx];
        *p = *slot;
        *slot = (u32)p;
    } else {
        func_003D2EB8(p, arg1);
    }
}
