extern s32 func_003F74F8(void *);
extern void func_003F7820(void *);
extern void func_003F79D0(void *, s32);
extern void *D_004404DC;

s32 func_003F73F0(void *arg0) {
    s32 (*temp_2)(s32);
    s32 var_17;
    void *var_3;
    s32 var_2;

    if (arg0 == NULL) {
        return 0;
    }
    var_3 = *(void **)((char *)arg0 + 0x54);
    if (var_3 != NULL) {
        var_2 = *(s32 *)((char *)var_3 + 0x38);
    } else {
        var_3 = D_004404DC;
        *(void **)((char *)arg0 + 0x54) = var_3;
        var_2 = *(s32 *)((char *)var_3 + 0x38);
    }
    if (var_2 == 0) {
        func_003F7820(var_3);
    }
    if (*(s16 *)((char *)arg0 + 0xC) == 0) {
        return 0;
    }
    var_17 = 0;
    if (*(u16 *)((char *)arg0 + 0xC) & 8) {
        var_17 = func_003F74F8(arg0);
    }
    temp_2 = *(s32 (**)(s32))((char *)arg0 + 0x2C);
    if (temp_2 != NULL) {
        if (temp_2(*(s32 *)((char *)arg0 + 0x1C)) <= -1) {
            var_17 = -1;
        }
    }
    if (*(u16 *)((char *)arg0 + 0xC) & 0x80) {
        func_003F79D0(*(void **)((char *)arg0 + 0x54), *(s32 *)((char *)arg0 + 0x10));
    }
    {
        s32 temp_5 = *(s32 *)((char *)arg0 + 0x30);
        if (temp_5 != 0) {
            if (temp_5 != (s32)arg0 + 0x40) {
                func_003F79D0(*(void **)((char *)arg0 + 0x54), temp_5);
            }
            *(s32 *)((char *)arg0 + 0x30) = 0;
        }
    }
    {
        s32 temp_5_2 = *(s32 *)((char *)arg0 + 0x44);
        if (temp_5_2 != 0) {
            func_003F79D0(*(void **)((char *)arg0 + 0x54), temp_5_2);
            *(s32 *)((char *)arg0 + 0x44) = 0;
        }
    }
    *(s16 *)((char *)arg0 + 0xC) = 0;
    return var_17;
}
