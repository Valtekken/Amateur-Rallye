typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
extern s32 func_001D9598(s32, s32, s32, CopyTag);
extern s32 func_002AFEB8(s32, s32);
extern s32 func_003958D8(s32, s32);
extern void func_003A3170(s32, s32);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_00395C80(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_001D9598(a, b, c, (CopyTag){0});
}

s32 func_00395B68(register s32 a, register s32 b) {
    register s32 p = func_002AFEB8(8, a);
    if (p)
        p = func_003958D8(p, b);
    return p;
}

s32 func_00395940(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4) {
    s32 count = (arg1 - arg0) >> 3;
    while (count > 0) {
        arg2 -= 8;
        arg1 -= 8;
        func_003A3170(arg2, arg1);
        count--;
    }
    return arg2;
}
