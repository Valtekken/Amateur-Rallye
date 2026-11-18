typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

void func_001B2370(void *arg0, void *arg1) {
    void *obj = *(void **)((u8 *)arg0 + 0xC8);
    if (obj != NULL) {
        void *vt = *(void **)obj;
        s16 off = *(s16 *)((u8 *)vt + 0x8);
        void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(void **)((u8 *)arg0 + 0xC8) = arg1;
}

extern void *D_004731D8;
extern void func_001B1D50(void *, s32);
extern void *D_002AD390(void *);
void func_001B22F8(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0xDC) = &D_004731D8;
    void *obj = *(void **)((u8 *)arg0 + 0xC8);
    if (obj != NULL) {
        void *vt = *(void **)obj;
        s16 off = *(s16 *)((u8 *)vt + 0x8);
        void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    func_001B1D50((u8 *)arg0 + 0xA4, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void func_002060F8(s32);
extern void func_00205CE0(s32, s32);
void func_001B1838(void *arg0, void *arg1) {
    s32 t = *(s32 *)((u8 *)arg1 + 0x4C);
    func_002060F8(t);
    s32 v = *(s32 *)((u8 *)arg0 + 0xC) + 1;
    *(s32 *)((u8 *)arg0 + 0xC) = v;
    if (*(s32 *)((u8 *)arg0 + 0x18) < v) {
        *(s32 *)((u8 *)arg0 + 0xC) = *(s32 *)((u8 *)arg0 + 0x14);
    }
    func_00205CE0(t, *(s32 *)((u8 *)arg0 + 0xC));
}
