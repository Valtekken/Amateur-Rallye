void func_003A0BD8(s32, s32);
void func_00219DA8(s32, s32);
void func_003ADBD8(s32, s32);
s32 func_003AAB90(s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

s32 func_003AAC28(register s32 arg0, register s32 arg1) {
    return func_003AAB90(arg0) + arg1 * 0x1C;
}

void func_003AAD50(register s32 a, register s32 b) {
    func_003ADBD8(a, b);
}

void func_003AADA0(register s32 a, register s32 b) {
    func_003ADBD8(a, b);
}
