s32 func_00254508(void *a0, void *a1) {
    s32 **start = *(s32***)((u8*)a1 + 0xC);
    s32 **end = *(s32***)((u8*)a1 + 0x10);
    s32 cnt = end - start;
    s32 i = 0;
    s32 **cur = start;
    if (cnt <= 0) return 1;
    while (1) {
        s32 *p = *cur;
        if (p[8] != 0) return 0;
        i++;
        cur++;
        if (i >= cnt) break;
    }
    return 1;
}

s32 func_002544B8(void *a0, void *a1) {
    s32 **start = *(s32***)((u8*)a1 + 0xC);
    s32 **end = *(s32***)((u8*)a1 + 0x10);
    s32 cnt = end - start;
    s32 i = 0;
    s32 **cur = start;
    if (cnt <= 0) return 1;
    while (1) {
        s32 *p = *cur;
        if (p[10] != 0) return 0;
        i++;
        cur++;
        if (i >= cnt) break;
    }
    return 1;
}

s32 func_00254558(void *a0, void *a1) {
    s32 **start = *(s32***)((u8*)a1 + 0xC);
    s32 **end = *(s32***)((u8*)a1 + 0x10);
    s32 cnt = end - start;
    s32 i = 0;
    s32 **cur = start;
    if (cnt <= 0) return 1;
    while (1) {
        s32 *p = *cur;
        if (((s32**)p)[6] == 0) {  // field18 at 0x18 -> offset 6 in s32*
            if (((s32**)p)[7] == 0) {  // field1C at 0x1C -> offset 7
                i++;
                cur++;
                if (i >= cnt) break;
                continue;
            }
        }
        if (((s32**)p)[6] != 0) return 0;
        if (((s32**)p)[7] != 0) return 0;
        i++;
        cur++;
        if (i >= cnt) break;
    }
    return 1;
}
