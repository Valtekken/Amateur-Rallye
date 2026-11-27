extern void *func_001A12E0(void);

f32 func_0017DD78(char *arg0) {
    f32 f20;
    f32 f21;
    f32 val;
    f32 res;
    char *base;
    char *elem;
    s32 idx;
    s32 count;

    idx = *(s32 *)(arg0 + 0xE8);
    f20 = *(f32 *)(*(int *)(*(int *)(*(int *)(arg0 + 0x18) + 0xC) + 4) + 0x1C);

    base = *(char **)(arg0 + 0x174);
    elem = base;
    if (idx >= 0) {
        count = (s32)((u32)((*(char **)(arg0 + 0x178) - base) * 0xAAAAAAAB) >> 4);
        if ((u32)(count - 1) >= (u32)idx) {
            void *r = func_001A12E0();
            if (*(s32 *)((char *)r + 0x24) == idx) {
                elem = base + idx * 0x30;
            } else {
                elem = base;
            }
        } else {
            elem = base;
        }
    } else {
        elem = base;
    }

    f21 = *(f32 *)(elem + 0x14) * 57.295826f;
    f20 = *(f32 *)(arg0 + 0xFC) / (f20 * (*(f32 *)(arg0 + 0x28) + *(f32 *)(arg0 + 0x2C)));

    idx = *(s32 *)(arg0 + 0xE8);
    base = *(char **)(arg0 + 0x174);
    if (idx >= 0) {
        count = (s32)((u32)((*(char **)(arg0 + 0x178) - base) * 0xAAAAAAAB) >> 4);
        if ((u32)(count - 1) >= (u32)idx) {
            void *r = func_001A12E0();
            if (*(s32 *)((char *)r + 0x24) == idx) {
                elem = base + idx * 0x30;
            } else {
                elem = base;
            }
        } else {
            elem = base;
        }
    } else {
        elem = base;
    }

    val = (f20 - 1.0f) * *(f32 *)(elem + 0x18) + 1.0f;
    if (val < 0.2f) val = 0.2f;
    res = *(f32 *)(arg0 + 0xFC) * (f21 * val);
    if (res < 0.0f) res = 0.0f;
    return res;
}
