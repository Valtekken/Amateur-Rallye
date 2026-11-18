/* identical to func_003DB410 (matched), with its names changed by decompdecomp */
extern void *func_002B1FC0(s32);
extern void func_003DB120(void *);

void *func_003DB0C0(s32 arg0) {
    s32 size = arg0 > 2 ? arg0 : 3;
    s32 cap = 1 << size;
    void *p = func_002B1FC0(cap * 4 + 0x14);
    *(s32 *)((u8 *)p + 4) = size;
    *(s32 *)((u8 *)p + 8) = cap;
    *(s32 *)((u8 *)p + 0x10) = 0;
    *(u16 *)((u8 *)p + 0xE) = 0;
    *(u16 *)((u8 *)p + 0xC) = 0;
    return p;
}

void func_003DB148(void *arg0, void *arg1) {
    s32 count = *(s32 *)((u8 *)arg1 + 0x10);
    u8 *dst = (u8 *)arg0 + 0x14;
    *(s32 *)((u8 *)arg0 + 0x10) = count;
    u8 *src = (u8 *)arg1 + 0x14;
    count--;
    *(u16 *)((u8 *)arg0 + 0xE) = *(u16 *)((u8 *)arg1 + 0xE);
    if (count < 0)
        return;
    do {
        *(s32 *)dst = *(s32 *)src;
        count--;
        src += 4;
        dst += 4;
    } while (count >= 0);
}

void *func_003DB190(void *arg0, s32 arg1) {
    if (arg0 == NULL)
        return func_003DB0C0(arg1);
    if (*(s32 *)((u8 *)arg0 + 4) < arg1) {
        void *newp = func_003DB0C0(arg1);
        func_003DB148(newp, arg0);
        func_003DB120(arg0);
        arg0 = newp;
    }
    return arg0;
}

s32 func_003FFD50(u32 x) {
    s32 c = 0;
    if ((x & 0xFFFF0000) == 0) { c = 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { c += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { c += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { c += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) {
        c++;
        if ((x & 0x40000000) == 0) return 32;
    }
    return c;
}
