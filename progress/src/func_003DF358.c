extern s32 func_003DAB78(void);
extern s32 func_003F74F8(void *);
extern s32 func_003DE6B8(s32, s32);
extern void func_003F7E60(void *);

void func_003DF358(void *arg0) {
    func_003F7E60(*(void **)((u8 *)arg0 + 0x58));
}

s32 func_003DF408(void *arg0, s32 arg1) {
    if (func_003DAB78() == -1)
        return -1;
    if (arg1 != -1)
        return arg1;
    return func_003F74F8(*(void **)((u8 *)arg0 + 0x58));
}

s32 func_003DF3A8(void *arg0) {
    if (func_003DE6B8(*(s32 *)((u8 *)arg0 + 0x10), *(s32 *)((u8 *)arg0 + 0x14) - *(s32 *)((u8 *)arg0 + 0x10)) != 0)
        return -1;
    if (*(s32 *)arg0 & 8)
        return 0;
    if (func_003F74F8(*(void **)((u8 *)arg0 + 0x58)) != 0)
        return -1;
    return 0;
}

void func_003DF4B0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        s32 f = *(s32 *)arg0;
        if (f & 2)
            *(s32 *)arg0 = f & ~2;
    } else {
        if (*(s32 *)arg0 & 2)
            return;
        void *v = *(void **)((u8 *)arg0 + 0x50);
        ((void (*)(void *, s32, s32, void *))*(u32 *)((u8 *)v + 0x54))((u8 *)arg0 + *(s16 *)((u8 *)v + 0x50), 0, 0, arg0);
    }
}
