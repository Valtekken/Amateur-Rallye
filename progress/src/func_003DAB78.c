typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_003DAFB0(u32);

s32 func_003DAB58(u32 a) {
    return func_003DAFB0(a);
}

s32 func_003DE908(u32);

s32 func_003DAB78(u32 a) {
    return func_003DE908(a);
}

s32 func_003DE7D8(u32);

s32 func_003DAB98(u32 a) {
    return func_003DE7D8(a);
}
