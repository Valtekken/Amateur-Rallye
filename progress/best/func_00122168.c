extern s32 D_002AD408(s32);
extern void *func_00205BF8(s32);
extern void *func_0021E290(s32);
extern void func_0021E540(void*,void*);
extern void func_001D4040(void*,const char*);
extern void func_0021E748(void*,void*);
extern void func_0021E740(void*,s32);
extern char D_00447D38[];

typedef struct { char pad[0x74]; s32 f74; s64 f78; } A;
typedef struct { char pad[0x70]; s64 f70; } B;

void *func_00122168(void) {
    A *a; void *b; B *t6; s32 sp[4];
    a = (A*)func_00205BF8(D_002AD408(0x90));
    a->f78 = (a->f78 & -3 & -2 & -5) | 4;
    b = func_0021E290(D_002AD408(0x7C));
    *(s32*)((char*)b+0x74) = 0;
    func_0021E540(b, a);
    func_001D4040(sp, D_00447D38);
    func_0021E748(b, sp);
    func_0021E740(b, 4);
    t6 = *(B**)((char*)b+0x50);
    t6->f70 = (t6->f70 & 0xFFFFFFFFBFFFFFFFULL) | 0x40000000ULL;
    return b;
}
