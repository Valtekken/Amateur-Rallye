extern void func_001E2460(void *, s32);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern char D_0047B4A8[], D_0047B760[], D_0047BA70[], D_0047BB30[], D_0047BB40[], D_0047BB50[], D_0047BB58[], D_0047BB60[], D_0047BB68[];

void func_002976E8(void *arg0, s32 arg2) {
    char sp[0x10];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047BA70, (char *)arg0 + 0x24);
    func_001E25B0(sp, D_0047BB30, (char *)arg0 + 0x28);
    func_001E25B0(sp, D_0047BB40, (char *)arg0 + 0x2C);
    func_001E25B0(sp, D_0047BB50, (char *)arg0 + 0xC);
    func_001E25B0(sp, D_0047B760, (char *)arg0 + 0x10);
    func_001E2510(sp, D_0047B4A8, (char *)arg0 + 0x20);
    func_001E28F8(sp, D_0047BB58, (char *)arg0 + 0x14);
    func_001E28F8(sp, D_0047BB60, (char *)arg0 + 0x18);
    func_001E25B0(sp, D_0047BB68, (char *)arg0 + 0x30);
}
