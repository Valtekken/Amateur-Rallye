typedef struct V { int *begin, *end, *cap; } V;
extern int func_003F93CC(void *, void *, int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern int D_0040E618[];

void func_002331C0(V *v, int flags)
{
    V *w = v + 1;
    V *x = v + 2;
    int *e, *b, n;
    int *p;

    e = v->end; b = v->begin;
    func_003F93CC(b, e, 0);
    v->end = (int *)((char *)v->end - ((char *)e - (char *)b));

    e = w->end; b = w->begin;
    func_003F93CC(b, e, 0);
    w->end = (int *)((char *)w->end - ((char *)e - (char *)b));

    e = x->end; b = x->begin;
    func_003F93CC(b, e, 0);
    x->end = (int *)((char *)x->end - ((char *)e - (char *)b));

    p = x->begin; n = x->cap - p;
    if (n) { if (n * 4) func_002B2028(p); else { *p = D_0040E618[-1]; D_0040E618[-1] = (int)p; } }

    p = w->begin; n = w->cap - p;
    if (n) { if (n * 4) func_002B2028(p); else { *p = D_0040E618[-1]; D_0040E618[-1] = (int)p; } }

    p = v->begin; n = v->cap - p;
    if (n) { if (n * 4) func_002B2028(p); else { *p = D_0040E618[-1]; D_0040E618[-1] = (int)p; } }

    if (flags & 1) D_002AD390(v);
}
