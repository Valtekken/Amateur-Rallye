s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

s32 func_003B19A8(void *, s32);

void func_003AC928(register s8 *arg0, register f32 arg1) {
    *arg0 = func_003B19A8(arg0, (s32)(arg1 * 255.0f));
}

void func_003AC998(register s8 *arg0, register f32 arg1) {
    *(arg0 + 1) = func_003B19A8(arg0, (s32)(arg1 * 255.0f));
}

void func_003ACA08(register s8 *arg0, register f32 arg1) {
    *(arg0 + 2) = func_003B19A8(arg0, (s32)(arg1 * 255.0f));
}
