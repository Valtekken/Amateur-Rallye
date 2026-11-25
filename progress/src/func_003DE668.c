s32 func_003D8690(void);
void *func_003DE668(void *arg0) {
    s32 c = func_003D8690();
    if (!c) return 0;
    s32 v = *(s32 *)((u8 *)arg0 + 0x1C);
    *(s32 *)((u8 *)arg0 + 0x18) = v;
    *(s32 *)((u8 *)arg0 + 0x14) = v;
    *(s32 *)((u8 *)arg0 + 0x10) = v;
    *(s32 *)((u8 *)arg0 + 0xC) = v;
    *(s32 *)((u8 *)arg0 + 0x4) = v;
    *(s32 *)((u8 *)arg0 + 0x8) = v;
    return arg0;
}
