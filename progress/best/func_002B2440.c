extern s32 func_003CC9E8(s32, s32, s32 *);
extern void func_003CCB20(s32, s32, s32 *, s32 *, s32 *);
extern s32 func_003F73B8(char *);
extern char D_0047E0C8[];

s32 func_002B2440(register s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8 = 0;
    s32 spC, sp10, sp14;
    func_003CCB20(arg1, arg2, &spC, &sp10, &sp14);
    func_003CC9E8(0, 0, &sp8);
    if (spC == 2) {
        if (sp8 == 0) {
            if (sp14 != 0) {
                if (func_003F73B8(D_0047E0C8) < sp10) {
                    return 0;
                    goto x1;
                }
                return 1;
            x1:
                goto x2;
            }
            return 2;
        x2:
            goto x3;
        }
        return 3;
    x3:
        goto def;
    }
    if (spC == 1) return -1;
    if (spC == 3) return -1;
    if (spC == 0) return -1;
def:
    return -0xA;
}
