extern s32 func_001C6780(s32, s32);
extern s32 *func_001C67A0(s32, s32, s32);

s32 func_003F0098(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_17;

    temp_2 = *(s32 *)arg0;
    temp_lo = arg1 / temp_2;
    temp_lo_2 = arg2 / temp_2;
    temp_17 = func_001C6780(arg1 - temp_2 * temp_lo, arg2 - temp_2 * temp_lo_2);
    return *func_001C67A0(*(s32 *)((char *)arg0 + 8), temp_lo, temp_lo_2) + temp_17;
}
