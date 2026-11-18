extern s32 func_0011CDD0(s32, s32);
extern void func_001E2460(void *, s32);
extern void func_001E25B0(void *, const char *, s32);
extern void func_001E28F8(void *, const char *, s32);
extern char D_004471E8[], D_00447300[];

void func_0011CCE0(s32 arg0, s32 arg1, s32 arg2) {
    u32 a[4], b[4], reg[4];
    func_001E2460(reg, arg2);
    a[0] = 0; b[0] = 0;
    func_001E28F8(reg, D_00447300, arg0 + 0xC);
    func_001E25B0(reg, D_004471E8, arg0 + 0x10);
    func_0011CDD0(arg0, arg1);
}
