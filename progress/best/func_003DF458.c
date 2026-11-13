u32 func_003D6C10(void);
u32 func_003F83E8(s32, s32, s64, s32);

u32 func_003DF458(void *arg0, s32 arg1, s32 arg2) {
    if ((((*(s32 *)arg0) >> 1) ^ 1) & 1) {
        return func_003D6C10();
    }
    return func_003F83E8(arg1, 1, (s64)arg2, *(s32 *)((u8 *)arg0 + 0x58));
}
