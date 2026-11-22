typedef struct { s32 pad[0x1B0 / 4]; s32 base; s32 a; s32 b; s32 d; } S73;
u32 func_003C73C0(S73 *p, s32 sh) {
    s32 v = p->a >> sh;
    if (p->b >= 2) {
        v = ((sh ^ (p->d - 1)) == 0) ? v + v : v;
    }
    s32 aligned = ((p->base >> sh) + 0xF) & ~0xF;
    s32 m = (v > 7) ? v : 8;
    u32 t = (u32)(aligned << 1) * (u32)m;
    return (t + 0xFF) >> 8;
}
