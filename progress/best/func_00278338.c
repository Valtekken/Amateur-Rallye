extern void func_001CB598(f32 *, f32 *, f32 *);
extern f32 func_003F3E80(f32);

typedef struct {
    f32 f0, f4, f8, f10, f14, f18, f20, f24, f28, f30, f34, f38;
    f32 c40, c44, c48;
    f32 t50, t54, t58, t5C;
} S;

void func_00278338(f32 *a, f32 *b, f32 *o, f32 t) {
    S s;
    f32 l1, l2, scale, eps, n1, n2;
    s32 flag, flag2;

    flag = 0; flag2 = 0; eps = 0.0000011920929f; scale = 1.0f;
    l1 = a[0]*a[0] + a[1]*a[1] + a[2]*a[2];
    l2 = b[0]*b[0] + b[1]*b[1] + b[2]*b[2];
    n1 = l1 - 1.0f; n2 = l2 - 1.0f;
    if ((eps >= n1) && (n1 >= -eps)) flag = 1;
    if ((eps >= n2) && (n2 >= -eps) && flag) flag2 = 1;
    if (!flag2) {
        flag2 = 1;
        if (l1 != l1) scale = func_003F3E80(l1);
        if (l2 != l2) l2 = func_003F3E80(l2);
        scale += (l2 - scale) * t;
    }
    s.f0 = a[0]; s.f4 = a[1]; s.f8 = a[2]; s.f10 = a[3];
    s.f14 = b[1]-a[1]; s.f18 = b[2]-a[2];
    s.f20 = b[4]-a[4]; s.f24 = b[5]-a[5]; s.f28 = b[6]-a[6];
    s.f30 = b[8]-a[8]; s.f34 = b[9]-a[9]; s.f38 = b[10]-a[10];
    s.f14 *= t; s.f18 *= t; s.f20 *= t; s.f24 *= t; s.f28 *= t; s.f30 *= t; s.f34 *= t; s.f38 *= t;
    s.f0 = (b[0]-a[0])*t + a[0];
    s.f4 = s.f14 + a[1];
    s.f8 = s.f18 + a[2];
    s.f10 = (b[3]-a[3])*t + a[3];
    s.f20 = s.f20 + a[4];
    s.f24 = s.f24 + a[5];
    s.f28 = s.f28 + a[6];
    s.f30 = s.f30 + a[8];
    s.f34 = s.f34 + a[9];
    s.f38 = s.f38 + a[10];
    n1 = s.f20*s.f20 + s.f24*s.f24 + s.f28*s.f28;
    if (n1 <= 0.00000011920929f) {
        s.f20 = 0.0f; s.f24 = 0.0f; s.f28 = 0.0f;
    } else {
        f32 inv = 1.0f / (s.f38 != s.f38 ? func_003F3E80(n1) : n1);
        s.f20 *= inv; s.f28 *= inv; s.f24 *= inv;
    }
    func_001CB598(&s.f10, &s.f20, &s.f10);
    s.c40 = s.f14*s.f28 - s.f18*s.f24;
    s.c44 = s.f18*s.f20 - s.f10*s.f28;
    s.c48 = s.f10*s.f24 - s.f14*s.f20;
    if (s.c40*s.f0 + s.c44*s.f4 + s.c48*s.f8 < 0.0f) {
        s.c40 = -s.c40; s.c44 = -s.c44; s.c48 = -s.c48;
    }
    if (flag2) {
        s.c40 *= scale; s.c44 *= scale; s.c48 *= scale;
        s.f10 *= scale; s.f14 *= scale; s.f18 *= scale;
        s.f20 *= scale; s.f24 *= scale; s.f28 *= scale;
    }
    o[0]=s.c40; o[1]=s.c44; o[2]=s.c48; o[3]=0.0f;
    o[4]=s.f10; o[5]=s.f14; o[6]=s.f18; o[7]=0.0f;
    o[8]=s.f20; o[9]=s.f24; o[10]=s.f28; o[11]=0.0f;
    o[12]=s.f30; o[13]=s.f34; o[14]=s.f38; o[15]=1.0f;
}
