extern s32 func_003DE6B8(void *, s32, s32);
extern s32 func_003F74F8(void *);

s32 func_003DF3A8(void *arg0) {
    if (func_003DE6B8(arg0, *(s32 *)((u8 *)arg0 + 0x10), *(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10)) != 0)
        return -1;
    if (*(s32 *)arg0 & 8)
        return 0;
    if (func_003F74F8(*(void **)((u8 *)arg0 + 0x58)) != 0)
        return -1;
    return 0;
}
