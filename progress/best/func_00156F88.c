extern u32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_003F93CC(void *, void *, s32);

void *func_00156F88(void *arg0, s32 arg1, void *arg2) {
    void *var_17;
    s32 var_16;
    s32 var_20 = arg1;
    void *var_18 = arg0;
    s32 temp_2, temp_2_3, temp_16;
    if (var_20 != 0) {
        do {
            if (var_18 != NULL) {
                *(s32 **)(var_18) = NULL;
                *(s32 **)(var_18 + 4) = NULL;
                temp_2 = ((s32)*(s32 **)(arg2 + 4) - (s32)*(s32 **)(arg2)) >> 2;
                *(s32 **)(var_18 + 8) = NULL;
                if (temp_2 != 0) {
                    var_16 = temp_2 * 4;
                    if (var_16 != 0) {
                        var_17 = func_002B1FC0(var_16);
                        if (var_17 == NULL)
                            var_17 = func_003D2910(var_16);
                    } else if (D_0040E618[-1] != NULL) {
                        var_17 = (void *)D_0040E618[-1];
                        D_0040E618[-1] = *(u32 *)var_17;
                    } else {
                        var_17 = func_00152D28(0);
                    }
                } else {
                    var_17 = NULL;
                    var_16 = 0;
                }
                *(s32 **)(var_18) = var_17;
                *(void **)(var_18 + 8) = (void *)(var_17 + var_16);
                *(s32 **)(var_18 + 4) = var_17;
                temp_2_3 = *(s32 **)(arg2);
                temp_16 = (s32)*(s32 **)(arg2 + 4) - (s32)*(s32 **)(arg2);
                func_003F93CC(var_17, temp_2_3, (temp_16 >> 2) * 4);
                *(s32 **)(var_18 + 4) = (void *)(var_17 + temp_16);
            }
            var_20--;
            var_18 += 0xC;
        } while (var_20 != 0);
    }
    return var_18;
}
