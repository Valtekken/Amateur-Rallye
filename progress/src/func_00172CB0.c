extern s32 func_0021E9C0(s32, void *);
extern s32 func_0021F4B0(void);

s32 func_00172CB0(void *arg0, s32 arg1) {
    s32 n = (*(s32 *)((char *)arg0 + 0x24) - *(s32 *)((char *)arg0 + 0x20)) >> 2;
    s32 i;
    for (i = 0; i < n; i++) {
        s32 off = i << 2;
        void *v = *(void **)(*(s32 *)((char *)arg0 + 0x20) + off);
        if (*(s32 *)((char *)v + 0x1D4) == 0) {
            *(s32 *)((char *)v + 0x1D4) = func_0021E9C0(func_0021F4B0(), (char *)v + 0x1D0);
        }
        if (*(s32 *)((char *)v + 0x1D4) == arg1) {
            return *(s32 *)(*(s32 *)((char *)arg0 + 0x20) + off);
        }
    }
    return 0;
}
