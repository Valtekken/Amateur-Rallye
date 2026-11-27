extern void func_001537E8(void **, s32, s32);
extern void func_00154E78(void **, s32, s32, s32, s32);
extern void func_001550F8(void **, s32, s32);

s32 func_00299D90(void **arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 arg6) {
    s32 *sp0;
    s32 temp_18, temp_18_2, temp_5, var_20, var_21, var_22, var_30;
    s8 temp_4;
    char *temp_2, *temp_5_2;

    var_30 = arg6;
    sp0 = arg4;
    if ((*(s32 **)arg1)[-4] != 0) {
        *arg2 = 0;
        var_20 = 0;
        *arg5 = 0;
        var_21 = 1;
        *arg3 = 0;
        var_22 = 0;
        *sp0 = 0;
        do {
            temp_2 = *(char **)arg1;
            temp_18 = *arg2;
            temp_5 = ((s32 *)temp_2)[-4];
            if (temp_18 == temp_5) {
                var_21 = 3;
                var_20 = 1;
            } else {
                if ((u32)((s32 *)temp_2)[-2] >= 2U) func_001537E8(arg1, temp_5, 1);
                ((s32 *)*(char **)arg1)[-1] = 1;
                temp_5_2 = *(char **)arg1;
                temp_4 = *(s8 *)(temp_5_2 + temp_18);
                if (temp_4 == 0x20) {
                    if (var_22 != 0) { var_21 = 1; var_20 = 1; }
                    else if (var_30 != 0) {
                        *arg3 += 1;
                        func_00154E78(arg1, 0, 1, 0, 0);
                    }
                } else if (temp_4 == 0x5C) {
                    temp_18_2 = *arg2 + 1;
                    if ((u32)((s32 *)temp_5_2)[-2] >= 2U) func_001537E8(arg1, ((s32 *)temp_5_2)[-4], 1);
                    ((s32 *)*(char **)arg1)[-1] = 1;
                    if (*(s8 *)(temp_5_2 + temp_18_2) != 0x6E) {
                        var_22 = 1;
                        *arg2 += 1;
                    } else {
                        var_21 = 1;
                        if (var_22 == 0) {
                            var_21 = 2;
                            func_001550F8(arg1, 0, 0);
                            var_20 = 1;
                            *sp0 = 2;
                        } else var_20 = 1;
                    }
                } else {
                    var_22 = 1;
                    var_30 = 0;
                    *arg2 += 1;
                }
                {
                    s32 v = *arg2;
                    *arg2 = v + 1;
                }
            }
        } while (var_20 == 0);
        func_001550F8(arg1, *arg2, 0);
        return var_21;
    }
    return 0;
}
