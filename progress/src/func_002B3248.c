extern s32 func_003CC348(s32, s32, s32, s32);
extern s32 func_003CC4B8(s32);
extern s32 func_003CC7F8(s32, s32, s32);
extern s32 func_003CC9E8(s32, s32, s32 *);
extern void func_003F9698(char *, ...);
extern char D_0047E300[];
extern char D_0047E330[];
extern char D_0047E378[];
extern char D_0047E3A0[];

s32 func_002B3248(register s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 r14 = 0;
    s32 r18 = 0;
    func_003CC348(arg1, arg2, arg3, 0x202);
    func_003CC9E8(0, 0, &r18);
    if (r18 < 0) {
        func_003F9698(D_0047E300, arg3, r18);
        return r18;
    }
    func_003CC7F8(r18, arg4, arg5);
    func_003CC9E8(0, 0, &r14);
    if (r14 < 0) {
        func_003F9698(D_0047E330, arg3, r14);
        return r14;
    }
    func_003F9698(D_0047E378, arg3, r14);
    func_003CC4B8(r18);
    func_003CC9E8(0, 0, &r14);
    if (r14 < 0) {
        func_003F9698(D_0047E3A0, arg3, r14);
        return r14;
    }
    return 0;
}
