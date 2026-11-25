extern void *func_00201350(void);
extern void func_001CB748(void *, void *, void *, void *);
extern void func_00200460(void *, f32);

typedef struct { f32 v[3]; f32 pad; } Vec4;
typedef struct { u8 pad[0x40]; Vec4 vel; Vec4 pos; } S;

void func_00290450(u8 *arg0, void *arg1) {
    f32 a[3], b[3], c[3];
    void *ctx = *(void **)func_00201350();
    S *s = *(S **)((u8 *)arg1 + 0x50);
    f32 off = *(f32 *)(arg0 + 0x20);
    f32 *q = s->pos.v;
    f32 *r = s->vel.v;
    a[0] = q[0];
    a[1] = q[1];
    b[0] = a[0];
    f32 sum = off + a[1];
    b[1] = sum;
    {
        f32 p2 = q[2];
        b[2] = p2;
        a[2] = p2;
    }
    a[1] = sum;
    b[0] = b[0] + r[0];
    b[1] = b[1] + r[1];
    b[2] = b[2] + r[2];
    {
        f32 *pc = c;
        c[0] = 0.0f; pc[1] = 1.0f; c[2] = 0.0f;
        func_001CB748(a, b, pc, (u8 *)ctx + 0x90);
    }
    func_00200460(ctx, -*(f32 *)(arg0 + 0x14));
}
