extern void *D_002AD408(int);
extern void D_002AD390(void *);
extern void *func_001D4010(void *);
extern void func_001D2CD8(s32 *, s32);
extern void func_001D2488(s32 *, s32 *);
extern void func_001EAE78(void *, s32, void *);
extern char D_0044DD18[];

typedef struct { s32 a; s32 b; } Locals;
typedef struct { s32 a; s32 b; } Pair;
typedef struct { Pair *start, *end, *cap; } Vec;
typedef struct { s32 a, b, c, d; char *vt; Vec v; s32 name; } Obj;

void *func_001E22E8(void *arg0, void *arg1, void *arg2) {
    Locals l;
    Obj *o = D_002AD408(0x24);
    Vec *v = &o->v;
    Pair *e;

    o->c = 0;
    o->d = 0;
    o->vt = D_0044DD18;
    o->b = 0;
    o->a = 0;
    v->start = 0;
    v->end = 0;
    v->cap = 0;
    o->name = *(s32 *)((char *)arg0 + 0x48);

    l.a = *(s32 *)((char *)arg0 + 0x24);
    l.b = 0;
    func_001D2CD8(&l.b, (s32)func_001D4010(arg1));
    e = v->start;
    if (e != v->end) {
        if (e != 0) {
            e->a = l.a;
            func_001D2488(&e->b, &l.b);
        }
        v->start = e + 1;
    } else {
        func_001EAE78(v, (s32)e, &l);
    }
    D_002AD390(l.b);

    l.a = *(s32 *)((char *)arg0 + 0x44);
    l.b = 0;
    func_001D2CD8(&l.b, (s32)func_001D4010(arg2));
    e = v->start;
    if (e != v->end) {
        if (e != 0) {
            e->a = l.a;
            func_001D2488(&e->b, &l.b);
        }
        v->start = e + 1;
    } else {
        func_001EAE78(v, (s32)e, &l);
    }
    D_002AD390(l.b);
    return o;
}
