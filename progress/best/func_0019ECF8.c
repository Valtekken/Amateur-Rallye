extern char D_00472198[];
extern char D_004721B0[];
extern char D_004721C0[];
extern char D_004721D8[];
extern char D_004721E8[];
extern char D_00472200[];
extern char D_00472218[];
extern char D_00472228[];
extern char D_00472238[];
extern char D_0044FD28[];
extern char D_00472250[];
extern void *D_00473E50;
extern void *func_001D4040(void *dst, const char *src);

void *func_0019ECF8(void *arg0) {
    char buf[16];
    struct Obj {
        s32 f0;
        u32 f4;
        void *f8;
        u32 fC;
        u32 f10;
        u32 f14;
        u32 f18;
        u32 f1C;
        u32 f20;
        u32 f24;
        u32 f28;
        u32 f2C;
        u32 f30;
        void *f34;
        s32 f38;
        s32 f3C;
        s32 f40;
    } *o = (struct Obj *)arg0;
    u32 sp0;
    void *p14, *p18, *p1C, *p20, *p24, *p28, *p2C, *p30, *sp10p;

    p14 = &o->f14;
    p18 = &o->f18;
    p1C = &o->f1C;
    p20 = &o->f20;
    p24 = &o->f24;
    p28 = &o->f28;
    p2C = &o->f2C;
    p30 = &o->f30;
    sp10p = &o->f34;

    func_001D4040(buf, D_00472198);
    sp0 = *(u32 *)buf;

    o->fC = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->f18 = 0;
    o->f1C = 0;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2C = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f40 = 0;

    o->f4 = sp0;
    o->f0 = -1;
    o->f8 = &D_00473E50;

    func_001D4040(&o->f10, D_004721B0);
    func_001D4040(p14, D_004721C0);
    func_001D4040(p18, D_004721D8);
    func_001D4040(p1C, D_004721E8);
    func_001D4040(p28, D_00472200);
    func_001D4040(p20, D_00472218);
    func_001D4040(p24, D_00472228);
    func_001D4040(p2C, D_00472238);
    func_001D4040(p30, D_0044FD28);
    func_001D4040(sp10p, D_00472250);

    return arg0;
}
