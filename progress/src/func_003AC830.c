typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    register s32 dead = 0;
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_003AC830(register s32 arg0, register f32 arg1) {
    return 0;
}
