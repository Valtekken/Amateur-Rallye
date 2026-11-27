#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern int func_001930D8(int,int), func_00193138(int,int), func_00193B60(void);
extern void *func_001931C0(int,int);
extern f32 func_00193220(int,int), func_00193280(int,int), func_001932E0(int,int);
extern void func_001D4040(void*,const char*), func_0021E4F0(void*);
extern int func_003FA310(char*,const char*,...);
extern void *func_001E3820(s32,s32,void*);
extern s32 func_001E4280(void);
extern char D_0044BC40[], D_0044BC48[];
extern s32 D_0040E5FC, D_0048D738;
static inline void setkey(char *a, char *buf, const char *fmt) {
    int n = func_001930D8(func_00193B60(), A(a, s32, 0xC));
    func_003FA310(buf, fmt, n);
    func_001D4040(a + 0x2C, buf);
}
void func_0014B6C8(char *a, char *b) {
    char buf[0x10];
    void *p, *q;
    s32 n;
    f32 v, f[3];
    volatile char pad[0x10];
    if (!func_00193138(func_00193B60(), A(a, s32, 0xC))) func_0021E4F0(b);
    p = func_001931C0(func_00193B60(), A(a, s32, 0xC));
    A(a, f32, 0x10) = A(p, f32, 0);
    A(a, f32, 0x14) = A(p, f32, 4);
    A(a, f32, 0x18) = func_00193220(func_00193B60(), A(a, s32, 0xC));
    A(a, f32, 0x1C) = func_00193280(func_00193B60(), A(a, s32, 0xC));
    A(a, f32, 0x20) = func_001932E0(func_00193B60(), A(a, s32, 0xC));
    setkey(a, buf, D_0044BC40);
    n = D_0048D738;
    if (D_0040E5FC == 0) { func_001D4040(&D_0048D738, D_0044BC48); D_0040E5FC = 1; }
    A(a, s32, 0x30) = n;
    q = A(b, void *, 0x4C);
    if (q != 0) {
        f[0] = A(a, f32, 0x10); f[1] = A(a, f32, 0x14); f[2] = 0.0f;
        A(q, f32, 0x50) = f[0];
        A((char *)q + 0x50, f32, 0x4) = f[1];
        A((char *)q + 0x50, f32, 0xC) = 1.0f;
        A((char *)q + 0x50, f32, 0x8) = f[2];
    }
    p = func_001E3820(func_001E4280(), (s32)(a + 0x2C), a + 0x30);
    if (p != 0) {
        v = A(A(p, void *, 0x8), f32, 0xC) * 60.0f / 6.283185f;
        A(a, f32, 0x24) = v;
        if (v < 1.0f) A(a, f32, 0x24) = 1000.0f;
    }
}
