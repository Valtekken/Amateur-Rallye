typedef struct { s32 a; char *b; s32 c; char *d; s32 e; char *f; } Entry;
typedef struct { Entry *start, *end; } Vec;
typedef struct { char pad[0x14]; Vec vec; s32 pad1; s32 kind; } B;
typedef struct { s32 pad0[3]; s32 str1; s32 pad1[5]; s32 a; s32 pad2[6]; s32 str2; s32 b; s32 type; } Obj;
extern char *func_001D4010(void *);
extern void func_001D4040(void *, char *);
extern void func_001E15E0(Obj *, B *, s32);
extern s32 func_003FA760(char *, char *);

s32 func_001E0368(Obj *a, B *b, s32 *out, s32 *v) {
    s32 buf[4];
    Entry *p;
    volatile Vec *vec;
    s32 n, ok, r;

    if (b->kind != a->type)
        return 0;
    vec = &b->vec;
    p = b->vec.start;
    n = ((s32)vec->end - (s32)p) >> 3;
    if (n != 3 && n != 5)
        return 0;
    if (p->a != a->a || p->c != a->b)
        return 0;
    r = func_001D4010(&a->str1);
    ok = 0;
    if (p->d && r)
        ok = (u32)func_003FA760(r, p->d) < 1;
    if (!ok)
        return 0;
    p = b->vec.start;
    if (p->e != a->type)
        return 0;
    func_001D4040(buf, p->b);
    *out = buf[0];
    r = func_001D4010(&a->str2);
    ok = 0;
    if (p->f && r)
        ok = (u32)func_003FA760(r, p->f) < 1;
    *v = ok;
    n = ((s32)vec->end - (s32)b->vec.start) >> 3;
    if (n == 5)
        func_001E15E0(a, b, 3);
    return 1;
}
