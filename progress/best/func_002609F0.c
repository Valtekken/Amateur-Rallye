extern f32 func_0027DF40(void);
extern void func_0015ACE0(f32, f32, f32);
extern f32 func_003F33C8(f32);
extern s32 func_001C6800(s32, s32, s32, s8 *);

typedef struct { f32 x, y, z; } V;
typedef struct { s32 ptr; f32 f10; } A;

void func_002609F0(A *arg0, s32 arg1, s32 arg2, V *v) {
    V a, b;
    f32 p, q, c, r, zero = 0.0f;
    a.x = v->z; a.y = 0.0f; a.z = -v->x;
    b.x = 0.0f; b.y = 0.0f; b.z = 1.0f;
    p = v->x * b.x + v->y * b.y + v->z * b.z;
    b.x = 0.0f; b.y = 0.0f; b.z = 1.0f;
    q = a.x * b.x + a.y * b.y + a.z * b.z;
    if (p >= 0.0f) {
        if (q >= 0.0f) {
            r = func_0027DF40();
            func_0015ACE0(fabsf(p), zero, 1.0f);
            c = func_003F33C8(r);
            p *= zero;
            q = p + c;
        } else {
            r = func_0027DF40();
            func_0015ACE0(fabsf(p), zero, 1.0f);
            c = func_003F33C8(r);
            p *= 2.0f;
            q = p - c;
        }
    } else {
        if (q >= 0.0f) {
            r = func_0027DF40();
            func_0015ACE0(fabsf(p), zero, 1.0f);
            c = func_003F33C8(r);
            p += p;
            q = p - c;
        } else {
            r = func_0027DF40();
            func_0015ACE0(fabsf(p), zero, 1.0f);
            c = func_003F33C8(r);
            p += p;
            q = p + c;
        }
    }
    s8 out = (s8)(arg0->f10 * q);
    func_001C6800(arg0->ptr, arg1, arg2, &out);
}
