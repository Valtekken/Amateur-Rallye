extern void func_001E2460(void *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E2470(void *, const char *, void *);
extern f32 func_0015AD18(void);
extern f32 func_003F2F50(f32);
extern char D_0047AF70[], D_0047AF80[], D_0047AF90[], D_0047AF98[], D_0047AFA8[], D_0047AFB8[], D_0047AFD0[], D_0047AFE0[], D_0047AFF8[], D_0047B010[];
void func_002841A8(char *a, void *unused, void *b) {
    char sp[16];
    func_001E2460(sp, b);
    func_001E2510(sp, D_0047AF70, a + 0x48);
    func_001E2510(sp, D_0047AF80, a + 0x4C);
    func_001E2510(sp, D_0047AF90, a + 0x50);
    func_001E2510(sp, D_0047AF98, a + 0x54);
    func_001E2510(sp, D_0047AFA8, a + 0x58);
    func_001E2510(sp, D_0047AFB8, a + 0x5C);
    func_001E2470(sp, D_0047AFD0, a + 0x60);
    func_001E2510(sp, D_0047AFE0, a + 0x64);
    func_001E2510(sp, D_0047AFF8, a + 0x68);
    func_001E2470(sp, D_0047B010, a + 0x3C);
    *(f32 *)(a + 0x54) = *(f32 *)(a + 0x54) * func_0015AD18();
    *(f32 *)(a + 0x58) = *(f32 *)(a + 0x58) * func_0015AD18();
    *(f32 *)(a + 0x5C) = func_003F2F50(*(f32 *)(a + 0x5C) * func_0015AD18());
}
