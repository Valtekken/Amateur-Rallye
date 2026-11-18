void *func_003DB0C0(s32);
void *func_003DB190(void *, s32);
void func_003DB120(void *);
void func_003DB148(void *, void *);

void *func_003DB558(void *arg0, s32 arg1) {
    void *p = func_003DB190(arg0, 1);
    *(s32 *)((u8 *)p + 0x14) = arg1;
    *(s32 *)((u8 *)p + 0x10) = 1;
    return p;
}

s32 func_003DB410(s32 x) {
    s32 n = 0;
    if (!(x & 0xFFFF0000)) { n = 0x10; x <<= 0x10; }
    if (!(x & 0xFF000000)) { n += 8; x <<= 8; }
    if (!(x & 0xF0000000)) { n += 4; x <<= 4; }
    if (!(x & 0xC0000000)) { n += 2; x <<= 2; }
    if (x >= 0) {
        n++;
        if (!(x & 0x40000000)) return 0x20;
    }
    return n;
}

void *func_003DB190(void *arg0, s32 arg1) {
    if (arg0 == NULL) return func_003DB0C0(arg1);
    if (((s32 *)arg0)[1] < arg1) {
        void *newp = func_003DB0C0(arg1);
        func_003DB148(newp, arg0);
        func_003DB120(arg0);
        return newp;
    }
    return arg0;
}

void func_003DB148(void *arg0, void *arg1) {
    u8 *dst = (u8 *)arg0 + 0x14;
    s32 count = *(s32 *)((u8 *)arg1 + 0x10);
    u16 val = *(u16 *)((u8 *)arg1 + 0xE);
    u8 *src;
    *(s32 *)((u8 *)arg0 + 0x10) = count;
    src = (u8 *)arg1 + 0x14;
    count--;
    if (count < 0) return;
    *(u16 *)((u8 *)arg0 + 0xE) = val;
    do {
        *(s32 *)dst = *(s32 *)src;
        count--;
        src += 4;
        dst += 4;
    } while (count >= 0);
}
