extern s32 func_003CE0D0(void **, s32, s32);
s32 func_003D0520(void **arg0) {
    void *p = *arg0;
    s32 y = (u32)*(s32*)((char*)p - 8) < 2U;
    if (!y) return func_003CE0D0(arg0, *(s32*)((char*)p - 0x10), 1);
    return y;
}
