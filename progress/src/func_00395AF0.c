extern void func_003A3170(s32, s32);
void func_00395AF0(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A3170(arg0, arg2);
        arg0 += 8;
    }
}
