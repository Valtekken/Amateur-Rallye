s32 func_001C0158(void *a0, s32 a1) {
    *(s32 *)((char*)a0 + 0x6C) = 0;
    if (a1 == -2) {
        return *(s32 *)((char*)a0 + 0x20);
    }
    if (a1 < -1) {
        if (a1 == -3) {
            return *(s32 *)((char*)a0 + 0x24);
        }
    } else if (a1 == -1) {
        *(s32 *)((char*)a0 + 0x6C) = 1;
        return *(s32 *)((char*)a0 + 0x1C);
    }
    if (a1 < 0) {
        return 0;
    }
    {
        u8 *base = *(u8**)((char*)a0 + 0x4);
        u32 count = (*(u32 *)((char*)a0 + 0x8) - (u32)base) >> 2;
        if ((u32)a1 >= count) {
            return 0;
        }
        return *(s32 *)(base + a1 * 4);
    }
}
