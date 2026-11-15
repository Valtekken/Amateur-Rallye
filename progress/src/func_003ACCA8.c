void func_003ACCA8(register s32 *arg0, register s32 arg1) {
    register s32 b = arg1 & 1;
    register s32 f = arg0[3];
    f &= -2;
    f |= b;
    arg0[3] = f;
}

void func_003ACCE8(register s32 *arg0, register s32 arg1) {
    register s32 b = arg1 << 1;
    register s32 f = arg0[3];
    f &= 1;
    f |= b;
    arg0[3] = f;
}
