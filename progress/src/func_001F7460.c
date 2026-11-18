s32 func_001F7460(void *arg0, void *arg1) {
    int dummy[8];
    (void)dummy;
    if (*(s32*)((u8*)arg0+0xC) == *(s32*)((u8*)arg1+0xC)) {
        return (*(s32*)((u8*)arg0+0x8) ^ *(s32*)((u8*)arg1+0x8)) < 1u;
    }
    return 0;
}
