extern void func_003A5CC0(s32, s32);
void func_003A25E0(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A5CC0(arg0, arg2);
        arg0 += 0x1C;
    }
}
