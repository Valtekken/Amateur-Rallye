typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    s32 result = 0;
    result = func_002C5160(a, b, c, (CopyTag){0});
    return result;
}

extern s32 func_003A50C0(s32);
extern s32 func_003A4A10(s32);
extern s32 func_003B1A10(s32);

s32 func_003ACC28(register s32 arg0) {
    func_003A50C0(arg0);
    func_003A50C0(arg0 + 0x10);
    func_003A4A10(arg0 + 0x20);
    func_003B1A10(arg0 + 0x2C);
    return arg0;
}

void func_003ACCA8(register s32 *arg0, register s32 arg1) {
    arg0[3] = (arg0[3] & ~1) | (arg1 & 1);
}

void func_003ACCE8(register s32 *arg0, register s32 arg1) {
    arg0[3] = (arg0[3] & 1) | (arg1 << 1);
}
