extern s32 func_002B2440(s32, s32, s32);
extern void func_003F9698(char *, ...);
extern char D_0047E098[];

s32 func_002B2360(register s32 arg0, s32 arg1, s32 arg2) {
    s32 i = 0;
    s32 r;
    while (i < 3) {
        func_003F9698(D_0047E098, i);
        r = func_002B2440(arg0, arg1, arg2);
        if (r == 0 || r == 3) return r;
        i++;
    }
    return r;
}
