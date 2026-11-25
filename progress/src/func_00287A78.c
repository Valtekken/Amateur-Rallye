extern char D_0047B0D8[], D_0047AD68[];
extern void *D_0047D178;
extern void func_001D4040(void *, const char *);
extern f32 func_0015AD18(void);

void *func_00287A78(void *arg0) {
    int k[4];
    f32 val;
    char *child = (char *)arg0 + 0x48;
    s32 *p = (s32 *)arg0;
    func_001D4040(k, D_0047B0D8);
    *(s32 *)child = 0;
    p[0xC/4] = 0;
    p[0x10/4] = 1;
    p[0x14/4] = 1;
    p[0x18/4] = 1;
    p[0x4/4] = k[0];
    p[0/4] = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D178;
    *(f32 *)((char *)arg0 + 0x1C) = 0.06f;
    val = (func_0015AD18() * 10.0f) / 30.0f;
    *(f32 *)((char *)arg0 + 0x34) = 10.0f;
    *(f32 *)((char *)arg0 + 0x30) = 15.0f;
    *(f32 *)((char *)arg0 + 0x2C) = 4.0f;
    *(f32 *)((char *)arg0 + 0x38) = 4.0f;
    *(f32 *)((char *)arg0 + 0x24) = 0.6f;
    *(f32 *)((char *)arg0 + 0x28) = 0.6f;
    p[0x3C/4] = 0x78;
    *(f32 *)((char *)arg0 + 0x20) = val;
    func_001D4040(child, D_0047AD68);
    return arg0;
}
