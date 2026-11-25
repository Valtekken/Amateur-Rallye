typedef struct { u32 data[14]; } E56;
typedef struct { E56 *b, *e, *c; } V56;
typedef struct {
    u8 pad0[0x38];
    s32 f38;
    u8 pad1[0xD0 - 0x3C];
    E56 *b, *e, *c;
} A;
extern u32 D_0040E618[];
extern void func_002B2028(void *), D_002AD390(void *);
extern void func_0016CC98(s32, s32);

void func_00167000(A *arg0, s32 flags) {
    E56 *e, *begin, *p, *cap;
    int n;
    V56 *v;
    if (arg0->f38) func_0016CC98(arg0->f38, 3);
    v = (V56 *)&arg0->b;
    e = v->e;
    begin = arg0->b;
    for (; begin < e; begin++) {}
    cap = v->c;
    p = v->b;
    n = cap - p;
    if (n) {
        if (n * 56) func_002B2028(p);
        else { *(u32 *)p = D_0040E618[-1]; D_0040E618[-1] = (u32)p; }
    }
    if (flags & 1) D_002AD390(arg0);
}
