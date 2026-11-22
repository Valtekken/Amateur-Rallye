extern s64 func_002ABF20(s32, s64);
extern s32 func_002AC4B0(s64, s32);
extern char *func_003FDF48(s32, s64, s32, s32, s32 *, void *, u32 *);

char *func_003FCC50(s32 arg0, s64 arg1, s32 arg2, s32 arg3, char *arg4, s32 *arg5, s32 arg6, s32 *arg7) {
    struct { u32 x; u32 sp4; } sp;
    s32 var_19;
    s32 var_20 = arg2;
    s64 var_18 = arg1;
    s64 vv;
    char *temp_19;
    char *var_16;
    u32 var_3, var_4;

    if (arg6 == 0x66) {
        var_19 = 3;
    } else if ((arg6 == 0x65) || ((var_19 = 2), (arg6 == 0x45))) {
        var_20 += 1;
        var_19 = 2;
    }

    vv = var_18;
    if ((s32)(vv >> 32) < 0) {
        var_18 = func_002ABF20(0, var_18);
        *arg4 = '-';
    } else {
        *arg4 = 0;
    }

    temp_19 = func_003FDF48(arg0, var_18, var_19, var_20, arg5, &sp, &sp.sp4);

    if ((arg6 != 0x67) || (arg3 & 1)) {
        var_16 = &temp_19[var_20];
        if (arg6 == 0x66) {
            if ((*temp_19 == '0') && (func_002AC4B0(var_18, 0) != 0)) *arg5 = -var_20 + 1;
            var_16 = &var_16[*arg5];
        }
        if (func_002AC4B0(var_18, 0) == 0) sp.sp4 = (u32)var_16;
        var_3 = sp.sp4;
        var_4 = var_3;
        if (var_3 < (u32)var_16) {
            do {
                var_4 = var_3 + 1;
                *(char *)var_3 = '0';
                var_3 = var_4;
                sp.sp4 = var_3;
            } while (var_3 < (u32)var_16);
        }
    } else {
        var_3 = sp.sp4;
    }
    *arg7 = var_3 - (u32)temp_19;
    return temp_19;
}
