typedef struct Sq {
    char pad[0x40];
    f32 a0, a4, a8, aC;
    f32 b0, b4, b8;
} Sq;
typedef struct S0 { char pad[0xC]; void *p; char pad2[4]; f32 mult; } S0;
typedef struct S1 { char pad[0x50]; Sq *q; } S1;

extern f32 func_003F3E80(void *, void *, f32);

void func_00283D08(S0 *arg0, S1 *arg1, f32 f20) {
    Sq *q, *r;
    f32 sp[6];
    f32 v, inv;

    q = arg1->q;
    r = *(Sq **)((char *)arg0->p + 0x50);
    if (f20 != f20) {
        f20 = func_003F3E80(r, (char *)q + 0x50,
              (q->b0 - r->b0) * (q->b0 - r->b0) +
              (q->b4 - r->b4) * (q->b4 - r->b4) +
              (q->b8 - r->b8) * (q->b8 - r->b8));
    }
    q = arg1->q;
    r = *(Sq **)((char *)arg0->p + 0x50);
    sp[1] = 0.0f;
    sp[0] = q->b0 - r->b0;
    v = q->b8 - r->b8;
    sp[2] = v;
    if (sp[0] * sp[0] + sp[1] + v * v <= 1.1920929e-7f) {
        sp[0] = sp[1];
        sp[2] = sp[1];
    } else {
        if (v != v) {
            v = func_003F3E80(r, (char *)q + 0x50, sp[0] * sp[0] + sp[1] + v * v);
        }
        inv = 1.0f / v;
        sp[0] = sp[0] * inv;
        sp[1] = sp[1] * inv;
        sp[2] = sp[2] * inv;
    }
    q = arg1->q;
    q->a0 = sp[0];
    q->a4 = sp[1];
    q->aC = 0;
    q->a8 = sp[2];
    if (2.8f < f20) {
        sp[3] = q->a0;
        sp[4] = q->a4;
        sp[5] = q->a8;
        v = arg0->mult * 0.033333335f;
        sp[3] = sp[3] * v;
        sp[4] = sp[4] * v;
        sp[5] = sp[5] * v;
        q->b0 = q->b0 + sp[3];
        q->b4 = q->b4 + sp[4];
        q->b8 = q->b8 + sp[5];
    }
}
