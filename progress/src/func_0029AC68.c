extern s32 D_0042684C;
extern void *D_00494B40;
extern const char D_0047AD68[];
extern void func_001D4040(void *, const char *);
extern void func_0029ACF8(s32, s32);

void func_0029AC68(register s32 arg0, register s32 arg1) {
    if (D_0042684C == 0) {
        func_001D4040(&D_00494B40, D_0047AD68);
        D_0042684C = 1;
    }
    if (func_001E3650(func_001E4280(), (s32)&D_00494B40) <= 0) {
        func_0029ACF8(arg0, arg1);
    }
}
