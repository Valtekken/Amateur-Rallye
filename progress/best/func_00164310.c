typedef struct { u32 data[3]; } E12;
typedef struct { E12 *b, *e, *c; } V12;
typedef struct { void *p0; s32 f4; void *p8; void *pC; u8 pad[4]; E12 *b, *e, *c; } A;
typedef void (*Fn)(void *, s32, void *);
extern u32 D_0040E618[];
extern void func_0016A6B8(s32, s32), D_002AD390(), func_002B2028(void *);

void func_00164310(A *arg0, s32 flags) {
    E12 *e, *begin, *p, *cap;
    int n;
    void *obj;

    obj = arg0->p8;
    if (obj) {
        Fn fn = *(Fn *)(*(void **)((char *)obj + 0x14) + 0xC);
        void *vt = *(void **)((char *)obj + 0x14);
        fn((char *)obj + *(s16 *)((char *)vt + 8), 3, obj);
    }
    if (arg0->f4) func_0016A6B8(arg0->f4, 3);
    obj = arg0->p0;
    if (obj) {
        Fn fn = *(Fn *)(*(void **)obj + 0xC);
        void *vt = *(void **)obj;
        fn((char *)obj + *(s16 *)((char *)vt + 8), 3, obj);
    }
    if (arg0->pC) {
        V12 *tmp = (V12 *)&arg0->b;
        D_002AD390(arg0->pC, tmp);
    }
    {
        V12 *v = (V12 *)&arg0->b;
        e = v->e;
        begin = arg0->b;
        for (; begin < e; begin++) {}
        cap = v->c;
        p = v->b;
        n = cap - p;
        if (n) {
            if (n * 12) func_002B2028(p);
            else { *(u32 *)p = D_0040E618[-1]; D_0040E618[-1] = (u32)p; }
        }
    }
    if (flags & 1) D_002AD390(arg0);
}
