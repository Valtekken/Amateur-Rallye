extern s32 D_002AD408(s32);
extern void *func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void *, void *, s32, s32);
extern void func_001D4040(void *, const char *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, s32);
extern char D_00446850[];

typedef struct { u8 pad[0x74]; void *unk74; } Temp1;
typedef struct { u8 pad[0x50]; f32 f0,f1,f2; u8 pad2[0x1C]; s64 flags; } Temp2;
typedef struct { f32 f0,f1,f2; } Arg1;

void func_001136A8(void *arg0, void *arg1) {
    u32 sp0;
    Temp1 *t1;
    Temp2 *t2;
    t1 = func_0021E290(D_002AD408(0x7C));
    ((Temp1*)arg0)->unk74 = t1;
    t2 = func_00205BF8(D_002AD408(0x90));
    t2->flags = (((t2->flags & -3) | 2) & -2) | 1;
    t2->f0 = ((Arg1*)arg1)->f0;
    t2->f1 = ((Arg1*)arg1)->f1;
    t2->f2 = ((Arg1*)arg1)->f2;
    t1->unk74 = 0;
    func_0021E540(t1, t2, -2, 1);
    func_001D4040(&sp0, D_00446850);
    func_0021E748(t1, &sp0);
    func_0021E740(t1, 3);
}
