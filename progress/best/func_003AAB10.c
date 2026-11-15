s32 func_003A0BD8(s32, s32);
void func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

s32 func_003AAAD8(s32);
s32 func_003AAAA0(s32);

s32 func_003AAB10(register s32 arg0) {
    register s32 end = func_003AAAD8(arg0);
    return (end - func_003AAAA0(arg0)) * (s32)0xB6DB6DB7 >> 2;
}

void func_003AD088(void *);
void func_003B0D10(void *, s32, void *);

void func_003AABC8(void *arg0, s32 arg1) {
    char buf[0x20];
    func_003AD088(buf);
    func_003B0D10(arg0, arg1, buf);
}
