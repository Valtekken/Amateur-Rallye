s32 func_0039E668(s32, s32);
s32 func_0039E8B0(s32, s32, s32);

s32 func_0039E930(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    volatile s32 sp0 = func_0039E668(arg0, arg1);
    func_0039E8B0(arg2, arg3, sp0);
    return sp0;
}
