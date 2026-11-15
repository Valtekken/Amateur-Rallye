s32 func_003AAAD8(s32);
s32 func_003AAAA0(s32);

s32 func_003AAB10(register s32 arg0) {
    register s32 end = func_003AAAD8(arg0);
    register s32 start = func_003AAAA0(arg0);
    return (end - start) * (s32)0xB6DB6DB7 >> 2;
}

void func_003AD088(void *);
void func_003B0D10(void *, s32, void *);

void func_003AABC8(register void *arg0, register s32 arg1) {
    char buf[0x20];
    func_003AD088(buf);
    func_003B0D10(arg0, arg1, buf);
}
