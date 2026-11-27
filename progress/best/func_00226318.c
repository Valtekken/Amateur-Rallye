typedef struct Vec3 { f32 x, y, z; } Vec3;
extern void func_00226310(void *, void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_00155DB0(void *, void *, void *);
extern void func_0026F810(void *, void *, void *);
extern void func_0027BC38(void *, s32);
extern char D_00479760[];
extern char D_00479768[];

typedef struct Vec3C { Vec3 *begin, *end, *cap; } Vec3C;
typedef struct S32C { s32 *begin, *end, *cap; } S32C;

void func_00226318(void)
{
    Vec3C a;
    S32C b;
    char sp20[12];
    s32 sp4v;
    Vec3 v;
    char out[0x40];

    a.begin = 0; a.end = 0; a.cap = 0;
    b.begin = 0; b.end = 0; b.cap = 0;

    func_00226310(out, &a, 0);

    func_001D4040(sp20, D_00479760);
    if (b.end != b.cap) { if (b.end != 0) *b.end = *(s32 *)sp20; b.end += 1; }
    else func_00155DB0(&b, b.end, sp20);

    func_001D4040(sp20, D_00479768);
    if (b.end != b.cap) { if (b.end != 0) *b.end = *(s32 *)sp20; b.end += 1; }
    else func_00155DB0(&b, b.end, sp20);

    v.x = 0; v.y = 0; v.z = 15.0f;
    if (a.end != a.cap) {
        if (a.end != 0) { a.end->x = v.x; a.end->y = v.y; a.end->z = v.z; }
        a.end += 1;
    } else func_0026F810(&a, a.end, &v);

    v.x = *(f32 *)&sp4v; v.x = 12.34f;
    v.y = 1; v.z = 31.0f; v.x = 12.34f;
    v.x = 0x414570A4; v.y = 1; v.z = 31.0f;
    if (a.end != a.cap) {
        if (a.end != 0) { a.end->x = v.x; a.end->y = v.y; a.end->z = v.z; }
        a.end += 1;
    } else func_0026F810(&a, a.end, &v);

    func_00226310(out, &a, 0);
    func_0027BC38(&a, 2);
}
