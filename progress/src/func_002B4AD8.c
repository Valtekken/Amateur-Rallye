extern s32 D_00428588;
s32 D_002AD408(s32 arg0);
s32 func_002B4808(s32 arg0);

s32 func_002B4AD8(void) {
    if (D_00428588 == 0) {
        D_00428588 = func_002B4808(D_002AD408(0x1C));
    }
    return D_00428588;
}
