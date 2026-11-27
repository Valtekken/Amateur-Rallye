extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, s32);
extern void func_001E2510(void *, const char *, s32);
extern void func_001E25B0(void *, const char *);
extern void func_001E28F8(void *, const char *, s32);
extern const char D_00472930[];
extern const char D_00472940[];
extern const char D_00472950[];
extern const char D_00472960[];
extern const char D_00472978[];
extern const char D_00472990[];
extern const char D_004729A0[];
extern const char D_004729B8[];
extern const char D_004729D0[];
extern const char D_004729E0[];

void func_001AA770(void *arg0, s32 arg2) {
    volatile char pad[16];
    func_001E2460(arg0, arg2);
    func_001E28F8(arg0, D_00472930, 0);
    func_001E2470(arg0, D_00472940, 0xc);
    func_001E2470(arg0, D_00472950, 0x1c);
    func_001E2470(arg0, D_00472960, 0x28);
    func_001E2470(arg0, D_00472978, 0x2c);
    func_001E2510(arg0, D_00472990, 0x40);
    func_001E2510(arg0, D_004729A0, 0x44);
    func_001E2510(arg0, D_004729B8, 0x28);
    func_001E2510(arg0, D_004729D0, 0x30);
    func_001E25B0(arg0, D_004729E0);
}
