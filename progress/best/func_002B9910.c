extern void func_002BA300(s32, s32, s32, s8);
extern s32 func_0040CF38(s64, u64);
extern s64 func_0040D508(s64, u64);
extern const u8 D_0047FDF8[];
extern const u8 D_0047FE10[];

typedef struct {
    char buf[0x20];
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
} F9910;

void func_002B9910(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s64 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_23;
    s64 var_17;
    s32 var_18;
    u64 temp_19;
    s32 upper;
    F9910 f;
    s32 temp_16_2;
    s32 temp_17;
    s32 var_16;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_17_2;
    s32 var_18_2;
    s32 var_2;
    s64 temp_2;
    u8 *temp_16;
    s8 *var_17_3;

    temp_23 = 0;
    if (arg6 > -1) temp_23 = arg6;
    var_17 = arg3;
    var_18 = 0;
    f.sp20 = arg5;
    f.sp24 = 0;
    if (!(arg7 & 0x40)) {
        if (var_17 < 0) {
            var_2 = 0x2D;
            var_17 = -var_17;
            goto block_6;
        }
        if (arg7 & 0x2) {
            f.sp24 = 0x2B;
            goto block_7;
        }
        var_2 = (arg7 * 8) & 0x20;
block_6:
        f.sp24 = var_2;
    }
block_7:
    upper = (arg7 & 0x20) != 0;
    f.sp28 = arg7 & 0x1;
    temp_19 = (u64)(arg4 << 0x20) >> 0x20;
    f.sp2C = arg7 & 0x10;
    f.sp30 = f.sp24 != 0;

loop_8:
    temp_16 = (u8 *)&f.buf[var_18];
    var_18 += 1;
    temp_2 = (s64)(func_0040D508(var_17, temp_19) << 0x20) >> 0x20;
    *temp_16 = upper ? D_0047FDF8[temp_2] : D_0047FE10[temp_2];
    var_17 = func_0040CF38(var_17, temp_19);
    if (var_17 != 0) {
        if (var_18 < 0x14) goto loop_8;
    }
    var_18_2 = ((var_18 ^ 0x14) == 0) ? (var_18 - 1) : var_18;
    temp_17 = temp_23 - var_18_2;
    f.buf[var_18_2] = 0;
    temp_16_2 = (f.sp20 - ((temp_23 >= var_18_2) ? temp_23 : var_18_2)) - f.sp30;
    var_17_2 = (temp_17 <= -1) ? 0 : temp_17;
    var_16 = (temp_16_2 <= -1) ? 0 : temp_16_2;
    if (f.sp2C != 0) {
        var_17_2 = (var_17_2 < var_16) ? var_16 : var_17_2;
        var_16 = 0;
    }
    var_16_2 = (f.sp28 != 0) ? -var_16 : var_16;
    if (var_16_2 > 0) {
        do {
            func_002BA300(arg0, arg1, arg2, 0x20);
            var_16_2 -= 1;
        } while (var_16_2 > 0);
    }
    if (f.sp24 != 0) {
        func_002BA300(arg0, arg1, arg2, (s8)f.sp24);
    }
    if (var_17_2 > 0) {
        do {
            func_002BA300(arg0, arg1, arg2, 0x30);
            var_17_2 -= 1;
        } while (var_17_2 > 0);
    }
    if (var_18_2 > 0) {
        var_17_3 = (s8 *)&f.buf[var_18_2 - 1];
loop_22:
        var_18_2 -= 1;
        func_002BA300(arg0, arg1, arg2, *var_17_3);
        if (var_18_2 > 0) {
            var_17_3 -= 1;
            goto loop_22;
        }
    }
    if (var_16_2 < 0) {
        var_16_3 = -var_16_2;
        do {
            func_002BA300(arg0, arg1, arg2, 0x20);
            var_16_3 -= 1;
        } while (var_16_3 != 0);
    }
}
