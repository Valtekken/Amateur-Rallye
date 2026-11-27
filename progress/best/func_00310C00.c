typedef struct S310 { u8 pad0[0x10]; void *f10; void *f14; u8 pad18[0x1C]; s32 f34; s32 f38; u8 pad3C[0x84]; s32 fC0; } S310;
typedef struct T310 { s32 f0, f4, f8, fC; s32 f10; } T310;
extern void D_002AD530(void *);
extern void D_002AD390(void *);
extern void *D_002AD408(s32);
extern void func_002B2028(void *);

void func_00310C00(S310 *arg0) {
    void *p, *old, *old2;
    T310 *t, *t2, *t3, *t4;
    S310 *s1;
    p = arg0->f14;
    if (p) {
        void *q = *(void **)((char *)p + 4);
        if (q) D_002AD530(q);
        D_002AD390(p);
    }
    t = D_002AD408(0x14);
    old = arg0->f10;
    arg0->f14 = t;
    t->f10 = arg0->f38;
    t->f0 = 0;
    t->f4 = 0;
    t->f8 = 0;
    t->fC = 0;
    if (old) {
        func_002B2028(*(void **)((char *)old + 4));
        D_002AD390(old);
    }
    t2 = D_002AD408(0x14);
    s1 = (S310 *)((char *)arg0 + 0x40);
    arg0->f10 = t2;
    old2 = arg0->f14;
    t2->f10 = arg0->f38;
    t2->f0 = 0;
    t2->f4 = 0;
    t2->f8 = 0;
    t2->fC = 0;
    ((T310 *)old2)->fC = 0;
    ((T310 *)arg0->f10)->fC = 0;
    arg0->f34 = -1;
    p = s1->f14;
    if (p) {
        void *q = *(void **)((char *)p + 4);
        if (q) D_002AD530(q);
        D_002AD390(p);
    }
    t3 = D_002AD408(0x14);
    t3->f0 = 0;
    t3->f10 = s1->f38;
    t3->f4 = 0;
    t3->f8 = 0;
    t3->fC = 0;
    s1->f14 = t3;
    old = s1->f10;
    if (old) {
        func_002B2028(*(void **)((char *)old + 4));
        D_002AD390(old);
    }
    t4 = D_002AD408(0x14);
    t4->f0 = 0;
    t4->f10 = s1->f38;
    t4->f4 = 0;
    t4->f8 = 0;
    t4->fC = 0;
    s1->f10 = t4;
    ((T310 *)s1->f14)->fC = 0;
    ((T310 *)s1->f10)->fC = 0;
    s1->f34 = -1;
    arg0->fC0 = 0;
}
