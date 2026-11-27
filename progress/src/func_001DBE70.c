extern s32 func_003F9698(char *, ...);
extern char D_004767D0[], D_00476810[], D_00476878[], D_00476880[];
typedef struct { s32 f0, f4, f8, fC; } Counter;
extern Counter D_004262B0;
typedef struct { char *begin, *end, *cap; } Vec;

s32 func_001DBE70(Vec *r, char *name)
{
    char *fmt = D_004767D0;
    char *n = name ? name : D_00476878;
    func_003F9698(fmt, n, (s32)((r->end - r->begin) * 0xAAAAAAAB) >> 2, (s32)((r->cap - r->begin) * 0xAAAAAAAB) >> 2);
    D_004262B0.fC++;
    char *p = r->begin;
    while (p != r->end) {
        s32 *q = (s32 *)p;
        func_003F9698(D_00476880, (s32)((p - r->begin) * 0xAAAAAAAB) >> 2, q[0], q[1], q[2]);
        p += 0xC;
    }
    D_004262B0.fC--;
    return func_003F9698(D_00476810);
}
