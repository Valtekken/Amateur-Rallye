s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003ACC28(s32);
s32 func_003ACCA8(s32, s32);
s32 func_003ACCE8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

s32 func_003A52D0(register s32 arg0) {
    func_003ACC28(arg0);
    func_003ACCE8(arg0, -1);
    func_003ACCA8(arg0, 0);
    return arg0;
}

s32 func_003A5298(register s32 *arg0) {
    return arg0[3] & 1;
}

u16 *func_003A69F8(u16 *arg0, u16 *arg1) {
    *arg0 = *arg1;
    return arg0;
}
