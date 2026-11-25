extern char D_0047BA70[];
extern char D_0047BAE0[];
extern char D_0047BB90[];
extern char D_0047BBA0[];
extern char D_0047BBB0[];
extern char D_0047BBC0[];
extern char D_0047BBD0[];
extern char D_0047BBD8[];

void func_001E2460(void *, void *);
void func_001E2470(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E2998(void *, const char *, void *);

void func_00298050(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047BA70, (void *)((char *)arg0 + 0xC));
    func_001E2998(sp, D_0047BB90, (void *)((char *)arg0 + 0x10));
    func_001E2998(sp, D_0047BBA0, (void *)((char *)arg0 + 0x20));
    func_001E25B0(sp, D_0047BBB0, (void *)((char *)arg0 + 0x30));
    func_001E25B0(sp, D_0047BBC0, (void *)((char *)arg0 + 0x34));
    func_001E2470(sp, D_0047BBD0, (void *)((char *)arg0 + 0x38));
    func_001E2470(sp, D_0047BAE0, (void *)((char *)arg0 + 0x5C));
    func_001E2470(sp, D_0047BBD8, (void *)((char *)arg0 + 0x60));
}
