extern s32 func_001E3820(s32, void *, void *);
extern void func_001E3610(s32, void *);
extern s32 func_001E3598(s32, void *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E38C8(s32, void *);
extern u8 D_0040E698[];
extern u8 D_0040E758[];
extern s32 D_004267B0;
extern u8 D_00475928[];

static inline void setv(u8 *o, f32 rate)
{
    f32 v = *(f32 *)(o + 0x20);
    f32 s = v * rate;

    if (0.05f <= s) {
        if (v < 0.05f)
            D_004267B0++;
    } else if (0.05f <= v) {
        D_004267B0--;
    }
    *(f32 *)(o + 0x20) = s;
    *(s32 *)(o + 0x8) = 1;
}

void func_00161918(u8 *a0, u8 *a1)
{
    u8 *v20;
    u8 *v18;
    s32 v16;
    u8 *p;

    v20 = (u8 *)func_001E3820(func_001E4280(), a0 + 0x5C, D_0040E698);
    if (v20 == 0)
        return;
    (void)a1;

    {
        f32 f23 = *(f32 *)((u8 *)(s32)0);
        (void)f23;
    }

    /* placeholder body: prefix only */
    p = *(u8 **)(a0 + 0xC);
    *(s32 *)(p + 0x4) = 1;
    *(f32 *)(p + 0x10) = *(f32 *)(p + 0x10) * 1.5f;

    v18 = D_0040E758;
    v16 = func_001E3598(func_001E4280(), a0 + 0x6C);
    (void)v16;

    setv(*(u8 **)(a0 + 0x10) + 0x690, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x7E0, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x770, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x700, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x850, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x70, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0xE0, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x930, 1.5f);
    setv(*(u8 **)(a0 + 0x10) + 0x9A0, 1.5f);
    (void)v18;
    return;
}
