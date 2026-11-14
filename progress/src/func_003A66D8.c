s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003A66A8(void*); void func_003AD558(s32,s32,s32);
s32 func_003A5DC8(register s32 s1, register s32 s0) {
    func_003A0BD8(s1, s0);
    func_00219DA8(s1 + 0xC, s0 + 0xC);
    return s1;
}
void func_003A66D8(s32 a, register s32 s16) {
    (void)*(volatile s32*)&a;
    func_003AD558(a, s16, func_003A66A8(&a));
}
