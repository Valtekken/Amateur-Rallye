typedef struct { f32 x, y, z; } V3;
typedef struct {
    f32 a, b, c, d, e, f, g, h, i, j, k, l;
    s32 m, n;
    f32 pad0, pad1;
} Face;
typedef struct { Face *begin, *end, *cap; } Vec;
typedef struct {
    char pad[0x50];
    s16 off;
    s16 pad2;
    void (*fn)(void *, Vec *, void *, void *);
} VT;
typedef struct { VT *vt; char pad[8]; } Obj;
typedef struct { char pad[8]; Obj *obj; } Ret;

extern void func_001C83A8(Vec *, Face *, Face *);
extern Ret *func_002015D8(void);
extern void func_002B2028(void *, Vec *);
extern f32 func_003F3E80(f32);
extern u32 D_0040E618[];

#define EPSf 1.1920929e-7f

#define COPYFACE(P, T) \
    (P)->a = (T).a; (P)->b = (T).b; (P)->c = (T).c; (P)->d = (T).d; \
    (P)->e = (T).e; (P)->f = (T).f; (P)->g = (T).g; (P)->h = (T).h; \
    (P)->i = (T).i; (P)->j = (T).j; (P)->k = (T).k; (P)->l = (T).l; \
    (P)->m = (T).m; (P)->n = (T).n;

#define PUSH(T) do { \
    if (vec.end != vec.cap) { \
        Face *p = vec.end; \
        if (p != 0) COPYFACE(p, T); \
        vec.end = (Face *)((char *)vec.end + 0x38); \
    } else { \
        func_001C83A8(&vec, vec.end, &(T)); \
    } \
} while (0)

#define NORM(A, B, C, G, L, R) do { \
    if ((L) <= EPSf) { (A) = 0.0f; (B) = 0.0f; (C) = 0.0f; } \
    else { \
        if ((G) != (G)) (G) = func_003F3E80(L); \
        (R) = 1.0f / (G); \
        (A) = (A) * (R); (B) = (B) * (R); (C) = (C) * (R); \
    } \
} while (0)

void func_00280CB8(void *a0, V3 *v1, V3 *out, void *ctx, f32 ang)
{
    Vec vec;
    Face f0, f1, f2, f3, f4, f5;
    f32 vx, vy, vz, ox, oy, oz;
    f32 zero, nz, xy, aa, cxx, cyy, czz, nzz, nn;
    f32 n1x, n1y, n1z, n2x, n2y, n2z, n3x, n3y, n3z;
    f32 L1, L2, L3, g1, g2, g3, rr;
    Face f6, f7, f8, f9, f10, f11;
    f32 sx1, sy1, sz1, sx2, sy2, sz2, sx3, sy3, sz3;
    f32 accx, accy, accz;
    Ret *ret;
    Obj *obj;
    s32 count, i, j;
    Face *fa, *fb;
    f32 dx, dy, dz, dl, dr;
    Face *pp;

    vec.begin = 0;
    vec.end = 0;
    vec.cap = 0;

    ox = out->x; oy = out->y; oz = out->z;
    vx = v1->x; vy = v1->y; vz = v1->z;
    zero = 0.0f;
    nz = -vz;
    xy = vx * vy;
    aa = vx * vx - nz * vz;
    cxx = vx * ang;
    cyy = vy * ang;
    czz = vz * ang;
    nn = nz * vy;
    nzz = nz * ang;
    f0.a = ox; f0.b = oy; f0.c = oz;
    f0.d = ox + cxx; f0.e = oy + cyy; f0.f = oz + czz;
    f0.n = 0;
    f1.a = ox; f1.b = oy; f1.c = oz;
    f1.d = ox + (vz * zero - vx * vy) * ang; f1.e = oy + aa * ang; f1.f = oz + nn * ang;
    f2.a = ox; f2.b = oy; f2.c = oz;
    f2.d = ox + nzz; f2.e = oy + ang * zero; f2.f = oz + cxx;
    f3.a = ox; f3.b = oy; f3.c = oz;
    f3.d = ox - cxx; f3.e = oy - cyy; f3.f = oz - czz;
    f4.a = ox; f4.b = oy; f4.c = oz;
    f4.d = ox - (vz * zero - vx * vy) * ang; f4.e = oy - aa * ang; f4.f = oz - nn * ang;
    f5.a = ox; f5.b = oy; f5.c = oz;
    f5.d = ox - nzz; f5.e = oy - ang * zero; f5.f = oz - cxx;

    PUSH(f0);
    PUSH(f1);
    PUSH(f2);
    PUSH(f3);
    PUSH(f4);
    PUSH(f5);

    n1x = vx + (vz * zero - vx * vy);
    n1y = vy + aa;
    n1z = vz + nn;
    L1 = n1x * n1x + n1y * n1y + n1z * n1z;

    n2x = (vz * zero - vx * vy) + nz;
    n2y = aa + zero;
    n2z = nn + vx;
    L2 = n2x * n2x + n2y * n2y + n2z * n2z;

    n3x = nz + vx;
    n3y = zero + vy;
    n3z = vx + vz;
    L3 = n3x * n3x + n3y * n3y + n3z * n3z;

    g1 = nz;
    NORM(n1x, n1y, n1z, g1, L1, rr);
    g2 = n2z * n2z;
    NORM(n2x, n2y, n2z, g2, L2, rr);
    g3 = n3z * n3z;
    NORM(n3x, n3y, n3z, g3, L3, rr);

    sx1 = n1x * ang; sy1 = n1y * ang; sz1 = n1z * ang;
    sx2 = n2x * ang; sy2 = n2y * ang; sz2 = n2z * ang;
    sx3 = n3x * ang; sy3 = n3y * ang; sz3 = n3z * ang;

    f6.a = ox; f6.b = oy; f6.c = oz;
    f6.d = ox + sx1; f6.e = oy + sy1; f6.f = oz + sz1; f6.n = 0;
    f7.a = ox; f7.b = oy; f7.c = oz;
    f7.d = ox + sx2; f7.e = oy + sy2; f7.f = oz + sz2; f7.n = 0;
    f8.a = ox; f8.b = oy; f8.c = oz;
    f8.d = ox + sx3; f8.e = oy + sy3; f8.f = oz + sz3; f8.n = 0;
    f9.a = ox; f9.b = oy; f9.c = oz;
    f9.d = ox - sx1; f9.e = oy - sy1; f9.f = oz - sz1; f9.n = 0;
    f10.a = ox; f10.b = oy; f10.c = oz;
    f10.d = ox - sx2; f10.e = oy - sy2; f10.f = oz - sz2; f10.n = 0;
    f11.a = ox; f11.b = oy; f11.c = oz;
    f11.d = ox - sx3; f11.e = oy - sy3; f11.f = oz - sz3; f11.n = 0;

    PUSH(f6);
    PUSH(f7);
    PUSH(f8);
    PUSH(f9);
    PUSH(f10);
    PUSH(f11);

    ret = func_002015D8();
    obj = ret->obj;
    obj->vt->fn((char *)obj + obj->vt->off, &vec, ctx, obj);

    count = (s32)((vec.end - vec.begin) / 0x38);
    if (count != 0) {
        i = 0; j = 0;
        do {
            fa = (Face *)((char *)vec.begin + j);
            if (fa->n != 0) {
                dx = fa->g - fa->d;
                dy = fa->h - fa->e;
                dz = fa->i - fa->f;
                dl = dx * dx + dy * dy + dz * dz;
                if (dl <= EPSf) { dx = 0; dy = 0; dz = 0; }
                else {
                    if (dl != dl) dl = func_003F3E80(dl);
                    dr = 1.0f / dl;
                    dx *= dr; dy *= dr; dz *= dr;
                }
                fb = (Face *)((char *)vec.begin + i);
                accx += fb->j * dx;
                accy += fb->k * dx;
                accz += fb->l * dx;
            }
            i += 0x38;
            j += 0x38;
        } while (i < count * 0x38);
    }

    out->x = ox - sx3;
    out->y = oy - sy3;
    out->z = oz - sz3;
    if (vec.begin < vec.end) {
        pp = (Face *)((char *)vec.begin + 0x38);
        while (pp < vec.end) pp = (Face *)((char *)pp + 0x38);
    }
    if (((vec.end - vec.begin) / 0x38) != 0) {
        if (((vec.end - vec.begin) / 0x38) * 0x38 != 0) {
            func_002B2028(vec.begin, &vec);
        } else {
            vec.begin->m = (s32)D_0040E618[-1];
            D_0040E618[-1] = (u32)vec.begin;
        }
    }
}
