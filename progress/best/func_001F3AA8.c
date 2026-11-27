typedef struct { s32 v[4]; } S16F;
typedef struct { s32 pad[6]; void *f18; void *f1C; s32 pad2; u8 *f24; } A3;
typedef struct { void *f0; void *f4; s32 pad[3]; s32 f14; } B3;
extern void *D_002AD408(s32);
extern void *func_001F27A0(void *);
extern void func_001D2CD8(void *, void *);
extern u32 func_001F25D0(void *);
extern void func_00212688(S16F *, u8 *, S16F *);
extern s32 func_00212BA0(void *, u8 *, void *, void *);
extern void func_001DF2B0(void *, u32, s32);
extern void func_001F3C10(void *, void *, void *, u32);
extern const char D_004777B8[];

void *func_001F3AA8(A3 *arg0, B3 *arg1) {
    S16F sp0, sp10, sp20, sp30, sp40, sp50, sp60;
    S16F *ps60 = &sp60;
    u8 *p24 = (u8 *)((char *)arg0 + 0x24);
    void *last, *alloc;
    B3 *node;
    s32 var4;
    arg0->f1C = func_001F27A0(D_002AD408(0x3C));
    func_001D2CD8((u8 *)arg0->f1C + 0x14, (void *)arg1->f14);
    ((void **)arg0->f1C)[6] = 0;
    sp60.v[0] = (s32)func_001F25D0(D_002AD408(0x24));
    func_00212688(&sp0, p24, ps60);
    sp10.v[0] = (s32)arg0->f24;
    var4 = 0;
    if ((s32)arg0->f24 == (u32)sp0.v[0] || (u32)((s32 *)sp0.v)[4] > (u32)sp60.v[0]) var4 = 1;
    if (var4 != 0) {
        sp30.v[0] = (sp50.v[0] = sp0.v[0]);
        sp40.v[0] = sp60.v[0];
        sp40.v[1] = 0;
        func_00212BA0(&sp20, p24, &sp50, &sp40);
        sp0.v[0] = sp20.v[0];
    }
    alloc = D_002AD408(0xC);
    ((s32 *)alloc)[2] = (((s32 *)alloc)[1] = (((s32 *)alloc)[0] = 0));
    ((void **)sp0.v)[5] = alloc;
    func_001D2CD8((void *)((u32)sp60.v[0] + 0x14), (void *)D_004777B8);
    func_001DF2B0(arg0->f1C, (u32)sp60.v[0], 0);
    node = (B3 *)arg1->f0;
    last = arg0->f1C;
    while (node != 0) {
        func_001F3C10(arg0, node, last, (u32)sp60.v[0]);
        node = (B3 *)node->f4;
    }
    return arg0->f1C;
}
