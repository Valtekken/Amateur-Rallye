#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void *D_002AD408(s32);
extern void func_001D4040(char *, const char *);
extern void *func_00262BD8(void *, void *);
extern void func_00262E20(void *, void *);
extern void func_003FA310(void *, const char *, s64);
extern s32 D_0040E8A0;
extern s32 D_004267AC;
extern s32 D_004267B0;
extern char D_0044EC10[];
extern char D_0044EDB0[];
extern char D_0048DD78[];

void func_001602C8(void *arg0, void *arg1) {
    char buf[0x20];
    if (D_0040E8A0 == 0) {
        func_001D4040(D_0048DD78, D_0044EDB0);
        D_0040E8A0 = 1;
    }
    f32 lim = 0.05f;
    void *n = func_00262BD8(D_002AD408(0x70), D_0048DD78);
    A(arg0, void *, 0xC) = n;
    A(n, s32, 0xC) = A(n, s32, 0xC) | 0x10;
    {
        void *m = A(arg0, void *, 0xC);
        f32 t = A(arg0, f32, 0x14);
        A(m, s32, 0x8) = 1;
        A(m, f32, 0x2C) = t;
    }
    {
        void *m = A(arg0, void *, 0xC);
        f32 t = A(arg0, f32, 0x18);
        A(m, s32, 0x8) = 1;
        A(m, f32, 0x28) = t;
    }
    {
        void *m = A(arg0, void *, 0xC);
        A(m, s32, 0x1C) = 1;
    }
    {
        void *m = A(arg0, void *, 0xC);
        if (A(m, f32, 0x20) >= lim) D_004267B0--;
        A(m, s32, 0x8) = 1;
        A(m, f32, 0x20) = 0.0f;
    }
    func_00262E20(A(arg0, void *, 0xC), arg1);
    {
        void *m = A(arg0, void *, 0xC);
        if (A(m, s32, 0x18) == 0) {
            if (A(m, f32, 0x20) >= lim) D_004267B0++;
            D_004267AC++;
        }
        A(m, s32, 0x18) = 1;
    }
    void *p50 = A(arg1, void *, 0x50);
    s64 mask = ((s64)-1073741825 << 2) | 3;
    A(p50, s64, 0x70) &= mask;
    func_003FA310(buf, D_0044EC10, mask);
    func_001D4040((char *)arg0 + 0x10, buf);
    A(arg1, s32, 0x0) = A(arg1, s32, 0x0) & -2;
}
