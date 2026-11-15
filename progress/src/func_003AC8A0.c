typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
extern s32 func_003FA760(s32, s32);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_003AC7F8(register s32 arg0, register s32 arg1, register s32 arg2) {
    return 0;
}

s32 func_003AC830(register s32 arg0, f32 arg1) {
    return 0;
}

s32 func_003AC8A0(register s32 *arg0, register s32 arg1) {
    register s32 result = 0;
    if (*arg0 != 0 && arg1 != 0 && func_003FA760(arg1, *arg0) == 0) {
        result = 1;
    }
    return result;
}
