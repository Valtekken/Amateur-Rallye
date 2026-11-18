extern void func_001E2460(void*, void*);
extern void func_001E25B0(void*, const char*, void*);
extern s32 func_001E2470(void*, const char*, void*);
extern char D_0044BC38[], D_0044C238[], D_0044C258[];
void func_0014A518(s32 *p, s32 u, void *a) {
    s32 k[4];
    func_001E2460(k, a);
    func_001E25B0(k, D_0044BC38, p + 3);
    func_001E25B0(k, D_0044C238, p + 4);
    func_001E2470(k, D_0044C258, p + 5);
    if (p[4] <= 0) p[4] = 1;
}
