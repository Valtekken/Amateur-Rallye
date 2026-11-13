extern s32 func_003AC218(s32);
s32 func_003A40D0(register s32 a, register s32 b) { return func_003AC218(b); }

extern void func_003A4AB8(void *, void *);
void *func_003A4990(register void *arg0, register void *arg1) {
    func_003A4AB8(arg0, arg1);
    *(f32 *)((char *)arg0 + 0xC) = *(f32 *)((char *)arg1 + 0xC);
    *(f32 *)((char *)arg0 + 0x10) = *(f32 *)((char *)arg1 + 0x10);
    return arg0;
    goto Lend;
    goto Lend;
Lend:
    ;
}

extern void func_003A4A10(s32);
extern void func_0021D5B0(s32, s32, f32);
s32 func_003A4A40(register s32 arg0, register s32 arg1, f32 arg2) {
    func_003A4A10(arg0);
    func_0021D5B0(arg0, arg1, arg2);
    return arg0;
}

extern s32 func_003ACB80(s32, s32);
s32 func_003A5228(register s32 a, register s32 b) {
    func_003ACB80(a, b);
    return a;
    goto Lend;
    goto Lend;
Lend:
    ;
}
