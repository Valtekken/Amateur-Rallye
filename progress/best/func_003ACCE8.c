void func_003ACCA8(register s32 *arg0, register s32 arg1) {
    arg0[3] = (arg1 & 1) | (arg0[3] & ~1);
}

void func_003ACCE8(register s32 *arg0, register s32 arg1) {
    arg0[3] = (arg1 << 1) | (arg0[3] & 1);
}
