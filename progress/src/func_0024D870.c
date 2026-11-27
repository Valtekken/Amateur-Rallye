extern s32 func_0024D8F8(s32, s32, s32);
extern s32 func_0024D940(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0024D870(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3)
{
    s32 v0;
    if (func_0024D8F8(arg0, arg1[2], arg2[2]) == 0)
        goto ret_zero;
    v0 = func_0024D940(arg0, arg1[2], arg1[1], arg1[0], arg2[2], arg2[1], arg2[0], arg3);
    if (v0 != 0) {
        return 1;
    } else {
ret_zero:
        return 0;
    }
}
