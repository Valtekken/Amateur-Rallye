extern void *D_002AD408(int);
extern void *func_00205BF8(void *);
extern void *func_0021E290(void *);
extern void func_0021E540(void *, void *);
extern void func_001D4040(void *, const char *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, int);
extern void *func_0017E620(void);
extern void func_001D4810(void *, void *);
extern void func_002062A8(void *, void *);
extern void func_00205CE0(void *, s8);
extern char D_004490C0[];

void *func_0012A9C0(s8 arg0) {
    void *t1;
    void *t2;
    s64 flags;
    char sp_buf[16];
    f32 sp_floats[4];

    t2 = func_00205BF8(D_002AD408(0x90));
    t1 = func_0021E290(D_002AD408(0x7C));

    flags = *(s64 *)((char *)t2 + 0x78);
    flags &= -3;
    *(s64 *)((char *)t2 + 0x78) = flags;

    *(s32 *)((char *)t1 + 0x74) = 0;

    func_0021E540(t1, t2);
    func_001D4040(sp_buf, D_004490C0);
    func_0021E748(t1, sp_buf);
    func_0021E740(t1, 3);

    {
        void *obj = func_0017E620();
        void **vtable = *(void ***)obj;
        void *(*fn)(void *, int, void *) = (void *(*)(void *, int, void *))vtable[0x34 / 4];
        s16 adj = *(s16 *)((char *)vtable + 0x30);
        void *ret = fn((char *)obj + adj, 9, (void *)fn);
        func_001D4810(sp_buf, ret);
    }

    sp_buf[0] = 0;
    func_002062A8(t2, sp_buf);
    func_00205CE0(t2, arg0);

    flags = *(s64 *)((char *)t2 + 0x78);
    flags = (flags & -2) | 1;
    *(s64 *)((char *)t2 + 0x78) = flags;

    sp_floats[0] = 1.0f;
    sp_floats[1] = 1.0f;
    sp_floats[2] = 1.0f;
    sp_floats[3] = 1.0f;
    *(f32 *)((char *)t2 + 0x10) = sp_floats[0];
    *(f32 *)((char *)t2 + 0x14) = sp_floats[1];
    *(f32 *)((char *)t2 + 0x18) = sp_floats[2];
    *(f32 *)((char *)t2 + 0x1C) = sp_floats[3];

    *(s32 *)((char *)t2 + 0x88) += 1;

    return t1;
}
