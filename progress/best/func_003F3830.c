extern s32 D_0048BD04;
extern const char D_0048B6C8[];
extern s64 D_0048B6D0;
extern s64 D_0048B628;

extern f32 func_003F4FA8(void);
extern s32 func_003F7148(f32);
extern s32 func_002AD350(f32, const char *);
extern s64 func_002ABF20(s32, s64);
extern f32 func_002AC758(s64);
extern s32 func_003F6EF8(void *);
extern s32 *func_003F73E0(void);

f32 func_003F3830(f32 fparg0) {
    s32 sp0;
    volatile s64 sp4;
    volatile s64 sp8;
    volatile s64 sp10;
    volatile s64 sp18;
    volatile s32 sp20;
    s32 var = D_0048BD04;
    f32 fvar = func_003F4FA8();
    volatile s64 pad;

    if (var == -1) return fvar;
    if (func_003F7148(fparg0)) return fvar;
    if (!(fparg0 <= 0.0f)) return fvar;

    sp20 = 0;
    sp4 = func_002AD350(fparg0, D_0048B6C8);
    sp8 = sp4;

    if (var == 0) {
        sp10 = sp8;
        sp18 = D_0048B6D0;
    } else {
        sp18 = func_002ABF20(0, D_0048B628);
    }

    if (fparg0 == 0.0f) {
        if (var == 2) {
            sp0 = 2;
            *func_003F73E0() = 0x22;
        } else {
            if (func_003F6EF8(&sp0) == 0) {
                *func_003F73E0() = 0x21;
            }
        }
    } else {
        if (var != 2) {
            sp0 = 1;
        }
        *func_003F73E0() = 0x21;
    }

    if (sp20 != 0) {
        *func_003F73E0() = sp20;
    }

    return func_002AC758(sp18);
}
