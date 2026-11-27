extern f32 D_004783EC;
extern float fabsf(float);
typedef struct A {
    s32 f0;
    char p0[0x20];
    s32 f24;
    char p1[8];
    s32 f30;
    char p2[8];
    s32 f3C;
    char p3[0x2C];
    s32 f6C;
    s32 f70;
} A;
typedef struct N { s32 next; char pad[4]; s32 idx; } N;

void func_002021A0(A *arg0, f32 *arg1, s32 *arg2, s32 arg3) {
    s32 *volatile p;
    s32 *volatile q;
    s32 v, w;
    f32 f0, f1, f2, f3;
    s32 k;
    *arg1 = D_004783EC;
    *arg2 = -1;
    f1 = ((f32 *)(s32)arg0->f3C)[arg3];
    if (!(f1 > -0.0001f)) goto block8;
    f3 = f1;
    f2 = -0.000001f;
    if ((f3 > -0.000001f && f3 < 0.0f) || ((f2 = 0.000001f, f1 < 0.000001f) && f1 >= 0.0f)) f3 = f2;
    *arg2 = arg3;
    f0 = -((f32 *)(s32)arg0->f24)[arg3] / f3;
    *arg1 = f0;
    if (fabsf(f0) < 0.0001f) { *arg2 = -1; return; }
block8:
    p = (s32 *)(s32)arg0->f6C;
    v = *p;
    if (v != (s32)p) {
        do {
            k = ((N *)v)->idx;
            f2 = ((f32 *)(s32)arg0->f30)[k];
            if (f2 < -0.000001f) {
                f0 = -((f32 *)(s32)arg0->f0)[k] / f2;
                if (f0 < *arg1) { *arg1 = f0; *arg2 = k; }
            }
            p = (s32 *)(s32)arg0->f6C;
            v = ((N *)v)->next;
        } while (v != (s32)p);
    }
    q = (s32 *)(s32)arg0->f70;
    w = *q;
    if (w != (s32)q) {
        do {
            k = ((N *)w)->idx;
            f2 = ((f32 *)(s32)arg0->f3C)[k];
            if (f2 < -0.000001f) {
                f0 = -((f32 *)(s32)arg0->f24)[k] / f2;
                if (f0 < *arg1) { *arg1 = f0; *arg2 = k; }
            }
            q = (s32 *)(s32)arg0->f70;
            w = ((N *)w)->next;
        } while (w != (s32)q);
    }
}
