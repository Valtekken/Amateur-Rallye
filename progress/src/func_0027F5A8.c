extern void func_001E2460(void *, s32);
extern void func_001E28F8(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern const char D_0047ADC0[];
extern const char D_0047AE00[];

void func_0027F5A8(char *p, s32 unused, s32 a) {
    u32 k[4];
    func_001E2460(k, a);
    func_001E28F8(k, D_0047AE00, p + 0x10);
    func_001E25B0(k, D_0047ADC0, p + 0xC);
}
