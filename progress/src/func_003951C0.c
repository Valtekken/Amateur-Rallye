s32 func_003A31D8(s32);
s32 *func_00395138(s32);
s32 func_003D12D0(s32, s32, s32);
s32 *func_003A3268(s32);

s32 func_003952D8(register s32 a) {
    return func_003A3268(a)[1];
}

void func_003951C0(register s32 a, register s32 b, register s32 c, register s32 d) {
    if (d) {
        func_003D12D0(func_003A31D8(a) + b, c, d);
    }
}

s32 *func_00395248(register s32 *arg0) {
    s32 *sp0 = func_00395138(*arg0);
    func_003951C0((s32)sp0, 0, func_003A31D8((s32)arg0), *arg0);
    *sp0 = *arg0;
    return (s32 *)func_003A31D8((s32)sp0);
}
