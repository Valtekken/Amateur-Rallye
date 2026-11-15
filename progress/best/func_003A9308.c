s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003A5A48(s32, s32);
void func_003AFAB8(void *, s32);

void func_003A9308(register void *arg0, register s32 arg1) {
    s32 a = ((s32 *)arg0)[0];
    s32 b = ((s32 *)arg0)[1];
    func_003A5A48(a, b);
    func_003AFAB8(arg0, arg1);
}

void func_003A5BC8(void *, f32, f32, f32);

s32 func_003A9678(register s32 arg0, register f32 *arg1, register f32 *arg2) {
    func_003A5BC8(arg0, arg1[0] + arg2[0], arg1[1] + arg2[1], arg1[2] + arg2[2]);
    return arg0;
}

void func_003AFC90(void *, void *, f32);

void func_003A9710(register s32 arg0, f32 arg1) {
    func_003AFC90(arg0, arg0, arg1);
}
