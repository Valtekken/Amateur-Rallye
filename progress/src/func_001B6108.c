extern u32 D_00473088;
extern void func_001B6168(void *);

typedef struct V { u32 a, b, c; } V;
typedef struct O { u32 vt, f4; V sub; u32 f14, f18; } O;

void *func_001B6108(O *p, u32 *a1, u32 *a2) {
    volatile s32 alloc[4];
    V *v;
    u32 one;
    p->vt = (u32)&D_00473088;
    v = &p->sub;
    one = 1;
    p->f4 = *a1;
    v->a = 0;
    v->b = 0;
    v->c = 0;
    p->f14 = *a2;
    p->f18 = one;
    func_001B6168(p);
    return p;
}
