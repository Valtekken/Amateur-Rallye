typedef struct S22DB70_vec { f32 x; f32 y; f32 z; } S22DB70_vec;
typedef struct Ref Ref;
typedef struct VT { int a,b; short off; short pad; void (*destroy)(void *,int); } VT;
struct Ref { int count; VT *vt; int n; int pad_C; S22DB70_vec *data; };
typedef struct { Ref *p; int pad[3]; S22DB70_vec sum; } Local;

extern void func_0024F6E0(Ref **, Ref *);
extern f32 D_00426508[4];
static inline void release(Ref *p) { if (p && --p->count == 0) p->vt->destroy((char *)p + p->vt->off, 3); }

void *func_0022DB70(S22DB70_vec *out, s32 unused, Ref **arg2) {
    Local l;
    Ref *obj;
    S22DB70_vec *p;
    s32 n;
    f32 inv;
    s32 i;

    func_0024F6E0(&l.p, *arg2);
    obj = l.p;
    n = obj->n;
    p = obj->data;
    l.sum.x = D_00426508[0];
    l.sum.y = D_00426508[1];
    l.sum.z = D_00426508[2];
    if (n > 0) {
        i = n;
        do {
            i--;
            l.sum.x += p->x;
            l.sum.y += p->y;
            l.sum.z += p->z;
            p++;
        } while (i != 0);
    }
    inv = 1.0f / (f32)n;
    l.sum.x = l.sum.x * inv;
    l.sum.y = l.sum.y * inv;
    l.sum.z = l.sum.z * inv;
    out->x = l.sum.x;
    out->y = l.sum.y;
    out->z = l.sum.z;
    release(l.p);
    release(*arg2);
    return out;
}
