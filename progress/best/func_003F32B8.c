/* func_003F32B8: based on m2c draft */ 
s32 D_0048BD04;
s64 D_0048B698;

s64 func_003F32B8(s64 arg0) {
    s64 sp18;
    s32 sp20;
    s32 temp_18;
    s64 temp_2;
    s64 var_2;

    temp_2 = func_003F3F98();
    temp_18 = D_0048BD04;
    var_2 = temp_2;
    if (temp_18 != -1) {
        var_2 = temp_2;
        if (func_003F6EC0(arg0) == 0) {
            var_2 = temp_2;
            if (func_002AC4B0(arg0, 0) < 0) {
                sp20 = 0;
                if (temp_18 == 0) {
                    sp18 = 0;
                } else {
                    sp18 = D_0048B698;
                }
                if ((D_0048BD04 == 2) || (func_003F6EF8(0) == 0)) {
                    /* *func_003F73E0() = 0x21; */;
                }
                if (sp20 != 0) {
                    /* *func_003F73E0() = sp20; */;
                }
                var_2 = sp18;
            }
        }
    }
    return var_2;
}
