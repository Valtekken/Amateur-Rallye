extern s32 func_0011DFB8(s32);
extern s32 func_0011E278(s32, s32);
extern s32 func_0011E2B8(s32, s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, s32, s32);
extern void func_0011EB10(void *);
extern void func_0011EE30(void *);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern s32 func_001E4280(void);
extern char D_00444B30[];
#define C (*(s32 *)((char *)arg0 + 0xC))
void func_0011EA20(void *arg0) {
    s32 key[4];
    s32 r;
    func_0011E650(C, 6, 0);
    func_0011DFB8(C);
    if (func_0011E528(C) == 0) {
        r = func_0011E2B8(C, 1);
        switch (r) {
        case 1: func_0011EB10(arg0); break;
        case 2: func_0011EE30(arg0); break;
        case -3: {
            s32 cfg = func_001E4280();
            func_001D4040(key, D_00444B30);
            func_001E3D10(cfg, key, 0);
            func_0011E278(C, 1);
            break;
        }
        }
    }
}
