s64 func_002ABEC8(s64, s64); s64 func_002ABF20(s64, s64); s64 func_002ABF88(s64, s64); s32 func_002AC4B0(s64, s64); s32 func_002AC5B8(s64); s64 func_002B9B90(s64); s64 func_002B9BE0(s32); s32 func_002B9C30(s64); void func_002B9C90(s64, s64 *); void func_002BA300(s32, s32, s32, s32); s64 func_0040C758(s32); extern char D_0047FE10[];
void func_002B9E38(register s32 arg0, register s32 arg1, register s32 arg2, s64 arg3, s32 arg4, s32 arg5, s32 arg6) {
struct {s8 sp[320];s8 sp140[320];s64 sp280,sp288;s32 sp290,sp294,sp298,sp29C,sp2A0,sp2A4;} frame;
    s32 temp_16_2, temp_16_3, temp_18, var_16, var_16_2, var_18;
    register s32 var_22, var_23; s32 var_22_2, var_2, var_3;
    s64 temp_16, temp_17, temp_2, temp_2_2; s8 *var_17, *var_17_2; register s32 var_30; u8 *temp_4, *temp_4_2;
    var_22 = 0; frame.sp294 = (arg5 >= 0) ? arg5 : 6; var_23 = 0; frame.sp290 = arg4;
    temp_17 = func_002B9B90(arg3);
    if (func_002AC4B0(arg3, 0) >= 0) { var_30 = 0x2B; if (!(arg6 & 2)) { var_30 = (arg6 * 8) & 0x20; } } else { var_30 = 0x2D; }
    frame.sp294 = (frame.sp294 >= 0x11) ? 0x10 : frame.sp294;
    func_002B9C90(temp_17, &frame.sp280);
    temp_16 = func_002B9BE0(frame.sp294);
    frame.sp288 = func_0040C758(func_002B9C30(func_002ABF88(temp_16, func_002ABF20(temp_17, frame.sp280))));
    if (func_002AC4B0(frame.sp288, func_002B9BE0(frame.sp294)) >= 0) { frame.sp280 = func_002ABEC8(frame.sp280, (s64)0xFFC0 << 0x2E); frame.sp288 = func_002ABF20(frame.sp288, func_002B9BE0(frame.sp294)); }
    frame.sp29C = arg6 & 0x10; frame.sp2A4 = (s32)(u32)frame.sp140; frame.sp2A0 = var_30 != 0; frame.sp298 = arg6 & 1;
loop_8:
    temp_2 = func_002ABF88(frame.sp280, (s64)0x3FB99999A0000000LL);
    func_002B9C90(temp_2, &frame.sp280);
    temp_4 = frame.sp + var_22; var_22 += 1;
    *temp_4 = *(func_002AC5B8(func_002ABF88(func_002ABEC8(func_002ABF20(temp_2, frame.sp280), (s64)0x3FA99999A0000000LL), (s64)0x4024000000000000LL)) + D_0047FE10);
    if (func_002AC4B0(frame.sp280, 0) == 0) { var_2 = var_22 - 1; } else { var_2 = var_22 - 1; if (var_22 < 0x137) { goto loop_8; } }
    var_22_2 = ((var_22 ^ 0x137) == 0) ? var_2 : var_22; *(frame.sp + var_22_2) = 0;
    if (func_002AC4B0(frame.sp288, 0) != 0) {
loop_14:
        temp_2_2 = func_002ABF88(frame.sp288, (s64)0x3FB99999A0000000LL);
        func_002B9C90(temp_2_2, &frame.sp288);
        temp_4_2 = (u8*)(u32)(frame.sp2A4 + var_23); var_23 += 1;
        *temp_4_2 = *(func_002AC5B8(func_002ABF88(func_002ABEC8(func_002ABF20(temp_2_2, frame.sp288), (s64)0x3FA99999A0000000LL), (s64)0x4024000000000000LL)) + D_0047FE10);
        if (func_002AC4B0(frame.sp288, 0) == 0) { var_3 = var_23 - 1; } else { var_3 = var_23 - 1; if (var_23 < 0x137) { goto loop_14; } }
        var_23 = ((var_23 ^ 0x137) == 0) ? var_3 : var_23;
    }
    temp_18 = frame.sp294 - var_23; *(u8*)(u32)(frame.sp2A4 + var_23) = 0;
    temp_16_2 = (((frame.sp290 - var_22_2) - frame.sp294) - 1) - frame.sp2A0;
    var_18 = (temp_18 <= -1) ? 0 : temp_18; temp_16_3 = (temp_16_2 <= -1) ? 0 : temp_16_2;
    var_16 = (frame.sp298 != 0) ? -temp_16_3 : temp_16_3;
    if (frame.sp29C != 0) {
        if (var_16 > 0) {
            if (var_30 != 0) { func_002BA300(arg0, arg1, arg2, var_30); var_16 -= 1; var_30 = 0; if (var_16 > 0) { goto block_22; } }
            else {
block_22:
                do { func_002BA300(arg0, arg1, arg2, 0x30); var_16 -= 1; } while (var_16 > 0); goto block_24;
            }
        }
    } else {
block_24:
        if (var_16 > 0) { do { func_002BA300(arg0, arg1, arg2, 0x20); var_16 -= 1; } while (var_16 > 0); }
    }
    if (var_30 != 0) { func_002BA300(arg0, arg1, arg2, var_30); }
    if (var_22_2 > 0) { var_17 = (var_22_2 + frame.sp) - 1;
loop_30:
        var_22_2 -= 1; func_002BA300(arg0, arg1, arg2, *var_17);
        if (var_22_2 > 0) { var_17 -= 1; goto loop_30; }
    }
    if (frame.sp294 > 0) {
        func_002BA300(arg0, arg1, arg2, 0x2E);
        if (var_18 > 0) { do { func_002BA300(arg0, arg1, arg2, 0x30); var_18 -= 1; } while (var_18 > 0); }
        if (var_23 > 0) { var_17_2 = (s8*)(u32)(frame.sp2A4 + var_23) - 1;
loop_40:
            var_23 -= 1; func_002BA300(arg0, arg1, arg2, *var_17_2);
            if (var_23 > 0) { var_17_2 -= 1; goto loop_40; }
        }
    }
    if (var_16 < 0) { var_16_2 = -var_16; do { func_002BA300(arg0, arg1, arg2, 0x20); var_16_2 -= 1; } while (var_16_2 != 0); }
}
