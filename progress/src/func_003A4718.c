extern s32 func_003A4568(s32);
extern s32 func_003ABEA8(void *, s32);
extern u32 D_004262D0;

s32 func_003A4718(register s32 *arg0) {
    s32 sp0 = 0;
    if (*arg0 >= 0) {
        sp0 = func_003A4568(func_003ABEA8(&D_004262D0, *arg0));
    }
    return sp0;
}
