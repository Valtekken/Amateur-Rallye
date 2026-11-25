extern char D_0047E108[], D_0047E130[], D_0047E148[];
extern void func_003F9698(char *, ...);
extern void func_003CCFD8(s32, s32);
extern s32 func_003CC9E8(s32, s32, s32 *);

s32 func_002B2688(register s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    sp8 = 0;
    func_003F9698(D_0047E108, arg1, arg2);
    func_003CCFD8(arg1, arg2);
    func_003CC9E8(0, 0, &sp8);
    if (sp8 == 0) {
        func_003F9698(D_0047E130);
        goto ret0;
    }
    func_003F9698(D_0047E148, sp8);
    return sp8;
ret0:
    return 0;
    goto end;
    goto end;
end: ;
}
