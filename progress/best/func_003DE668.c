s32 func_003D8690(void);

void *func_003DE668(void *arg0) {
    s32 val;
    s32 cond;
    
    cond = func_003D8690();
    val = *(s32 *)((u8 *)arg0 + 0x1C);
    if (cond == 0) {
        return NULL;
    }
    *(s32 *)((u8 *)arg0 + 0x18) = val;
    *(s32 *)((u8 *)arg0 + 0x14) = val;
    *(s32 *)((u8 *)arg0 + 0x10) = val;
    *(s32 *)((u8 *)arg0 + 0xC) = val;
    *(s32 *)((u8 *)arg0 + 0x4) = val;
    *(s32 *)((u8 *)arg0 + 0x8) = val;
    return arg0;
}
