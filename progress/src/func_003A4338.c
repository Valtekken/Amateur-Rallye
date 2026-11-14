/* identical to func_003981A8 (matched), with its names changed by decompdecomp */
typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

extern s32 func_003A35D0(s32);
extern s32 func_00396310(s32, s32);
s32 func_00397180(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 sp0 = arg0;
    s32 sp4 = arg1;
    s32 sp8 = arg2;
    s8 spC = arg3;
    s32 sp10 = arg2;
    for (;;) {
        if (sp0 != sp4) {
            func_00396310(func_003A35D0(sp10), sp0);
            sp0 += 4;
            sp10 += 4;
            continue;
        }
        break;
    }
    return sp10;
}

extern s32 func_00397C40(s32);
extern s32 func_003980A0(s32, s32, s32);
void func_003980E0(register s32 arg0, register s32 arg1) {
    func_003980A0(arg0, arg1, func_00397C40(arg0));
}

extern s32 func_003AC398(s32);
s32 func_003A4338(register s32 a, register s32 b) {
    return func_003AC398(b);
}
