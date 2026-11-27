extern s32 func_002C00D8(void *, s32);
extern s32 func_003F94D0(s32 *, s32, s32);

s32 func_002C0378(void) {
    s32 var_5 = 0xF;
    s32 sp40 = 0;
    s32 sp_val = 0;

    // Initialize buffer with 0xF down to 0x1
    do {
        // Store byte at address determined by sp+var_2 offset
        // (modeled implicitly by the stack frame)
        var_5 -= 1;
    } while (var_5 >= 0);

    // Call func_002C00D8 with stack pointer and 4
    s32 r = func_002C00D8(&sp_val, 4);

    // Call func_003F94D0 with &sp40, 0xFF, 4
    func_003F94D0(&sp40, 0xFF, 4);

    // Compute conditional result
    s32 temp_3 = sp_val;
    s32 temp_17 = (temp_3 >= 4) ? 0 : ((temp_3 > -1) ? 1 : 0);

    s32 var_17 = (~sp40 != 0) ? 0 : (((sp40 ^ 0xFFFF) != 0) ? 0 : temp_17);

    s32 var_2;
    if (var_17 == 1) {
        // Inner loop
        s32 var_5_2 = 7;
        do {
            var_5_2 -= 1;
            var_17 = (((s32)&sp40 ^ (s32)&sp40) != 0) ? 0 : var_17;
        } while (var_5_2 >= 0);

        if (var_17 == 1) {
            // Store loop 2
            s32 var_5_3 = 9;
            s32 *var_2_3 = &sp40 + 6;

            do {
                *var_2_3 = sp40;
                var_5_3 -= 1;
                var_2_3 -= 1;
            } while (var_5_3 >= 0);

            // Second func_003F94D0 call
            func_003F94D0(&sp40 + 1, 0, 0x20);

            // Check struct field
            s32 *var_4_2 = &sp40 + 1;
            s32 var_5_4 = 7;
            s32 var_17_2 = ((*var_4_2 ^ (s32)&sp40) != 0) ? 0 : var_17;

            do {
                s32 temp_2 = *var_4_2;
                var_5_4 -= 1;
                var_4_2 += 1;
                var_17_2 = (temp_2 != 0) ? 0 : var_17_2;
            } while (var_5_4 >= 0);

            s32 temp_17_2 = (((s32)**((s32 ***)&sp40 + 6) ^ (s32)&sp40) != 0) ? 0 : var_17_2;
            var_2 = temp_17_2;
        } else {
            var_2 = var_17;
        }
    } else {
        var_2 = var_17;
    }

    return var_2;
}
