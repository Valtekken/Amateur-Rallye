s32 func_003AB738(s32);
s32 func_003A32A8(s32);
s32 func_003D2EB8(s32, s32);
extern u32 D_0040E618[];

void func_003A3390(register s32 *arg0) {
    s32 v = arg0[2] - 1;
    arg0[2] = v;
    if (v == 0)
        func_003AB738(arg0);
}

void func_003A32E8(register s32 arg0, register s32 arg1) {
    if (arg1 != 0) {
        func_003D2EB8(arg0, arg1);
    } else {
        s32 idx = func_003A32A8(arg1);
        u32 *slot = &D_0040E618[idx];
        *(u32 *)arg0 = *slot;
        *slot = (u32)arg0;
    }
}
