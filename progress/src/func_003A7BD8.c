extern char D_00487AC8[];
extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);
extern void func_003A4B60(void *);
extern s32 func_0030C148(void *, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void *func_003A7BD8(register void *arg0) {
    func_003A4B60(arg0);
    *(char **)((char *)arg0 + 8) = D_00487AC8;
    return arg0;
}

void func_003A7C30(void *arg0, s32 arg1) {
    *(char **)((char *)arg0 + 8) = D_00487AC8;
    func_0030C148(arg0, arg1);
}

s32 func_003A8040(s32 *arg0) {
    return *arg0;
}
