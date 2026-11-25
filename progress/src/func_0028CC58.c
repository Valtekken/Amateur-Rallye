extern void func_001E2460(void *, void *);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E2A48(void *, const char *, void *);
extern char D_0047AF40[], D_0047B498[], D_0047B4A8[], D_0047B4B0[], D_0047B4C0[], D_0047B4D0[], D_0047B4E0[], D_0047B4F8[], D_0047B508[], D_0047B518[];

void func_0028CC58(void *arg0, void *unused, void *arg2) {
    char sp[16];
    char *p18 = (char *)arg0 + 0x18;
    func_001E2460(sp, arg2);
    func_001E2470(sp, D_0047B498, (char *)arg0 + 0x84);
    func_001E2510(sp, D_0047B4A8, p18);
    func_001E2510(sp, D_0047B4B0, p18);
    func_001E2510(sp, D_0047B4C0, (char *)arg0 + 0x1C);
    func_001E2510(sp, D_0047B4D0, (char *)arg0 + 0x20);
    func_001E2A48(sp, D_0047B4E0, (char *)arg0 + 0x30);
    func_001E2A48(sp, D_0047AF40, (char *)arg0 + 0x3C);
    func_001E2A48(sp, D_0047B4F8, (char *)arg0 + 0x48);
    func_001E2A48(sp, D_0047B508, (char *)arg0 + 0x6C);
    func_001E2A48(sp, D_0047B518, (char *)arg0 + 0x78);
}
