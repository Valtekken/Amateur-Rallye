#define A(p,t,o) (*(t*)((char*)(p)+(o)))
#define E(o,t) A((char *)(A(arg0, u32, 0x28) + off), t, o)
extern f32 func_0015AD18(void);
extern f32 func_003F2F50(f32);
extern void func_003F9698(const char *);
extern const char D_00471F90[];

void func_0019C888(void *arg0, void *arg1, u32 arg2, f32 *arg3, s32 *arg4) {
    u32 base = A(arg0, u32, 0x28);
    u32 end = A(arg0, u32, 0x2C);
    u32 n = (s32)((u32)(end - base) * 0xBA2E8BA3u) >> 2;
    if (arg2 < n) {
        u32 off = arg2 * 0x2C;
        f32 v10, vc, v14, v20;
        A(arg1, f32, 0x4C) = E(0x4, f32);
        A(arg1, f32, 0x48) = E(0x0, f32);
        A(arg1, f32, 0x50) = E(0x8, f32);
        v10 = E(0x10, f32);
        A(arg1, f32, 0x58) = v10 * func_0015AD18();
        vc = E(0xC, f32);
        A(arg1, f32, 0x54) = vc * func_0015AD18();
        v14 = E(0x14, f32);
        A(arg1, f32, 0x5C) = func_003F2F50(v14 * func_0015AD18());
        A(arg1, s32, 0x60) = E(0x18, s32);
        A(arg1, f32, 0x64) = E(0x1C, f32);
        v20 = E(0x20, f32);
        A(arg1, s32, 0x3C) = 1;
        A(arg1, f32, 0x68) = v20;
        *arg3 = E(0x24, f32);
        *arg4 = E(0x28, s32);
        return;
    }
    func_003F9698(D_00471F90);
}
