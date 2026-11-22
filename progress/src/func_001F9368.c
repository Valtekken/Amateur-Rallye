/* identical to func_001F93A8 (matched), with its names changed by decompdecomp */
extern s32 func_001F2530(s32, s32);

s32 func_001F9368(void *arg0, void *arg1) {
    s32 field = *(s32 *)((char *)arg0 + 0xC);
    s32 res;
    if (field == -1) goto zero;
    res = func_001F2530(*(s32 *)((char *)arg1 + 0x24), field);
    if (res != 0) return 1;
zero:
    return 0;
}
