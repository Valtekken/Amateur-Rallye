extern void func_003F94D0(void *, s32, s32);
extern void func_003F9698(const char *, s32, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);

extern s32 D_00436154;
extern const char D_00488B80[];
extern const char D_00488BB0[];
extern u32 D_0049B980[];
extern u32 D_0049B9D0[];
extern u32 D_0049BAC0[];
extern u32 D_0049BBC0[];

s32 func_003CA110(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_3;
    u8 *var_16;
    s32 var_17;
    u32 *temp_6;
    u32 *temp_2;
    
    if (arg2 & 0x3F) {
        if (D_00436154 != 0) {
            func_003F9698(D_00488B80, arg2, 0);
            return 0;
        }
        return 0;
    }
    
    temp_3 = arg1 * 0x1C + arg0 * 0x70;
    if (D_0049B9D0[temp_3/4 + 4] == 1) {
        if (D_00436154 != 0) {
            func_003F9698(D_00488BB0, arg0, arg1);
            return 0;
        }
        return 0;
    }
    
    var_17 = 1;
    var_16 = (u8 *)arg2;
    do {
        *(s32 *)(var_16 + 0x58) = 0;
        var_16[0x70] = 5;
        var_16[0x71] = 2;
        var_16[0x67] = 0;
        var_17 -= 1;
        func_003F94D0(var_16, 0xFF, 0x20);
        *(s32 *)(var_16 + 0x60) = 0;
        var_16 += 0x80;
    } while (var_17 >= 0);
    
    D_0049BBC0[0] = 1;
    D_0049BBC0[1] = arg0;
    D_0049BBC0[2] = arg1;
    D_0049BBC0[4] = arg2;
    
    if (func_00405E90(&D_0049B980, 1, 0, &D_0049BBC0, 0x80, &D_0049BBC0, 0x80, 0, 0) < 0) {
        return 0;
    }
    
    temp_3 = arg1 * 0x1C + arg0 * 0x70;
    temp_6 = (u32 *)((u8 *)&D_0049BAC0 + (arg0 << 7) + (arg1 << 5));
    temp_2 = &D_0049B9D0[temp_3/4];
    
    temp_2[4] = 1;
    *temp_6 = 0;
    temp_2[3] = 0;
    temp_2[2] = D_0049BBC0[5];
    temp_2[1] = arg2;
    return D_0049BBC0[3];
}
