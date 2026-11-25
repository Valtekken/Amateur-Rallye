extern void *D_002AD408(int);
extern void *func_0021E290(void *);
extern void *func_00205BF8(void *);
extern void func_0021E540(void *, void *);
extern void func_001D4040(void *, void *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, int);
extern void func_001D4810(void *, char *);
extern void func_002062A8(void *, void *);
extern void func_00205CE0(void *, void *);
extern char D_00446858[];

void *func_001138C0(void *arg0) {
    int sp[4];
    void *t1;
    void *t2;
    long long flags;
    int v;

    t1 = func_0021E290(D_002AD408(0x7C));
    t2 = func_00205BF8(D_002AD408(0x90));

    flags = *(long long *)((char *)t2 + 0x78);
    v = *(int *)((char *)t2 + 0x88);
    flags = flags & -3;
    *(int *)((char *)t2 + 0x64) = 2;
    flags = flags & -2;
    v = v + 1;
    *(long long *)((char *)t2 + 0x78) = flags;
    *(int *)((char *)t2 + 0x88) = v;

    func_0021E540(t1, t2);
    func_001D4040(sp, arg0);
    func_0021E748(t1, sp);
    func_0021E740(t1, 2);

    *(int *)t1 = *(int *)t1 & -2;
    sp[0] = 0;
    func_001D4810(sp, D_00446858);
    func_002062A8(t2, sp);
    func_00205CE0(t2, 0);

    return t1;
}
