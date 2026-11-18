typedef struct {
    s32 value;
} CopyTag;

extern s32 func_002C5160(s32, s32, s32, CopyTag);
extern void func_0016E1D8(void *);
extern void func_0016DFD8(void *);
extern s32 func_0016DE80(void *);

s32 func_003978C8(s32 a, s32 b, s32 c, CopyTag d) {
    return func_002C5160(a, b, c, d);
}

void func_00172D78(void *arg0, s32 arg1) {
    void **p14 = (void **)((char *)arg0 + 0x14);
    void **p18 = (void **)((char *)arg0 + 0x18);
    s32 count = ((s32)((char *)p18 - (char *)p14)) >> 2;
    s32 val = *(s32 *)((char *)arg0 + 0x10);
    for (s32 i = 0; i < count; ++i) {
        void *obj = p14[i];
        *(s32 *)((char *)obj + 0x24) = val;
    }
    func_0016E1D8(arg0);
}

void func_00173438(void *arg0) {
    void **p14 = (void **)((char *)arg0 + 0x14);
    void **p18 = (void **)((char *)arg0 + 0x18);
    s32 count = ((s32)((char *)p18 - (char *)p14)) >> 2;
    for (s32 i = 0; i < count; ++i) {
        void *obj = p14[i];
        *(s32 *)((char *)obj + 0x28) = 0;
        *(s32 *)((char *)obj + 0x20) = 0;
    }
    void **p20 = (void **)((char *)arg0 + 0x20);
    void **p24 = (void **)((char *)arg0 + 0x24);
    s32 count2 = ((s32)((char *)p24 - (char *)p20)) >> 2;
    for (s32 i = 0; i < count2; ++i) {
        void *obj = p20[i];
        *(s32 *)((char *)obj + 0x1D4) = 0;
    }
    func_0016DFD8(arg0);
}

void func_00172B70(void *arg0, void *arg1) {
    *(s32 *)((char *)arg0 + 0x10) = *(s32 *)func_0016DE80((char *)arg1 + 0x10);
    s32 diff = *(s32 *)((char *)arg0 + 0x18) - *(s32 *)((char *)arg0 + 0x14);
    s32 cnt = diff >> 2;
    for (s32 i = 0; i < cnt; ++i) {
        s32 base = *(s32 *)((char *)arg0 + 0x14) + i * 4;
        s32 val = *(s32 *)((char *)arg0 + 0x10);
        *(s32 *)((char *)base + 0x24) = val;
    }
}
