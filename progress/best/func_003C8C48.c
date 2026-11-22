s32 func_003C8C48(s16 arg0, s16 arg1, s16 arg2) {
    s32 a0 = arg0;
    s32 a1 = arg1;
    s32 a2 = arg2;
    s32 t3 = a1 + 0x3F;
    s64 *ptr = func_003C7880(a2 << 16);
    s32 v16;
    s32 v6;
    s32 t2;
    s32 t3_2;
    s32 product;
    s64 loaded;
    s32 result;

    if (t3 >= 0) {
        v16 = t3;
    } else {
        v16 = a1 + 0x7E;
    }
    v16 = v16 >> 6;

    if (a0 & 2) {
        t2 = a2 + 0x3F;
        t3_2 = a2 + 0x7E;
        if (t2 >= 0) {
            v6 = t2;
        } else {
            v6 = t3_2;
        }
        v6 = v6 >> 6;
    } else {
        t2 = a2 + 0x1F;
        t3_2 = a2 + 0x3E;
        if (t2 >= 0) {
            v6 = t2;
        } else {
            v6 = t3_2;
        }
        v6 = v6 >> 5;
    }

    product = v16 * v6;
    loaded = *ptr;

    if (loaded == 1) {
        result = (s16)product;
    } else {
        result = (s32)(loaded >> 15);
    }
    return result;
}
