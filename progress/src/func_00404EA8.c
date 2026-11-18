extern void func_003A0BD8(s32, s32);
extern void func_00219DA8(s32, s32);
s32 func_003A5DC8(register s32 a, register s32 b) {
    func_003A0BD8(a, b);
    func_00219DA8(a + 12, b + 12);
    return a;
}

extern void func_004048A8(s64, s64 *);
void func_00404E70(s64 a0, ...) {
    func_004048A8(a0, (s64 *)__builtin_next_arg(a0) - 7);
}

extern void func_004045C8();
extern s32 D_00441118;
extern void func_004048A8(s64, s64 *);
void func_00404EA8(s64 a0, ...) {
    s32 old = D_00441118;
    D_00441118 = (s32)&func_004045C8;
    func_004048A8(a0, (s64 *)__builtin_next_arg(a0) - 7);
    D_00441118 = old;
}

extern s32 *D_0049E564;
extern s32 *D_0049E56C;
void func_00405268(register s32 arg0, register s32 arg1, register s32 arg2) {
    register s32 off = arg0 << 3;
    arg0 = (s32)(u32)((arg0 >= 0) ? D_0049E56C : D_0049E564);
    off += arg0;
    *(s32 *)(off + 4) = arg2;
    *(s32 *)off = arg1;
}
