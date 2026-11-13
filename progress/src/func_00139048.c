extern void *D_002AD408(int);
extern int func_00110778(void);
extern int func_0011DA70(void *, int);
extern void func_0011E808(int, int);
extern void func_0011E880(int, int);
extern void func_001D4040(void *, const char *);
extern int func_001E3598(int, void *);
extern void func_001E3D10(int, void *, int);
extern void func_001E3EC0(int, void *, int);
extern int func_001E4280(void);
extern void *func_0021E9C0(int, void *);
extern int func_0021F4B0(void);

extern char D_0044AC68[], D_0044AC50[], D_00444AF0[], D_0044ACA0[], D_00444AD0[], D_0044ACB8[], D_00448678[];
extern int D_0040E580;
extern void D_0044CEC0;

static inline void *init(void *p, const char *s) { func_001D4040(p, s); return p; }

void func_00139048(void *arg0) {
    char buf[16];
    char buf2[16];
    int *p = (int *)arg0;
    int t, t2, t3, t4, t5, t6, t7;
    void **pp;
    void *r, *q;
    long long v;
    p[3] = (int)func_0011DA70(D_002AD408(0x10), 0x34);
    t = func_001E4280();
    init(buf, D_0044AC68);
    if (func_001E3598(t, buf) == 0) {
        t2 = func_001E4280();
        init(buf2, D_0044AC50);
        func_001E3EC0(t2, buf2, 0);
        D_0040E580 = 1;
        t3 = func_001E4280();
        init(buf2, D_00444AF0);
        func_001E3EC0(t3, buf2, 0x60);
    } else {
        D_0040E580 = 0;
    }
    func_00110778();
    t4 = func_001E4280();
    init(buf, D_0044ACA0);
    func_001E3EC0(t4, buf, -1);
    t5 = func_001E4280();
    init(buf, D_00444AD0);
    func_001E3D10(t5, buf, 0);
    pp = D_002AD408(4);
    p[6] = (int)pp;
    *pp = (void *)&D_0044CEC0;
    t6 = func_0021F4B0();
    init(buf, D_0044ACB8);
    r = func_0021E9C0(t6, buf);
    if (r != 0) {
        q = *(void **)((char *)r + 0x4C);
        if (q != 0) {
            v = *(long long *)((char *)q + 0x78);
            v = v & ~1LL;
            *(long long *)((char *)q + 0x78) = v;
        }
    }
    t7 = func_001E4280();
    init(buf, D_00448678);
    func_001E3EC0(t7, buf, 0);
    func_0011E808(p[3], 0);
    func_0011E880(p[3], 0);
}
