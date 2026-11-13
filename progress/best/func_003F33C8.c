typedef signed long long s64;
typedef float f32;

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
    s64 sp18;
    s32 sp20;
    f32 temp_f21;
    s32 temp_16;
    s64 temp_2;

    temp_16 = D_0048BD04;
    temp_f21 = func_003F42A0();
    if (temp_16 != -1) {
        if (func_003F7148(fparg0) == 0) {
            if (func_003F3038(fparg0) > 1.0f) {
                sp20 = 0;
                temp_2 = func_002AD350(fparg0, 1, (void *)D_0048B6A0);
                sp18 = 0;
                if ((temp_16 == 2) || (func_003F6EF8((void *)0) == 0)) {
                    *func_003F73E0() = 0x21;
                }
                if (sp20 != 0) {
                    *func_003F73E0() = sp20;
                }
                return func_002AC758(sp18);
            }
            goto block_9;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return temp_f21;
    }
block_9:
    return temp_f21;
}
