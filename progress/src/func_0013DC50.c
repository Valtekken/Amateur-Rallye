extern void func_0011DFB8(s32);
extern void func_0011E278(s32,s32);
extern s32 func_0011E2B8(s32,s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32,s32,s32);
extern void func_0013DE48(void *);
extern void func_0013E5B8(void *,s32,s32);
extern void func_0013E6B0(void *);
extern void func_001D4040(char *, const char *);
extern s32 func_001E3598(s32, void *);
extern void func_001E3D10(s32, void *, s32);
extern char D_004477F0[];
extern char D_0044A248[];
extern char D_0044B3A0[];
typedef struct { s32 pad[3]; s32 unkC; s32 unk10; } Obj;
static inline s32 check(s32 mgr, char *buf, const char *key) {
    func_001D4040(buf, key);
    return func_001E3650(mgr, (s32)buf);
}

void func_0013DC50(Obj *arg0) {
    s32 sp[4], sp10[4];
    s32 a, mgr, i, chosen;
    func_0011DFB8(arg0->unkC);
    if (func_0011E528(arg0->unkC) != 0) return;
    if (arg0->unk10 != 0) return;
    mgr = func_001E4280();
    func_001D4040((char *)sp, D_004477F0);
    if (func_001E3598(mgr, sp) != 0)
        func_0011E650(arg0->unkC, 5, 0);
    else
        func_0011E650(arg0->unkC, 3, 0);
    mgr = func_001E4280();
    if (check(mgr, (char *)sp, D_0044B3A0) == 0) {
        func_0011E278(arg0->unkC, 0x2F);
        arg0->unk10 = 1;
    } else {
        mgr = func_001E4280();
        if (check(mgr, (char *)sp10, D_0044B3A0) == 2) {
            func_0011E278(arg0->unkC, 0x28);
            arg0->unk10 = 1;
        }
    }
    func_0013DE48(arg0);
    a = func_002971B0(func_00297500());
    i = 2;
    do {
        if (i == a) func_0013E5B8(arg0, i, 1);
        else func_0013E5B8(arg0, i, 0);
        i++;
    } while (i < 6);
    chosen = func_0011E2B8(arg0->unkC, 1);
    if (chosen == -3) {
        func_0013E6B0(arg0);
        arg0->unk10 = 1;
        return;
    }
    if (chosen >= -3) {
        if (chosen < 6) {
            if (chosen > 0) {
                mgr = func_001E4280();
                func_001D4040((char *)sp, D_0044A248);
                func_001E3D10(mgr, sp, 1);
                func_0013E6B0(arg0);
                arg0->unk10 = 1;
            }
        }
    }
}
