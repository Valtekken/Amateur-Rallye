extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern void func_002DF190(void *);
extern u32 D_0040E618[];

typedef struct { void *b, *e, *c; } Vec;
typedef struct { Vec a; Vec b; u8 pad18[4]; Vec c; } S;

void func_003274C8(S *arg0, s32 arg1) {
    void *ib, *oe, *cur, *ob;
    s32 n, m, sz, sz2, sz3, cnt, flag;
    Vec *v;
    u32 cc;

    func_002DF190(arg0->pad18);
    ib = arg0->c.b;
    n = (s32)((u32)arg0->c.c - (u32)ib) >> 2;
    if (n != 0) {
        sz = n << 2;
        if (sz != 0) func_002B2028(ib);
        else { *(void **)ib = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)ib; }
    }
    v = (Vec *)&arg0->b;
    flag = arg1 & 1;
    oe = v->e;
    cur = arg0->b.b;
    if ((u32)cur < (u32)oe) {
        do {
            Vec *vc = (Vec *)cur;
            u32 ec = (u32)vc->c;
            void *eb = vc->b;
            m = (s32)(ec - (u32)eb) >> 2;
            if (m != 0) {
                sz2 = m << 2;
                if (sz2 != 0) func_002B2028(eb);
                else { *(void **)eb = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)eb; }
            }
            cur = (Vec *)((char *)cur + 0x20);
        } while ((u32)cur < (u32)oe);
    }
    ob = v->b;
    cnt = (s32)((u32)v->c - (u32)ob) >> 5;
    if (cnt != 0) {
        sz3 = cnt << 5;
        if (sz3 != 0) func_002B2028(ob);
        else { *(void **)ob = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)ob; }
    }
    oe = arg0->a.e;
    cur = arg0->a.b;
    if ((u32)cur < (u32)oe) {
        do {
            Vec *vc = (Vec *)cur;
            u32 ec = (u32)vc->c;
            void *eb = vc->b;
            m = (s32)(ec - (u32)eb) >> 2;
            if (m != 0) {
                sz2 = m << 2;
                if (sz2 != 0) func_002B2028(eb);
                else { *(void **)eb = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)eb; }
            }
            cur = (Vec *)((char *)cur + 12);
        } while ((u32)cur < (u32)oe);
    }
    cc = (u32)arg0->a.c;
    ob = arg0->a.b;
    cnt = (s32)((cc - (u32)ob) * 0xAAAAAAABu) >> 2;
    if (cnt != 0) {
        sz3 = cnt * 12;
        if (sz3 != 0) func_002B2028(ob);
        else { *(void **)ob = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)ob; }
    }
    if (flag) D_002AD390(arg0);
}
