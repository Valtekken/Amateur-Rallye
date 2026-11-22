extern void func_001D4DB8(void *);
void *func_001D4E78(void *arg0) {
    func_001D4DB8(arg0);
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 1;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    return arg0;
}
