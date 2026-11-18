s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

extern void func_001D4040(void *, const char *);
extern const char D_0047AD30[];
extern void *D_0047D638;

void *func_0027E468(void *arg0) {
    s32 k;
    func_001D4040(&k, D_0047AD30);
    ((s32*)arg0)[0] = -1;
    ((s32*)arg0)[1] = k;
    ((s32*)arg0)[2] = (s32)&D_0047D638;
    ((s32*)arg0)[3] = 0;
    ((s32*)arg0)[5] = 0;
    ((s32*)arg0)[4] = 0;
    return arg0;
}

extern char D_0047ACF0[];
extern char D_0047D678[];

void *func_0027DFB0(void *arg0) {
    u32 k;
    s32 *p = (s32*)arg0;
    f32 *fp = (f32*)arg0;
    s32 vtable = (s32)&D_0047D678;
    f32 zero = 0.0f;
    func_001D4040(&k, D_0047ACF0);
    p[0] = -1;
    p[6] = 0;
    p[1] = (s32)k;
    p[2] = vtable;
    fp[3] = zero;
    fp[5] = zero;
    fp[4] = zero;
    func_001D4040(p + 6, (const char *)0);
    return arg0;
}

void func_0027E5B8(void *arg0, s32 arg1) {
    void **base = (void**)((char*)arg0 + 0xC);
    void **it = base[0];
    void **end = base[1];
    if (it != end) {
        do {
            void *obj = *it;
            void **vt;
            s16 off;
            void (*fn)(void*, s32, void*);
            it = (void**)((char*)it + 4);
            vt = *(void***)((char*)obj + 8);
            off = *(s16*)((char*)vt + 0x30);
            fn = *(void(**)(void*, s32, void*))((char*)vt + 0x34);
            fn((char*)obj + off, arg1, obj);
        } while (it != end);
    }
}
