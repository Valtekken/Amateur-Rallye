extern void func_001D1AD8(void *);
extern void *func_001DF720(void *, s32, s32);
extern s32 func_002A1748(void *, void *, void *, s32);
extern s32 func_001D4010(void *);
extern void func_003F9698(const char *, s32, s32);
extern void *func_002A1700(void);
extern void func_002A1408(void *, s32);
extern char D_0047C378[];

typedef struct { s32 ref; void *p; s16 off; void (*fn3)(void *, s32); } Rel;
typedef struct { u8 pad[8]; s16 off; void (*fn3)(void *, s32); } VT;
typedef struct { void *p0; u8 pad[0x10]; void *p14; s32 f18, f1C; } This;

void func_002A0EF0(This *arg0) {
    u8 sp64[0x64];
    u8 sp80[0x40];
    s32 var18 = 0, var5 = 0, var6 = 0;
    void *t2, *t6, *t16, *vt;
    Rel *r;
    VT *v;

    func_001D1AD8(sp64);
    t2 = arg0->p0;
    if (t2) { var5 = *(s32 *)((u8 *)t2 + 8); }
    if (t2) { var6 = *(s32 *)((u8 *)t2 + 0xC); }
    t16 = func_001DF720(sp64, var5, var6);
    t6 = arg0->p0;
    if (t6) {
        r = (Rel *)t6;
        if (--r->ref == 0) {
            v = (VT *)r->p;
            v->fn3((u8 *)r + v->off, 3);
        }
        arg0->p0 = (void *)0;
    }
    if (t16) {
        var18 = func_002A1748(sp80, t16, &arg0->f18, arg0->f1C);
        v = *(VT **)((u8 *)t16 + 0x10);
        v->fn3((u8 *)t16 + v->off, 3);
    } else {
        func_003F9698(D_0047C378, func_001D4010(&arg0->f18), *(s32 *)(sp64 + 0xC));
    }
    if (!var18) {
        v = *(VT **)&arg0->p14;
        v->fn3((u8 *)arg0 + v->off, 0);
    }
    *(s32 *)((u8 *)func_002A1700() + 8) = arg0->f18;
    func_002A1408(func_002A1700(), var18);
}
