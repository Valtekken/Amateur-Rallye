typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

f32 func_003972C0(register f32 a, register f32 b, register f32 c) {
    f32 sp0 = a;
    if (a < b) sp0 = b;
    else if (c < a) sp0 = c;
    return sp0;
}

extern s32 func_00395B68(s32, s32);

s32 func_00397228(s32 arg0, s32 arg1, s32 arg2, register s32 arg3) {
    s32 sp0 = arg0;
    s32 sp4 = arg1;
    s32 sp10 = arg2;
    while (sp0 != sp4) {
        func_00395B68(sp10, sp0);
        sp0 += 8;
        sp10 += 8;
    }
    return sp10;
}
