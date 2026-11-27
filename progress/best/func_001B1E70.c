extern void func_001B1FB0(char *, f32 *, f32 *);
extern void func_001E3EC0(s32, char *, s32);
extern char D_0040E6A0[];

typedef struct { f32 x, y, z, w; } V4;

void func_001B1E70(char *arg0, char *arg1) {
    f32 sp0[3];
    f32 sp10[3];
    f32 sp20[3];
    V4 *v90 = (V4 *)(arg1 + 0x90);
    V4 *vA0;
    V4 *vB0;
    V4 *vC0 = (V4 *)(arg1 + 0xC0);
    f32 f20v;
    s32 val;

    vC0->x = *(f32 *)(arg0 + 0x0);
    vC0->y = *(f32 *)(arg0 + 0x4);
    vC0->w = 1.0f;
    vC0->z = *(f32 *)(arg0 + 0x8);

    func_001B1FB0(arg0, sp0, sp10);

    sp20[0] = *(f32 *)(arg0 + 0xC);
    sp20[1] = *(f32 *)(arg0 + 0x10);
    sp20[2] = *(f32 *)(arg0 + 0x14);

    vB0 = (V4 *)(arg1 + 0xB0);
    vA0 = (V4 *)(arg1 + 0xA0);

    vB0->x = -sp20[0];
    vB0->y = -sp20[1];
    vB0->w = 0.0f;
    vB0->z = -sp20[2];

    v90->x = sp0[0];
    v90->y = sp0[1];
    v90->w = 0.0f;
    v90->z = sp0[2];

    vA0->x = sp10[0];
    vA0->y = sp10[1];
    vA0->w = 0.0f;
    vA0->z = sp10[2];

    sp20[0] = vB0->x;
    sp20[1] = vB0->y;
    *(f32 *)(arg1 + 0x0) = *(f32 *)(arg0 + 0x1C);
    sp20[2] = vB0->z;

    f20v = ((f32 (*)(f32, f32, f32))func_0015ACE0)(*(f32 *)(arg0 + 0x20), 0.0f, 1.0f);
    val = (s32)(f20v * 128.0f);
    func_001E3EC0(func_001E4280(), D_0040E6A0, 0x80 - val);
}
