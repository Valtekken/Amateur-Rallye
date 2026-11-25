extern void *D_002AD408(int);
extern void *D_0044DD18;
extern s32 D_00494C18;
extern void func_001DF2B0(void *, s32, void *);
extern s32 func_001E4280(void);
extern s32 func_001E6470(void *, s32, void *, s32);
extern s32 func_00222D40(void *);

typedef struct { s32 a; s32 pad[3]; s32 b; } L;

void *func_002A1880(s32 arg0, void *arg1, s32 arg2) {
    char *obj = (char *)D_002AD408(0x24);
    char *p = obj + 0x14;
    void *vt = &D_0044DD18;
    s32 d = D_00494C18;
    L l;
    *(void **)(obj + 0x10) = vt;
    *(s32 *)(obj + 8) = 0;
    *(s32 *)(obj + 0xC) = 0;
    *(s32 *)(obj + 4) = 0;
    *(s32 *)(obj + 0) = 0;
    *(s32 *)(obj + 0x14) = 0;
    *(volatile s32 *)(p + 8) = 0;
    *(volatile s32 *)(p + 4) = 0;
    *(s32 *)(obj + 0x20) = d;
    l.a = 0;
    func_001DF2B0(obj, func_001E6470(&l.a, func_001E4280(), arg1, arg2), 0);
    if (arg2 == 4) {
        func_001DF2B0(obj, func_00222D40(&l.b), 0);
    }
    return obj;
}
