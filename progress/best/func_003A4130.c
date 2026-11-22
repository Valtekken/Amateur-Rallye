
extern s32 func_003F93CC(s32, s32, s32);

s32 func_003A4130(register s32 a, register s32 b, register s32 c) {
    s32 diff = b - a;
    s32 n = diff >> 2;
    func_003F93CC(c, a, n << 2);
    return c + diff;
}
