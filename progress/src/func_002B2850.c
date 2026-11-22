extern s32 func_003CC348(s32, s32, s32, s32);
extern s32 func_003CC4B8(s32);
extern s32 func_003CC6D8(s32, s32, s32);
extern s32 func_003CC9E8(s32, s32, s32 *);
extern void func_003F9698(char *, ...);
extern char D_0047E1C0[];
extern char D_0047E1F0[];
extern char D_0047E220[];

s32 func_002B2850(register s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 r14 = 0;
    s32 r18 = 0;
    func_003CC348(arg1, arg2, arg3, 1);
    func_003CC9E8(0, 0, &r18);
    if (r18 < 0) {
        func_003F9698(D_0047E1C0, arg3, r18);
        return r18;
    }
    func_003CC6D8(r18, arg4, arg5);
    func_003CC9E8(0, 0, &r14);
    if (r14 < 0) {
        func_003F9698(D_0047E1F0, arg3, r14);
        return r14;
    }
    func_003CC4B8(r18);
    func_003CC9E8(0, 0, &r14);
    if (r14 < 0) {
        func_003F9698(D_0047E220, arg3, r14);
        return r14;
    }
    return 0;
    goto end;
    goto end;
end: ;
}
