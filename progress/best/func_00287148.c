extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern void func_001E2F18(void *, const char *, void *);
extern char D_0047B078[], D_0047AF40[], D_0047B088[], D_0047B098[], D_0047B0A8[], D_0044DD18[];

void *func_00287148(void *arg0) {
    s32 k[4];
    volatile u64 pad16[2] __attribute__((aligned(16)));
    s32 sp20[4];
    s32 *p = (s32 *)D_002AD408(0x24);
    s32 *q = p + 5;
    func_001D4040(k, D_0047B078);
    s32 k0 = k[0];
    p[2] = 0;
    p[4] = (s32)D_0044DD18;
    p[3] = 0;
    p[1] = 0;
    p[0] = 0;
    q[0] = 0;
    q[2] = 0;
    q[1] = 0;
    p[8] = k0;
    func_001E2460(sp20, p, k0);
    func_001E2C08(sp20, D_0047AF40, *(f32 *)((char *)arg0 + 0x10));
    *(f32 *)(k + 0) = *(f32 *)((char *)arg0 + 0x14);
    *(f32 *)(k + 1) = *(f32 *)((char *)arg0 + 0x18);
    *(f32 *)(k + 2) = *(f32 *)((char *)arg0 + 0x1C);
    func_001E2F18(sp20, D_0047B088, k);
    func_001E2C08(sp20, D_0047B098, *(f32 *)((char *)arg0 + 0x20));
    func_001E2C08(sp20, D_0047B0A8, *(f32 *)((char *)arg0 + 0x24));
    return p;
}
