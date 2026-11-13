/* identical to func_0033F588 (matched), with its names changed by decompdecomp */
typedef struct { f32 f[11]; s32 x; } S_30;

static inline void cp30(S_30 *d, S_30 *s) {
    char *x = (char *)s + 0x20;
    char *y = (char *)d + 0x20;
    *(f32 *)(y - 0x20) = *(f32 *)(x - 0x20);
    *(f32 *)(y - 0x1c) = *(f32 *)(x - 0x1c);
    *(f32 *)(y - 0x18) = *(f32 *)(x - 0x18);
    *(f32 *)(y - 0x14) = *(f32 *)(x - 0x14);
    *(f32 *)(y - 0x10) = *(f32 *)(x - 0x10);
    *(f32 *)(y - 0xc) = *(f32 *)(x - 0xc);
    *(f32 *)(y - 0x8) = *(f32 *)(x - 0x8);
    *(f32 *)(y - 0x4) = *(f32 *)(x - 0x4);
    *(f32 *)(y + 0x0) = *(f32 *)(x + 0x0);
    *(f32 *)(y + 0x4) = *(f32 *)(x + 0x4);
    *(f32 *)(y + 0x8) = *(f32 *)(x + 0x8);
    *(s32 *)(y + 0xc) = *(s32 *)(x + 0xc);
}

S_30 *func_00368390(S_30 *a, S_30 *b, S_30 *c) {
    while (a != b) {
        if (c) cp30(c, a);
        a++;
        c++;
    }
    return c;
}

typedef struct {
    s32 x0;
    f32 f0;
    u8 pad08[8];
    f32 f3;
    f32 f4;
    f32 f5;
    f32 f6;
    f32 f7;
    f32 f8;
    f32 f9;
    f32 fa;
    f32 fb;
    f32 fc;
    u8 pad38[8];
} S_40;

static inline void cp40(S_40 *d, S_40 *s) {
    char *x = (char *)s + 0x2c;
    char *y = (char *)d + 0x2c;
    *(s32 *)(y - 0x2c) = *(s32 *)(x - 0x2c);
    *(f32 *)(y - 0x28) = *(f32 *)(x - 0x28);
    *(f32 *)(y - 0x1c) = *(f32 *)(x - 0x1c);
    *(f32 *)(y - 0x18) = *(f32 *)(x - 0x18);
    *(f32 *)(y - 0x14) = *(f32 *)(x - 0x14);
    *(f32 *)(y - 0x10) = *(f32 *)(x - 0x10);
    *(f32 *)(y - 0xc) = *(f32 *)(x - 0xc);
    *(f32 *)(y - 0x8) = *(f32 *)(x - 0x8);
    *(f32 *)(y - 0x4) = *(f32 *)(x - 0x4);
    *(f32 *)(y + 0x0) = *(f32 *)(x + 0x0);
    *(f32 *)(y + 0x4) = *(f32 *)(x + 0x4);
    *(f32 *)(y + 0x8) = *(f32 *)(x + 0x8);
}

S_40 *func_0033FA50(S_40 *a, S_40 *b, S_40 *c) {
    while (a != b) {
        if (c) cp40(c, a);
        a++;
        c++;
    }
    return c;
}

typedef struct { s8 b0, b1, b2, b3; } S_col;

void func_003401F0(S_col *arg0, f32 arg1) {
    s32 v = (s32)(arg1 * 255.0f);
    s32 max = 0xFE;
    if (v < 2) {
        v = 2;
    } else if (max < v) {
        v = max;
    }
    arg0->b0 = (s8)v;
}
