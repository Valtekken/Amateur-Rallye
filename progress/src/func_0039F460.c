extern void func_003B3868(u32);
void func_003B2798(u32 arg0, u32 arg1, s32 arg2) {
    while (arg0 < arg1) {
        func_003B3868(arg0);
        arg0 += 0xC;
    }
}

extern void func_003AA2E8(s32, s32);
void func_0039FE88(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003AA2E8(arg0, arg2);
        arg0 += 0xC;
    }
}

extern void func_003A5AF8(s32, s32);
void func_0039F460(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A5AF8(arg0, arg2);
        arg0 += 0xC;
    }
}
