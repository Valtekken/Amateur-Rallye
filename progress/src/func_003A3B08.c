s32 func_003A3A98(register s32 *a);
s32 func_003A3AD0(register s32 *a);

s32 func_003A3B08(register s32 arg0) {
    register s32 *p = (s32 *)func_003A3AD0(arg0);
    return (s32)(p - (s32 *)func_003A3A98(arg0));
}
