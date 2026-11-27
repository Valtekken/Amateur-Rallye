extern f32 func_003F2BD0(s32, s32, f32, f32, f32, f32);
extern f32 func_003F3038(s32, s32, f32, f32, f32, f32);
extern f32 D_0048B7A4;

f32 func_003F4A70(f32 fparg0, f32 fparg1) {
    s32 i0 = *(s32 *)&fparg0;
    s32 i1 = *(s32 *)&fparg1;
    s32 temp_4 = i0 & 0x7FFFFFFF;
    s32 temp_5 = i1 & 0x7FFFFFFF;
    s32 temp_16 = ((u32)i0 >> 0x1F) | ((i1 >> 0x1E) & 2);
    f32 var_f0 = fparg0;
    f32 var_3;
    s32 temp_2;

    if (temp_5 > 0x7F800000 || temp_4 > 0x7F800000) {
        return var_f0 + fparg1;
    }
    if (i1 == 0x3F800000) {
        return func_003F2BD0(temp_4, temp_5, fparg0, fparg1, fparg1, var_f0);
    }
    if (temp_4 == 0) {
        if (temp_16 == 2) return 3.1415925f;
        if (temp_16 == 3) return -3.1415925f;
        return var_f0;
    }
    if (temp_5 == 0) {
        return (i0 < 0) ? -1.5707964f : 1.5707964f;
    }
    if (temp_5 == 0x7F800000) {
        if (temp_4 == temp_5) {
            switch (temp_16) {
            case 0: return 0.7853982f;
            case 1: return -0.7853982f;
            case 2: return 2.3561945f;
            case 3: return -2.3561945f;
            }
        } else {
            switch (temp_16) {
            case 0: return 0.0f;
            case 1: return D_0048B7A4;
            case 2: return 3.1415925f;
            case 3: return -3.1415925f;
            }
        }
    }
    if (temp_4 == 0x7F800000) {
        return (i0 < 0) ? -1.5707964f : 1.5707964f;
    }
    temp_2 = (s32)(temp_4 - temp_5) >> 0x17;
    if (temp_2 >= 0x3D) {
        var_3 = 1.5707965f;
    } else if (i1 < 0 || temp_2 >= -0x3C) {
        var_3 = func_003F2BD0(0, 0, fparg0, fparg1, fparg1, var_f0 / fparg1);
    } else {
        var_3 = 0.0f;
    }
    switch (temp_16) {
    case 1: *(s32 *)&var_3 = *(s32 *)&var_3 ^ 0x80000000; /* fallthrough */
    case 0: return var_3;
    case 2: return 3.1415925f - (var_3 - 0.00000015099579f);
    default: return (var_3 - 0.00000015099579f) - 3.1415925f;
    }
}
