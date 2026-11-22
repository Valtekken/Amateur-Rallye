typedef signed long long s64;

extern f32 func_002AC758(s64);
extern s64 func_002AD350(f32, s32, void *);
extern f32 func_003F3038(f32);
extern f32 func_003F42A0(void);
extern s32 func_003F6EF8(void *);
extern s32 func_003F7148(f32);
extern s32 *func_003F73E0(void);
extern s32 D_0048BD04;
extern char D_0048B6A0[];

f32 func_003F33C8(f32 fparg0) {
    f32 f20 = fparg0;
    f32 f21;
    s32 v16;
    s32 sp20;
    s64 temp;
    s64 sp18;

    f21 = func_003F42A0();
    v16 = D_0048BD04;
    if (v16 == -1) {
        return f21;
    }
    if (func_003F7148(f20) != 0) {
        return f21;
    }
    if (!(func_003F3038(f20) > 1.0f)) {
        return f21;
    }
    sp20 = 0;
    temp = func_002AD350(f20, 1, (void *)D_0048B6A0);
    sp18 = 0;
    if (v16 != 2) {
        if (func_003F6EF8((void *)0) == 0) {
            /* fall through */
        } else {
            goto skip;
        }
    }
    {
        s32 *p = func_003F73E0();
        *p = 0x21;
    }
skip:
    if (sp20 != 0) {
        s32 *p = func_003F73E0();
        *p = sp20;
    }
    return func_002AC758(sp18);
}
