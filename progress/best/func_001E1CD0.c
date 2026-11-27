extern void *D_002AD408(int); extern void D_002AD390(void *);
extern void func_001D2488(void *, void *), func_001D2CD8(void *, void *), func_001EAE78(void *, void *, void *), func_001DF2B0(void *, void *, int);
extern void *func_001D4010(void *), *func_001E22E8(void *, void *, void *);
extern char D_0044DD18[];
typedef struct { s32 a, b; } Locals;
typedef struct { int x; void *str; char pad[24]; } Pair;
typedef struct { Pair *start, *end, *cap; } Vec;
typedef struct { int a, b, c, d; char *vt; Vec v; int name; } Obj;
typedef struct { void **start, **end; } List;
typedef struct { char pad[0x38]; int f38, f3C; char pad2[4]; int f44, f48; } A0;

void *func_001E1CD0(A0 *arg0, void *unused, List *list) {
    Locals l;
    void **ps;
    void *cont = func_001E22E8(arg0, unused, &arg0->f3C);
    if (list != 0) {
        void **it = list->start;
        if (it != list->end) do {
            Obj *o = D_002AD408(0x24);
            Vec *v = &o->v;
            int name = arg0->f48;
            s32 str;
            o->c = 0; o->d = 0; o->b = 0; o->a = 0; o->vt = D_0044DD18;
            v->start = 0; v->end = 0; v->cap = 0;
            ps = &l.b;
            str = func_001D4010(&arg0->f38);
            o->name = name;
            l.a = arg0->f44;
            l.b = 0;
            func_001D2CD8(ps, str);
            { Pair *e = v->end; if (e != v->cap) { if (e) { e->x = l.a; func_001D2488(&e->str, ps); } v->end = (Pair *)((char *)v->end + 8); } else func_001EAE78(v, e, &l); }
            D_002AD390(l.b);
            l.b = 0;
            func_001D2CD8(ps, *it);
            l.a = arg0->f48;
            { Pair *e = v->end; if (e != v->cap) { if (e) { e->x = l.a; func_001D2488(&e->str, ps); } v->end = (Pair *)((char *)v->end + 8); } else func_001EAE78(v, e, &l); }
            D_002AD390(l.b);
            func_001DF2B0(cont, o, 0);
            it++;
        } while (it != list->end);
    }
    return cont;
}
