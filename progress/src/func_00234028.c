typedef struct { float x, y, z; } Vec;
typedef struct { float x, y, z, w; } V4;
typedef struct { Vec a, b; int p[7]; int flag; } Obj;
extern void func_00233CA8(void *);
extern s32 func_00233E78(void *, Vec *, Vec *, float);
extern float func_001CF4C0(Vec *);
extern float D_00478468;
static inline void copy(Vec *d, Vec *s) { d->x=s->x; d->y=s->y; d->z=s->z; }
static inline void sub(V4 *r, V4 *a, V4 *b) { r->x=a->x-b->x; r->y=a->y-b->y; r->z=a->z-b->z; }
static inline float normalize(Vec *v) {
    float n = func_001CF4C0(v);
    if (n < D_00478468) { v->x=0; v->y=0; v->z=0; }
    else { v->x/=n; v->y/=n; v->z/=n; }
    return n;
}
void func_00234028(void *world, Obj *o) {
    V4 a, b, d;
    float n;
    func_00233CA8(world);
    copy((Vec*)&a, &o->a);
    copy((Vec*)&b, &o->b);
    sub(&d, &b, &a);
    n = normalize((Vec*)&d);
    if (func_00233E78(world, (Vec*)&a, (Vec*)&d, n)) o->flag = 1;
}
