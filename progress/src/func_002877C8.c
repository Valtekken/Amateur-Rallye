extern void *func_00201350(void);
typedef struct {f32 x,y,z,w;} V4;
typedef struct {f32 x,y,z;} V3;
typedef struct {s32 f0[5]; f32 f14, f18, f1c, f20;} Obj;
static inline void set4(V4 *p, V4 *t, f32 a, f32 b, f32 c, f32 d) {
    t->x=a; t->y=b; t->z=c; t->w=d;
    p->x=t->x; p->y=t->y; p->z=t->z; p->w=t->w;
}
void func_002877C8(Obj *arg0) {
    char *base; V4 *p0, *p1, *p2, *p3, t; V3 *q;
    base = *(void **)func_00201350();
    p0 = (V4 *)(base + 0x90); p1 = (V4 *)(base + 0xA0);
    p2 = (V4 *)(base + 0xB0); p3 = (V4 *)(base + 0xC0);
    set4(p0, &t, 1.0f, 0, 0, 0);
    set4(p1, &t, 0, 1.0f, 0, 0);
    set4(p2, &t, 0, 0, 1.0f, 0);
    set4(p3, &t, 0, 0, 0, 1.0f);
    q = (V3 *)p3;
    q->x = 0; q->y = 0; q->z = 0;
    arg0->f14 = 0; arg0->f20 = 10.0f; arg0->f18 = 0;
}
