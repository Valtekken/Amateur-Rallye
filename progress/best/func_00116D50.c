typedef struct { s32 *begin, *end, *cap; } V;
typedef struct {
    V a, b;
    s32 p18, one;
    void *alloc;
    char pad[0x2C];
    s32 x, y;
} S;
extern void func_00152688(S *);
extern void func_00152720(S *, s32 *, s32 *);
extern void func_00152918(S *, s32 *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern s32 D_0044DBA0[];
static inline void vdestroy(V *v) {
    s32 n = v->cap - v->begin;
    if (n != 0) {
        s32 size = n << 2;
        if (size) func_002B2028(v->begin);
        else { *(u32*)v->begin = D_0040E618[-1]; D_0040E618[-1] = (u32)v->begin; }
    }
}
void func_00116D50(void) {
    S s;
    s32 i, j;
    s32 *px = &s.x;
    s32 *py = &s.y;
    V *pb = &s.b;
    s.a.begin = 0; s.a.end = 0; s.a.cap = 0;
    pb->begin = 0; pb->end = 0; pb->cap = 0;
    s.one = 1;
    s.alloc = &D_0044DBA0;
    for (i = 0; i < 20; i++) {
        *px = i;
        if (s.a.end != s.a.cap) {
            if (s.a.end) *s.a.end = i;
            s.a.end++;
        } else {
            func_00152720(&s, s.a.end, px);
        }
    }
    for (j = 19; j >= 0; j--) func_00152918(&s, py);
    func_00152688(&s);
    s.alloc = &D_0044DBA0;
    vdestroy(pb);
    vdestroy(&s.a);
}
