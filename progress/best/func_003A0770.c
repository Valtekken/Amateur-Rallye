s32 func_002AFEB8(s32, s32);
void func_003A06F0(s32, s32);

void func_003A0770(register s32 arg0, register s32 arg1) {
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 s2;

    s2 = func_002AFEB8(0x1C, s0);
    if (s2 != 0) {
        func_003A06F0(s2, s1);
    }
}
