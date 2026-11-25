extern void func_003F95A0(void *);
extern s32 D_00427D7C;
extern char D_10000[];
extern char D_4D9978[];
typedef struct { s32 a[12]; } S;
void func_002B1528(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    S sp; func_003F95A0(&sp);
    s32 x = sp.a[0], y = sp.a[7], z = sp.a[9], w = sp.a[1];
    *arg0 = x; *arg1 = y; *arg4 = x - z - y; *arg5 = w;
    u32 k = (u32)&D_10000;
    if ((u32)&D_10000 > 0x800000) k = 0x100000;
    u32 c = 0x2000000; c -= (u32)&D_4D9978; c -= k; c -= 0x400;
    *arg2 = c; *arg3 = D_00427D7C;
}
