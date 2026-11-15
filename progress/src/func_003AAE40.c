s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003ADBD8(s32, s32);

void func_003AADF0(register s32 a, register s32 b) {
    func_003ADBD8(a, b);
}

void func_003AAE40(register s32 a, register s32 b) {
    func_003ADBD8(a, b);
}

void func_003AAE90(register s32 a, register s32 b) {
    func_003ADBD8(a, b);
}
