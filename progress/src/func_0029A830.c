extern char D_0047BA70[];
extern char D_0047BD70[];
extern char D_0047BD78[];
extern char D_0047BD80[];
extern char D_0047BD88[];
extern char D_0047BD90[];
extern char D_0047BD98[];
extern char D_0047BDA8[];

void func_001E2460(void *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E28F8(void *, const char *, void *);

void func_0029A830(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047BA70, (void *)((char *)arg0 + 0x28));
    func_001E25B0(sp, D_0047BD70, (void *)((char *)arg0 + 0x24));
    func_001E28F8(sp, D_0047BD78, (void *)((char *)arg0 + 0x14));
    func_001E28F8(sp, D_0047BD80, (void *)((char *)arg0 + 0x18));
    func_001E28F8(sp, D_0047BD88, (void *)((char *)arg0 + 0x1C));
    func_001E28F8(sp, D_0047BD90, (void *)((char *)arg0 + 0x20));
    func_001E25B0(sp, D_0047BD98, (void *)((char *)arg0 + 0xC));
    func_001E25B0(sp, D_0047BDA8, (void *)((char *)arg0 + 0x10));
}
