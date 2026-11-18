extern s32 D_002AD408(s32);
extern void *func_00205BF8(s32);
extern void *func_0021E290(s32);
extern void func_0021E540(void*,void*);
extern void func_001D4040(void*,const char*);
extern void func_0021E748(void*,void*);
extern void func_0021E740(void*,s32);
extern void func_001D4810(void*,const char*);
extern void func_002062A8(void*,void*);
extern void func_00205CE0(void*,void*);
extern char D_004490D0[], D_004490E0[];

typedef struct { char pad[0x74]; s32 f74; s64 f78; } A;

void *func_0012AB18(void) {
    A *a;
    void *b;
    s32 sp[4];
    a = (A*)func_00205BF8(D_002AD408(0x90));
    a->f78 &= -3;
    b = func_0021E290(D_002AD408(0x7C));
    *(s32*)((char*)b+0x74) = 0;
    func_0021E540(b, a);
    func_001D4040(sp, D_004490D0);
    func_0021E748(b, sp);
    func_0021E740(b, 3);
    *(volatile s32*)sp = 0;
    func_001D4810(sp, D_004490E0);
    func_002062A8(a, sp);
    func_00205CE0(a, 0);
    return b;
}
