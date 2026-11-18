s32 func_001C01E8(void *arg0, s32 arg1, s32 arg2) {
    void *q = *(void **)((char *)arg0 + 4);
    q = (void *)((char *)q + arg1 * 4);
    q = *(void **)q;
    if (arg2 != 0) {
        *(s32 *)((char *)arg0 + 0x58) = 0;
        *(s32 *)((char *)arg0 + 0x5C) = 0;
        *(s32 *)((char *)arg0 + 0x68) = 0;
    }
    if (*(s32 *)((char *)q + 0xD4) != 0) {
        s32 temp = *(s32 *)((char *)arg0 + 0x58) + 1;
        *(s32 *)((char *)arg0 + 0x58) = temp;
        if (temp >= 0x15) {
            *(s32 *)((char *)arg0 + 0x58) = 0x14;
        }
        *(s32 *)((char *)arg0 + 0x5C) = 0;
    } else {
        s32 temp = *(s32 *)((char *)arg0 + 0x5C) + 1;
        *(s32 *)((char *)arg0 + 0x5C) = temp;
        if (temp >= 0x15) {
            *(s32 *)((char *)arg0 + 0x5C) = 0x14;
        }
        *(s32 *)((char *)arg0 + 0x58) = 0;
    }
    if (*(s32 *)((char *)arg0 + 0x58) >= 0x14) {
        *(s32 *)((char *)arg0 + 0x68) = 1;
    }
    if (*(s32 *)((char *)arg0 + 0x5C) >= 0x14) {
        *(s32 *)((char *)arg0 + 0x68) = 0;
    }
    return *(s32 *)((char *)arg0 + 0x68);
}
