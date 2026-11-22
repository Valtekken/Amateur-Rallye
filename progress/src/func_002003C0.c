extern s32 D_00426430;
extern s32 D_002AD408(s32);
extern s32 func_002001C0(s32);

s32 func_002003C0(void) {
    if (D_00426430 == 0) {
        D_00426430 = func_002001C0(D_002AD408(0x30));
    }
    return D_00426430;
}
