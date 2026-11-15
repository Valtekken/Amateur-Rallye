s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003A4AB8(s32, s32);

void func_003AC758(register s32 a, register s32 b, register f32 x) {
    func_003A4AB8(a, b);
    *(f32 *)((s8 *)a + 0xC) = x;
    *(f32 *)((s8 *)a + 0x10) = x * x;
}

s32 func_003AC7C0(register s32 a, register s32 b) {
    register s32 c = a;
    a = b;
    return 0;
}
