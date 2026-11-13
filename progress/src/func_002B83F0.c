extern s32 D_004288A0;
extern s32 D_002AD408(s32);
extern s32 func_002B8368(s32);

s32 func_002B83F0(void) {
    if (D_004288A0 == 0) {
        D_004288A0 = func_002B8368(D_002AD408(0x18));
    }
    return D_004288A0;
}
