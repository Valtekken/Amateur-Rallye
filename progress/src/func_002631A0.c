s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_002631A0(void *arg0, void *arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32);

    obj = *(void **)((u8 *)arg0 + 0x78);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3);
    }
    *(void **)((u8 *)arg0 + 0x78) = arg1;
}

void func_00262FB8(void *arg0) {
    void **p = (void **)func_001D6BB0();
    void **q = *p;
    void *v = *q;
    void (*fn)(void *, void *) = *(void (**)(void *, void *))((u8 *)v + 0x64);
    fn((u8 *)q + *(s16 *)((u8 *)v + 0x60), arg0);
}

extern s32 D_004267A8;
extern s32 D_004267AC;
extern s32 D_004267B0;
extern void D_004285F0;
extern void D_00479C18;
extern void func_002B5708(void*, void*, s32, s32, s32);

void func_00262E28(void) {
    func_002B5708(&D_004285F0, &D_00479C18, D_004267A8, D_004267AC, D_004267B0);
}
