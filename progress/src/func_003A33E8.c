s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003A3268(s32);
void func_003A3390(s32);
void D_002AD390(s32);
s32 func_003AB738(s32);
s32 func_003A32A8(s32);
s32 func_003D2EB8(s32, s32);
extern u32 D_0040E618[];

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003A33E8(register s32 arg0, register s32 arg1) {
    func_003A3390(func_003A3268(arg0));
    if (arg1 & 1) {
        D_002AD390(arg0);
    } else {
    }
}

void func_003A3390(s32 arg0) {
    s32 v = ((s32 *)arg0)[2] - 1;
    ((s32 *)arg0)[2] = v;
    if (v == 0)
        func_003AB738(arg0);
}

void func_003A32E8(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        s32 idx = func_003A32A8(arg1);
        u32 *slot = &D_0040E618[idx];
        *(u32 *)arg0 = *slot;
        *slot = (u32)arg0;
    } else {
        func_003D2EB8(arg0, arg1);
    }
}
