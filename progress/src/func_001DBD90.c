extern s32 func_003F9698(char *, ...);
extern char D_004767D0[], D_00476810[], D_00476860[], D_00476868[];
typedef struct { s32 f0, f4, f8, fC; } Counter;
extern Counter D_004262B0;
typedef struct { s32 *begin; s32 *end; s32 *cap; } Vec;
s32 func_001DBD90(Vec *r, char *name)
{
    char *fmt = D_004767D0;
    char *n = name ? name : D_00476860;
    s32 *p;
    func_003F9698(fmt, n, r->end - r->begin, r->cap - r->begin);
    D_004262B0.fC++;
    p = r->begin;
    while (p != r->end) {
        func_003F9698(D_00476868, p - r->begin, *p);
        p++;
    }
    D_004262B0.fC--;
    return func_003F9698(D_00476810);
}
