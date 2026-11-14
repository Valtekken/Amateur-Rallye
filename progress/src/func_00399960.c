/* identical to func_00396860 (matched), with its names changed by decompdecomp */
typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

extern void func_003A6370(s32, s32);

s32 func_00398830(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 var_19;
    s32 var_20;

    var_19 = arg0;
    var_20 = arg2;
    sp0 = (s32)(arg1 - var_19) >> 3;
    while (sp0 > 0) {
        func_003A6370(var_20, var_19);
        var_19 += 8;
        var_20 += 8;
        sp0 -= 1;
    }
    return var_20;
}

extern void func_003F93CC(void *, void *, s32);

s32 *func_00399960(register s32 *a, register s32 *b, register s32 *c) {
    register s32 d = b - a;
    s32 n = d;
    func_003F93CC(c - n, a, n * 4);
    return c - n;
}

extern s32 func_003A35D0(void *);
extern void func_00396310(s32, s32);

s32 func_003963A0(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    sp10 = sp0;
    while (sp4) {
        func_00396310(func_003A35D0(sp10), sp8);
        sp4--;
        sp10 += 4;
    }
    return sp10;
}
