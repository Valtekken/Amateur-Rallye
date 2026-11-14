s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);
s32 func_003A66A8(void*);
void func_003AD558(s32, s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003A66D8(s32 a, s32 b) {
    (void)*(volatile s32*)&a;
    func_003AD558(a, b, func_003A66A8(&a));
}

void func_003A5458(u64 *arg0, u32 arg1) {
    *arg0 = (*arg0 & 0x17FFFFFFFFFULL) | (((u64)arg1 & 1) << 35);
}

void func_003A5400(u64 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0x80000FFFFULL) | ((u64)(arg1 & 0x7FFFF) << 16);
}
