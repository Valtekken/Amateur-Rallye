s32 func_00397FB0(s32, s32, s32);

s32 func_00398030(register s32 a, register s32 b, register s32 c) {
    return func_00397FB0(a, b, c);
}

void func_00399A88(s32 *dst, s32 *end, s32 *src) {
    while (dst != end) {
        *dst = *src;
        dst++;
    }
}

void func_003A2B10(s32 *dst, s32 *end, s32 *src) {
    while (dst != end) {
        *dst = *src;
        dst++;
    }
}

void func_003A32E8(s32, s32);

void func_003AD218(register s32 arg0, register s32 arg1) {
    if (arg1 != 0) {
        func_003A32E8(arg0, arg1 * 0x18);
    }
}
