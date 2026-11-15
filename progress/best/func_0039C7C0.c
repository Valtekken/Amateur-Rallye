s32 func_003A8EC8(s32);
s32 func_0039C740(s32, s32);

s32 func_0039C7C0(register s32 arg0, register s32 arg1) {
    register s32 sp0;
    sp0 = func_003A8EC8(arg0);
    func_0039C740(sp0 + 0x10, arg1);
    return sp0;
}
