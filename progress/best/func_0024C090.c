typedef struct { float x, y, z; } Vec;
typedef struct { int pad[3]; Vec *p; } Node;
typedef struct {
    Node *a, *b;
    Vec dir;
    float len;
    int f18, f1C, f20, f24, f28;
    int f2C, f30;
    Vec v34;
    int f40;
    int f44;
} Obj;

extern float D_00478468;
extern float func_001CF4C0(Vec *);

static inline void init(Vec *r, float x, float y, float z) { r->x=x; r->y=y; r->z=z; }
static inline void sub(Vec *r, Vec *a, Vec *b) { init(r, a->x-b->x, a->y-b->y, a->z-b->z); }
static inline void copy(Vec *d, Vec *s) { d->x=s->x; d->y=s->y; d->z=s->z; }
static inline float normalize(Vec *v) {
    float n = func_001CF4C0(v);
    if (n < D_00478468) { v->x=0; v->y=0; v->z=0; }
    else { v->x/=n; v->y/=n; v->z/=n; }
    return n;
}

Obj *func_0024C090(Obj *p, Node *a, Node *b) {
    Vec tmp;
    Vec *s1 = &p->dir;
    int *v0 = (int *)((char *)p + 0x34);
    p->a = a;
    p->b = b;
    p->dir.x = 0.0f;
    s1->y = 0.0f;
    s1->z = 0.0f;
    p->f18 = 0;
    p->f1C = 0;
    p->f20 = 0;
    p->f24 = 0;
    p->f28 = 0;
    v0[0] = 0;
    v0[3] = 0;
    v0[2] = 0;
    v0[1] = 0;
    p->f44 = 0;
    sub(&tmp, b->p, a->p);
    copy(&p->dir, &tmp);
    p->len = normalize(&p->dir);
    return p;
}
