extern s32 func_003DE6B8(void *, s32, s32);
extern s32 func_003F74F8(void *);
extern s64 func_003F83E8(s32, s32, s64, void *);
extern s64 func_003F78B0(void *, s32, s64, void *);
extern s32 func_003F9E30(void *);

s32 func_003DF3A8(void *arg0) {
    if (func_003DE6B8(arg0, *(s32 *)((u8 *)arg0 + 0x10), *(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10)) != 0)
        goto fail;
    if (*(s32 *)arg0 & 8)
        return 0;
    if (func_003F74F8(*(void **)((u8 *)arg0 + 0x58)) != 0)
        goto fail;
    return 0;
fail:
    return -1;
}

u32 func_003DF2F8(void *arg0, s32 arg1, s64 arg2) {
    u32 result = func_003F83E8(arg1, 1, (s64)(s32)arg2, *(void **)((u8 *)arg0 + 0x58));
    s64 pos = *(s64 *)((u8 *)arg0 + 0x40);
    if (pos >= 0)
        *(s64 *)((u8 *)arg0 + 0x40) = pos + arg2;
    return result;
}

u32 func_003DF260(void *arg0, u8 *arg1, s32 arg2) {
    void *p;
    s32 cnt;
    s32 v;

    if (arg2 == 1) {
        p = *(void **)((u8 *)arg0 + 0x58);
        cnt = *(s32 *)((u8 *)p + 4) - 1;
        *(s32 *)((u8 *)p + 4) = cnt;
        if (cnt >= 0) {
            u8 *ptr = *(u8 **)p;
            v = *ptr;
            *(u8 **)p = ptr + 1;
        } else {
            v = func_003F9E30(p);
        }
        *arg1 = (u8)v;
        if (v != -1)
            return 1;
        return 0;
    }
    return (u32)func_003F78B0(arg1, 1, (s64)arg2, *(void **)((u8 *)arg0 + 0x58));
}
