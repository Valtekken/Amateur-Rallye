extern u32 D_00473088;
extern void func_001B6168(void *);

typedef struct V { u32 a, b, c; } V;
typedef struct O { u32 vt, f4; V sub; u32 f14, f18; f32 f1c; } O;

void *func_001B6098(O *p, u32 *a1, f32 *a2) {
    volatile s32 alloc[4];
    V *v;
    f32 *g;
    u32 t;
    p->vt = (u32)&D_00473088;
    v = &p->sub;
    g = (f32 *)((char *)p + 0x1C);
    t = *a1;
    p->f4 = t;
    v->a = 0;
    v->b = 0;
    v->c = 0;
    p->f14 = 0;
    p->f18 = 0;
    p->f1c = a2[0];
    g[1] = a2[1];
    g[2] = a2[2];
    func_001B6168(p);
    return p;
}
