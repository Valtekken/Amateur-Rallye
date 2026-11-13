typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_00397330(register s32 arg0) {
    return arg0 + 0xC;
}

f32 func_003972C0(f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 sp0;

    sp0 = fparg0;
    if (fparg0 < fparg1) {
        sp0 = fparg1;
    } else if (fparg2 < fparg0) {
        sp0 = fparg2;
    }
    return sp0;
}

extern s32 func_00395B68(s32, s32);

s32 func_00397228(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s8 spC;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = sp8;
    for (;;) {
        if (sp0 != sp4) {
            func_00395B68(sp10, sp0);
            sp0 += 8;
            sp10 += 8;
            continue;
        }
        break;
    }
    return sp10;
}
