extern void func_003F9698(char *, char *);
extern void func_002B2028(void *, void *, s32, void *, s32, s32, void *, s32);
extern void D_002AD530(void *, s32);
extern s32 D_0040E618;
extern char D_00478C78[], D_00478CA0[];

typedef struct C {
    s32 *vt;
    s32 f4, f8, fC, f10, f14, f18;
    void *f1C;
    s32 f20, f24;
} C;

void func_0021C7E8(C *c) {
    s32 **vt;
    void (*fn1)(C *, s32);
    void (*fn2)(C *, s32);
    void **head;
    void *p, *q, *base;
    s32 n;
    func_003F9698(D_00478C78, D_00478CA0);
    vt = (s32 **)c->vt;
    fn1 = (void (*)(C *, s32))vt[3];
    fn1((C *)((char *)c + (s32)vt[2]), (s32)vt[3]);
    fn2 = (void (*)(C *, s32))vt[5];
    fn2((C *)((char *)c + (s32)vt[4]), (s32)vt[5]);
    head = (void **)&c->f1C;
    if (c->f1C != head[1]) {
        do {
            p = head[1];
            head[1] = (void *)((char *)p - 4);
            if (p) {
                n = *(s32 *)((char *)p - 0x10);
                q = (void *)((char *)p + n * 0x14);
                if (p != q) {
                    base = (void *)((char *)q - 0x14);
                    do { base = (void *)((char *)base - 0x14); } while (p != base);
                }
                D_002AD530((char *)p - 0x10, n);
            }
        } while (c->f1C != head[1]);
    }
    {
        void *start = (void *)(s32)c->f1C;
        void *stop = (void *)(s32)c->f24;
        void *a = (void *)(s32)c->f4;
        void *b = (void *)(s32)c->f8;
        void *d = (void *)(s32)c->fC;
        void *e = (void *)(s32)c->f10;
        void *f = (void *)(s32)c->f14;
        void *g = (void *)(s32)c->f18;
        void *h = (void *)(s32)c->f20;
        n = ((s32)stop - (s32)start) >> 2;
        c->f24 = 0; c->f4 = 0; c->f8 = 0; c->fC = 0;
        c->f10 = 0; c->f14 = 0; c->f18 = 0; c->f1C = 0; c->f20 = 0;
        if (n) {
            if (n * 4) func_002B2028(start, h, (s32)d, a, (s32)b, (s32)stop, start, n);
            else { *(void **)start = *(void **)((char *)&D_0040E618 - 4); *(void **)((char *)&D_0040E618 - 4) = start; }
        }
        n = ((s32)f - (s32)e) >> 2;
        if (n) {
            if (n * 4) func_002B2028(e, h, (s32)d, a, (s32)b, (s32)stop, start, n);
            else { *(void **)e = *(void **)((char *)&D_0040E618 - 4); *(void **)((char *)&D_0040E618 - 4) = e; }
        }
        n = ((s32)d - (s32)a) >> 2;
        if (n) {
            if (n * 4) func_002B2028(a, h, (s32)d, a, (s32)b, (s32)stop, start, n);
            else { *(void **)a = *(void **)((char *)&D_0040E618 - 4); *(void **)((char *)&D_0040E618 - 4) = a; }
        }
    }
}
