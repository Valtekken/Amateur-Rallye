typedef struct { s32 w[6]; u64 t0, t1; s32 lim; } S;
struct G { u32 b, e, x[2]; };
extern struct G D_0042E430;
extern void func_002DE820(void*, u32, s32, void*, s32, u32, void*, s32);

void func_00327340(s32 arg0) {
    S s;
    struct G *g = &D_0042E430;
    s32 n = (s32)((g->e - g->b) * 0xAAAAAAABu) >> 4;
    if (arg0 >= n) {
        s.t0 = s.t0 & (s64)(s32)-0x4000;
        s.t0 = s.t0 & 0xFFFFFFFC00FFFFFFULL;
        s.t0 = s.t0 & 0x00FFC0FFFFFFFFFFULL;
        s.t0 = s.t0 & 0xFFFFFFFFFFF03FFFULL;
        s.t0 = s.t0 & 0xFFFFFF03FFFFFFFFULL;
        s.t0 = s.t0 & 0xF03FFFFFFFFFFFFFULL;
        s.t1 = s.t1 & (s64)(s32)-0x4000;
        s.t1 = s.t1 & 0xFFFFFFFC00FFFFFFULL;
        s.t1 = s.t1 & 0x00FFC0FFFFFFFFFFULL;
        s.t1 = s.t1 & 0xFFFFFFFFFFF03FFFULL;
        s.t1 = s.t1 & 0xFFFFFF03FFFFFFFFULL;
        s.t1 = s.t1 & 0xF03FFFFFFFFFFFFFULL;
        s.lim = 0x7FFFFFFF;
        s.w[0] = 0; s.w[1] = 0; s.w[2] = 0;
        s.w[3] = 0; s.w[4] = 0; s.w[5] = 0;
        u32 a = ((u32)arg0 + 0x10) & ~0xFu;
        if (a < (u32)n) {
            u32 p = a * 0x30 + g->b;
            if (p < g->e) {
                while (p < g->e) p += 0x30;
            }
            g->e = g->e - (g->e - p);
        } else {
            func_002DE820(g, g->e, a - n, &s, n, g->e, g, g->b);
        }
    }
}
