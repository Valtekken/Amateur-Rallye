extern s32 D_0040DCC4;
extern s32 D_002AD408(s32);
extern s32 func_00118A98(s32);
s32 func_00118C88(void) {
    if (D_0040DCC4 == 0) {
        D_0040DCC4 = func_00118A98(D_002AD408(0x28));
    }
    return D_0040DCC4;
}
