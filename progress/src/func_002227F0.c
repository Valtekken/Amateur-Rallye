typedef struct E368 { u32 data[92]; } E368;
typedef struct V368 { E368 *b, *e, *c; } V368;
extern u32 D_0040E618[];
extern void func_00222AA0(V368 *);
extern void func_002B2028(void *), D_002AD390(void *);

void func_002227F0(V368 *v, int flags) {
    E368 *e, *begin, *p, *cap;
    int n;
    func_00222AA0(v);
    e = v->e;
    begin = v->b;
    for (; begin < e; begin++) {}
    cap = v->c;
    p = v->b;
    n = cap - p;
    if (n) {
        if (n * 0x170) {
            func_002B2028(p);
        } else {
            *(u32 *)p = D_0040E618[-1];
            D_0040E618[-1] = (u32)p;
        }
    }
    if (flags & 1) D_002AD390(v);
}
