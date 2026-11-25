extern void func_001D4040(void *, const char *);
extern void func_0016CCC0(void *, s32, s32, s32, s32);
extern const char D_0044EE08[], D_0044F738[], D_0044FA88[];

void *func_0016CBA8(void *arg0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 *p = (s32 *)arg0;
    func_001D4040(arg0, D_0044F738);
    func_001D4040((char *)arg0 + 4, D_0044EE08);
    func_001D4040((char *)arg0 + 8, D_0044FA88);
    func_001D4040((char *)arg0 + 0xC, D_0044FA88);
    p[0x10 / 4] = 0;
    p[0x14 / 4] = 0;
    p[0x18 / 4] = 0;
    p[0x2C / 4] = 0;
    p[0x30 / 4] = 0;
    *(f32 *)((char *)arg0 + 0x1C) = -0.2f;
    *(f32 *)((char *)arg0 + 0x20) = 0.2f;
    *(f32 *)((char *)arg0 + 0x24) = -0.2f;
    *(f32 *)((char *)arg0 + 0x28) = 0.2f;
    func_0016CCC0(arg0, a1, a2, a3, a4);
    return arg0;
}
