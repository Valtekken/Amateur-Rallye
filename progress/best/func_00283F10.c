extern char D_0047AF60[], D_0047AD68[];
extern void *D_0047D378;
extern void func_001D4040(void *, const char *);
extern f32 func_0015AD18(void);
extern f32 func_003F2F50(f32);

void *func_00283F10(void *arg0) {
    int k[4];
    f32 point1 = 0.1f;
    func_001D4040(k, D_0047AF60);
    *(f32 *)((char *)arg0 + 0x64) = point1;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(s32 *)((char *)arg0 + 0x44) = 0;
    *(s32 *)((char *)arg0 + 0x6C) = 0;
    *(s32 *)((char *)arg0 + 0x4) = k[0];
    *(s32 *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D378;
    *(f32 *)((char *)arg0 + 0x48) = 12.0f;
    *(f32 *)((char *)arg0 + 0x4C) = 8.0f;
    *(s32 *)((char *)arg0 + 0x60) = 1;
    *(f32 *)((char *)arg0 + 0x68) = 0.6f;
    *(f32 *)((char *)arg0 + 0x50) = 2.0f;
    func_001D4040((char *)arg0 + 0x70, D_0047AD68);
    *(f32 *)((char *)arg0 + 0x54) = func_0015AD18() * point1;
    *(f32 *)((char *)arg0 + 0x58) = func_0015AD18() * 2.0f;
    *(f32 *)((char *)arg0 + 0x5C) = func_003F2F50(func_0015AD18() * 50.0f);
    return arg0;
}
