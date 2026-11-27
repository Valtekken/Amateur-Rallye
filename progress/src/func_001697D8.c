typedef struct { s32 v[4]; } Ctx;
extern void func_001E2460(void *);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_00169960(void *);
extern const char D_0044F880[], D_0044F898[], D_0044F8B0[], D_0044F8D0[], D_0044F8F0[], D_0044F908[], D_0044F920[], D_0044F940[], D_0044F960[], D_0044F978[], D_0044F990[], D_0044F9B0[], D_0044F9D0[], D_0044F9F8[], D_0044FA18[], D_0044FA40[], D_0044FA68[];

void func_001697D8(void *arg0) {
    Ctx c;
    func_001E2460(&c);
    func_001E2510(&c, D_0044F880, (char *)arg0 + 0x8);
    func_001E2510(&c, D_0044F898, (char *)arg0 + 0xC);
    func_001E2510(&c, D_0044F8B0, (char *)arg0 + 0x10);
    func_001E2510(&c, D_0044F8D0, (char *)arg0 + 0x14);
    func_001E2510(&c, D_0044F8F0, (char *)arg0 + 0x18);
    func_001E2510(&c, D_0044F908, (char *)arg0 + 0x1C);
    func_001E2510(&c, D_0044F920, (char *)arg0 + 0x28);
    func_001E2510(&c, D_0044F940, (char *)arg0 + 0x2C);
    func_001E2510(&c, D_0044F960, (char *)arg0 + 0x20);
    func_001E2510(&c, D_0044F978, (char *)arg0 + 0x24);
    func_001E2510(&c, D_0044F990, (char *)arg0 + 0x30);
    func_001E2510(&c, D_0044F9B0, (char *)arg0 + 0x34);
    func_001E2510(&c, D_0044F9D0, (char *)arg0 + 0x38);
    func_001E2470(&c, D_0044F9F8, (char *)arg0 + 0x3C);
    func_001E2510(&c, D_0044FA18, (char *)arg0 + 0x5C);
    func_001E2510(&c, D_0044FA40, (char *)arg0 + 0x60);
    func_001E2510(&c, D_0044FA68, (char *)arg0 + 0x64);
    func_00169960(arg0);
}
