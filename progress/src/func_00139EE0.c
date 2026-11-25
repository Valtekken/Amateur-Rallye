extern s32 func_0011DFB8(s32);
extern s32 func_0011E278(s32, s32);
extern s32 func_0011E2B8(s32, s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, s32, s32);
extern s32 func_00110430(void);
extern s32 func_00110238(s32, s32);
extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern void func_003F9698(const char *, const char *, s32);
extern char D_00445C70[];
extern char D_0044ADF0[];
extern char D_0044AE48[];

#define C (*(s32 *)((char *)arg0 + 0xC))

void func_00139EE0(void *arg0) {
    s32 key[4];
    s32 v0;

    func_0011E650(C, 1, 0);
    func_0011DFB8(C);
    if (func_0011E528(C) != 0) {
        return;
    }
    if (func_0011E2B8(C, 1) != -2) {
        return;
    }
    
    func_003F9698(D_0044ADF0, D_0044AE48, 0xA3);
    v0 = func_00110430();
    func_00110238(v0, 0x27);
    v0 = func_001E4280();
    func_001D4040(key, D_00445C70);
    func_0011E278(C, func_001E3650(v0, (s32)key));
}
