extern void *func_00262FF8(s32);
typedef struct { f32 x, y, z, w; } V;
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define S(p,o) (*(s32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))

void func_002842D8(void *arg0, void *arg1) {
    volatile V a, b;
    s32 h;
    f32 by, bz;
    S(arg0, 0xC) = 1;
    S(arg0, 0x34) = 0;
    if (S(arg0, 0x3C) != 0) {
        h = S(arg1, 0x50);
        if (h != 0 && func_00262FF8(h) != 0) {
            void *r2 = func_00262FF8(S(arg1, 0x50));
            f32 *u = (f32 *)((char *)r2 + 0x14);
            a.x = u[0]; a.y = u[1]; a.z = u[2];
            void *r3 = func_00262FF8(S(arg1, 0x50));
            f32 *w = (f32 *)((char *)r3 + 0x20);
            by = w[1]; bz = w[2];
            b.x = w[0]; b.y = by; b.z = bz;
            F(arg0, 0x44) = __builtin_fabsf(by - a.y);
            F(arg0, 0x40) = __builtin_fabsf(bz - a.z) * 0.5f;
        }
    } else {
        F(arg0, 0x40) = 0.0f;
        F(arg0, 0x44) = 0.0f;
    }
    void *vt = P(arg0, 8);
    void (*fn)(void *, void *) = (void (*)(void *, void *))P(vt, 0x2C);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x28), arg1);
}
