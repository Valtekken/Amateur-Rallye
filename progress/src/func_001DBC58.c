extern s32 func_002AD350(f32);
extern s32 func_003F9698(char *, ...);
extern char D_004767D0[], D_00476810[], D_00476838[], D_00476840[];
typedef struct { f32 v[4]; } Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;
typedef struct { s32 f0, f4, f8, fC; } Counter;
extern Counter D_004262B0;
s32 func_001DBC58(Vec *arg0, char *name)
{
    char *fmt = D_004767D0;
    char *n = name ? name : D_00476838;
    Elem *p;
    func_003F9698(fmt, n, arg0->end - arg0->begin, arg0->cap - arg0->begin);
    D_004262B0.fC++;
    p = arg0->begin;
    while (p != arg0->end) {
        s32 idx = p - arg0->begin;
        s32 a = func_002AD350(p->v[0]);
        s32 b = func_002AD350(p->v[1]);
        s32 c = func_002AD350(p->v[2]);
        s32 d = func_002AD350(p->v[3]);
        p++;
        func_003F9698(D_00476840, idx, a, b, c, d);
    }
    D_004262B0.fC--;
    return func_003F9698(D_00476810);
}
