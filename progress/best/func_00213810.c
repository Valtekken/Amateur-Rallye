extern u32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_003F931C(void *, void *, s32);

void *func_00213810(s32 *arg0) {
    void *var_16_2;
    u32 var_17;
    u32 temp_4;
    s32 var_16;

    var_17 = 0x10;
    temp_4 = (u32)*arg0 + 1;
    var_16 = 0x20;
    if (temp_4 > var_17) {
        var_17 = var_17 * 2;
        while (var_17 < temp_4) {
            var_17 *= 2;
        }
        var_16 = var_17 + 0x10;
    }
    if (var_16 != 0) {
        var_16_2 = func_002B1FC0(var_16);
        if (var_16_2 == NULL) {
            var_16_2 = func_003D2910(var_16);
        }
    } else if (D_0040E618[-1] != 0) {
        var_16_2 = (void *)D_0040E618[-1];
        D_0040E618[-1] = *(u32 *)D_0040E618[-1];
    } else {
        var_16_2 = func_00152D28(0);
    }
    *(s32 *)((char *)var_16_2 + 4) = var_17;
    *(s32 *)((char *)var_16_2 + 8) = 1;
    *(s32 *)((char *)var_16_2 + 0xC) = 0;
    if (*arg0 != 0) {
        func_003F931C((char *)var_16_2 + 0x10, (char *)arg0 + 0x10, *arg0);
    }
    *(s32 *)var_16_2 = *arg0;
    return (char *)var_16_2 + 0x10;
}
