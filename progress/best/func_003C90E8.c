extern s64 func_003C8C48(s16, s16, s16, s32, s32, s32);

s32 func_003C90E8(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s32 temp_7 = arg3 << 0x10;
    s32 temp_8 = arg4 << 0x10;
    s32 temp_9 = arg5 << 0x10;
    s64 var_2, var_2_2, var_2_3;

    *(s64 *)((u8 *)arg0 + 8) = 0x4D;
    *(s64 *)((u8 *)arg0 + 0) = (s64)((((((s32)(arg2 << 0x10) >> 0x16) & 0x3F) << 0x10) | ((arg1 & 0xF) << 0x18)));
    *(s64 *)((u8 *)arg0 + 0x18) = 0x4F;
    if (arg4 == 0) {
        var_2 = (s64)(((s64)(func_003C8C48(arg1, arg2, arg3, temp_7, temp_8, temp_9) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18) | (0x8000 << 0x11));
    } else {
        var_2 = (s64)(((s64)(func_003C8C48(arg1, arg2, arg3, temp_7, temp_8, temp_9) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18));
    }
    *(s64 *)((u8 *)arg0 + 0x10) = var_2;
    *(s64 *)((u8 *)arg0 + 0x28) = 0x19;
    *(s64 *)((u8 *)arg0 + 0x20) = (s64)(((0x800 - ((s64)((s64)(arg2 >> 1) << 0x30) >> 0x30)) * 0x10) | ((0x800 - ((s64)((s64)(arg3 >> 1) << 0x30) >> 0x30)) << 0x24));
    *(s64 *)((u8 *)arg0 + 0x38) = 0x41;
    *(s64 *)((u8 *)arg0 + 0x30) = (s64)(((arg2 - 1) << 0x10) | ((arg3 - 1) << 0x30));
    *(s64 *)((u8 *)arg0 + 0x48) = 0x1A;
    *(s64 *)((u8 *)arg0 + 0x40) = (s64)(*(s64 *)((u8 *)arg0 + 0x40) | 1);
    *(s64 *)((u8 *)arg0 + 0x58) = 0x46;
    *(s64 *)((u8 *)arg0 + 0x50) = (s64)(*(s64 *)((u8 *)arg0 + 0x50) | 1);
    *(s64 *)((u8 *)arg0 + 0x68) = 0x45;
    if (arg1 & 2) {
        var_2_2 = *(s64 *)((u8 *)arg0 + 0x60) | 1;
    } else {
        var_2_2 = *(s64 *)((u8 *)arg0 + 0x60) & ~1;
    }
    *(s64 *)((u8 *)arg0 + 0x60) = var_2_2;
    *(s64 *)((u8 *)arg0 + 0x78) = 0x48;
    if (arg4 != 0) {
        var_2_3 = ((arg4 & 3) << 0x11) | 0x10000;
    } else {
        var_2_3 = 0x30000;
    }
    *(s64 *)((u8 *)arg0 + 0x70) = var_2_3;
    return 8;
}
