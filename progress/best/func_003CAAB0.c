extern u32 D_0049B9D0[];
extern void *func_003CA3B0(s32, s32);
extern s32 func_003C9D98(s32, s32, void *, void *);

s32 func_003CAAB0(s32 arg0, s32 arg1, u8 *arg2) {
    void *obj;
    u32 *q;
    u8 *p;
    u8 *dst;
    s32 i;
    s32 res;
    s32 r;

    obj = func_003CA3B0(arg0, arg1);
    if (*(u8 *)((char *)obj + 0x72) != 1) {
        return 0;
    }
    q = (u32 *)((char *)D_0049B9D0 + arg0 * 0x70 + arg1 * 0x1C);
    p = (u8 *)q[1];
    dst = p + 0xC;
    i = 0;
    do {
        dst[i] = arg2[i];
        i++;
    } while (i < 6);
    *(s32 *)(p + 4) = 1;
    *(s32 *)(p + 8) = 6;
    res = func_003C9D98(arg0, arg1, p, dst);
    r = 1;
    if (res != 1) {
        r = 0;
    }
    return r;
}
