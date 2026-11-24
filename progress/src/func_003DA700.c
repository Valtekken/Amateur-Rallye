extern s32 func_003D7F50(void *, u32);
s32 func_003DA700(s32 a, u32 *p) {
    u8 *q = (u8 *)p[5];
    if ((u32)q >= p[6]) return func_003D7F50(p, (u8)a);
    *q = a;
    p[5] = (u32)(q + 1);
    return (u8)a;
}
