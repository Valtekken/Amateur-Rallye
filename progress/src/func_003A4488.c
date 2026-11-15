extern s32 func_003AB7F8(s32);
extern s32 func_003ABEA8(void *, s32);
extern u32 D_004262D0[];

s32 *func_003A4488(register s32 *arg0, register s32 *arg1) {
    *arg0 = *arg1;
    if (*arg0 >= 0) {
        func_003AB7F8(func_003ABEA8(&D_004262D0, *arg0));
    }
    return arg0;
}
