typedef struct { f32 x,y,z; } V;
typedef struct { V *a,*b; f32 pad[3]; f32 lim; s32 x18, x1c; } S;

#define TEST(p,q,f1,f2,g1,g2) do { \
    V *pp = (p), *qq = (q); \
    f32 dx = pp->x - qq->x; \
    f32 dy = pp->y - qq->y; \
    f32 dz = pp->z - qq->z; \
    f32 d = __builtin_sqrtf(dx*dx + dy*dy + dz*dz); \
    if (s1->lim < d && s2->lim <= d) { \
        s1->f1 = s2->g1; s1->f2 = s2->g2; return 1; \
    } \
    return 0; \
} while (0)

s32 func_00242460(void *unused, S *second, S *first) {
    S *s1 = first, *s2 = second;
    V *a1, *a2, *b1, *b2;
    if (s1 == s2) return 0;
    a1 = s1->a; a2 = s2->a;
    if (a1 != a2) {
        b2 = s2->b;
        if (a1 != b2) {
            b1 = s1->b;
            if (b1 == a2) TEST(b1,b2,b,x1c,b,x1c);
            if (b1 == b2) TEST(b1,a2,b,x1c,a,x18);
            return 0;
        }
        TEST(a1,a2,a,x1c,a,x18);
    }
    b1 = s1->b; b2 = s2->b;
    TEST(b1,b2,a,x1c,b,x1c);
}
