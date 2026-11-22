typedef struct {
    u32 field_0;
    u32 field_4;
    u64 field_8;
    u64 field_10;
} VecStruct;

extern VecStruct D_00494C80;

VecStruct *func_002ABC88(VecStruct *arg0, VecStruct *arg1, VecStruct *arg2) {
    u32 a0_f0 = arg0->field_0;
    if (a0_f0 < 2) {
        return arg0;
    }
    u32 a1_f0 = arg1->field_0;
    if (a1_f0 < 2) {
        return arg1;
    }
    if ((a0_f0 ^ 4) == 0) {
        if ((a1_f0 ^ 4) == 0) {
            if (arg0->field_4 == arg1->field_4) {
                return arg0;
            }
            return &D_00494C80;
        }
        return arg1;
    }
    if ((a1_f0 ^ 4) == 0) {
        return arg0;
    }
    if ((a0_f0 ^ 2) == 0) {
        if ((a1_f0 ^ 2) == 0) {
            arg2->field_0 = arg0->field_0;
            arg2->field_8 = arg0->field_8;
            arg2->field_10 = arg0->field_10;
            arg2->field_4 = arg0->field_4 & arg1->field_4;
            return arg2;
        }
        return arg0;
    }
    if ((a1_f0 ^ 2) == 0) {
        return arg1;
    }

    u32 a0_f8_low = (u32)arg0->field_8;
    u32 a1_f8_low = (u32)arg1->field_8;
    u64 a0_f10 = arg0->field_10;
    u64 a1_f10 = arg1->field_10;
    s32 diff = a0_f8_low - a1_f8_low;
    u32 abs_diff = diff < 0 ? -diff : diff;
    if (abs_diff < 0x40) {
        if (a1_f8_low < a0_f8_low) {
            u32 a0_f4 = arg0->field_4;
            u32 a1_f4 = arg1->field_4;
            do {
                a1_f8_low++;
                a1_f10 = (a1_f10 & 1) | (a1_f10 >> 1);
            } while (a1_f8_low < a0_f8_low);
        }
        if (a0_f8_low < a1_f8_low) {
            u32 a1_f4 = arg1->field_4;
            u32 count = a1_f8_low - a0_f8_low;
            do {
                a0_f10 = (a0_f10 & 1) | (a0_f10 >> 1);
                count--;
            } while (count != 0);
            a0_f8_low = a1_f8_low;
        }
    } else if (a1_f8_low < a0_f8_low) {
        u32 a0_f4 = arg0->field_4;
        a1_f10 = 0;
    } else {
        a0_f8_low = a1_f8_low;
        u32 a1_f4 = arg1->field_4;
        a0_f10 = 0;
    }

    if (arg0->field_4 == arg1->field_4) {
        arg2->field_4 = arg0->field_4;
        arg2->field_8 = a0_f8_low;
        arg2->field_10 = a0_f10 + a1_f10;
    } else {
        u64 sum = a0_f10 + a1_f10;
        s64 diff2;
        if (arg0->field_4 != 0) {
            diff2 = a0_f10 - a1_f10;
        } else {
            diff2 = a1_f10 - a0_f10;
        }
        if (diff2 < 0) {
            arg2->field_8 = a0_f8_low;
            arg2->field_10 = -diff2;
            arg2->field_4 = 0;
        } else {
            arg2->field_8 = a0_f8_low;
            arg2->field_10 = diff2;
            arg2->field_4 = 1;
        }
        u64 val = arg2->field_10;
        if ((u64)(-1ULL >> 3) < val) {
            arg2->field_10 = (val & 1) | (val >> 1);
            arg2->field_8 = (u32)arg2->field_8 + 1;
        }
    }

    arg2->field_0 = 3;
    if ((u64)(-1ULL >> 3) < arg2->field_10) {
        arg2->field_10 = (arg2->field_10 & 1) | (arg2->field_10 >> 1);
        arg2->field_8 = (u32)arg2->field_8 + 1;
    }
    return arg2;
}
