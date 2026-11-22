s32 func_003C8EF8(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s32 arg6, s32 arg7, u8 arg_sp0, u8 arg_sp8, u32 arg_sp10) {
    s64 *obj = (s64 *)arg0;
    u32 v0 = arg6 & 0xFF;
    u32 v1 = arg7 & 0xFF;
    s64 val_20 = (s64)v0 | ((s64)v1 << 8) | ((s64)arg_sp0 << 16) | ((s64)arg_sp8 << 24) | ((s64)0xFE00 << 46);
    s64 val_30 = ((s64)arg3 * 16) << 32 | ((s64)arg2 * 16 | arg_sp10);
    s64 val_40 = ((s64)(arg3 + arg5) * 16) << 32 | ((s64)(arg2 + arg4) * 16 | arg_sp10);
    
    obj[0] = 0x30000;
    obj[1] = 0x47;
    obj[2] = 6;
    obj[3] = 0;
    obj[4] = val_20;
    obj[5] = 1;
    obj[6] = val_30;
    obj[7] = 5;
    obj[8] = val_40;
    obj[9] = 5;
    obj[10] = 0x47;
    obj[11] = 0x47;
    
    if (arg1 != 0) {
        obj[7] = 5;  // 0x38
        obj[10] = ((s64)(arg1 & 3) << 17) | 0x10000;  // 0x50
    } else {
        obj[10] = 0x30000;  // 0x50
    }
    
    return 6;
}
