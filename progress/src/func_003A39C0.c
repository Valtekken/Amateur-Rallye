s32 func_003ABD50(register s32 *a);
s32 func_003ABD88(register s32 *a);

s32 func_003A39C0(register s32 arg0) {
    register s32 *p = (s32 *)func_003ABD88(arg0);
    return (s32)(p - (s32 *)func_003ABD50(arg0));
}
