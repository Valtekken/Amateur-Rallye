/* identical to func_003A39C0 (matched), with its names changed by decompdecomp */
s32 func_0039B1D0(register s32 *a);
s32 func_0039B208(register s32 *a);

s32 func_0039B240(register s32 arg0) {
    register s32 *p = (s32 *)func_0039B208(arg0);
    return (s32)(p - (s32 *)func_0039B1D0(arg0));
}
