s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    register s32 s1 = arg0;
    register s32 s0 = arg1;
    s32 v1 = s1 + 0xC;
    s32 v0 = s0 + 0xC;
    func_003A0BD8(s1, s0);
    func_00219DA8(v1, v0);
    return s1;
}

u16 *func_003A69F8(register u16 *arg0, register u16 *arg1) {
    *arg0 = *arg1;
    return arg0;
}

s32 func_003A6AA8(void*);
void func_003AD8C8(s32, s32, s32);
void func_003A6AD8(s32 a, register s32 b) {
    (void)*(volatile s32*)&a;
    func_003AD8C8(a, b, func_003A6AA8(&a));
}

s32 func_003A6B38(register s32 *a) {
    return a[5];
}
