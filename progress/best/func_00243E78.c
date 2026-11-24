extern float D_004264A0;
typedef struct V {float x,y,z;} V;
typedef struct S {V *a,*b; char pad[0x10]; void *unk18,*unk1C;} S;
static inline float dist(V *a,V *b) {float x=a->x-b->x,y=a->y-b->y,z=a->z-b->z; return x*x+y*y+z*z;}

void func_00243E78(void *unused, S *s1, S *s2) {
    float r = D_004264A0 * 10.0f;
    float lim = r * r;
    V *p = s2->a, *q = s1->a;
    if (dist(q, p) < lim) { s1->a = s2->b; s1->unk18 = s2->unk1C; return; }
    if (dist(q, s2->b) < lim) { s1->a = p; s1->unk18 = s2->unk18; return; }
    V *r2 = s1->b;
    if (dist(r2, p) < lim) { s1->b = s2->b; s1->unk1C = s2->unk1C; return; }
    if (dist(r2, s2->b) < lim) { s1->b = p; s1->unk1C = s2->unk18; }
}
