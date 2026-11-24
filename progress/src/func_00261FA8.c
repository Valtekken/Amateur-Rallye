extern void func_001E2460(void *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern char D_00479BE8[];
extern char D_00479BF0[];
extern char D_00479C00[];
extern char D_00479C10[];

void func_00261FA8(char *a, int unused, void *b) {
    u32 ctx[4];
    func_001E2460(ctx, b);
    func_001E28F8(ctx, D_00479BE8, a + 0x14);
    func_001E2510(ctx, D_00479BF0, a + 0x1C);
    func_001E2510(ctx, D_00479C00, a + 0x18);
    func_001E2510(ctx, D_00479C10, a + 0x20);
}
