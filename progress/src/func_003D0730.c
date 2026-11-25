extern s32 func_003FA9B8(s32);
extern s32 func_003CD948(s32, s32, u32, s32, s32);

s32 func_003D0730(s32 a, s32 b) {
    return func_003CD948(a, 0, 0xFFFFFFFFu, b, func_003FA9B8(b));
}
