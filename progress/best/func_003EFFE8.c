extern s32 func_001C6780(s32, s32);
extern s32 *func_001C67A0(s32, s32, s32);
extern s32 *func_001C67D0(s32, s32, s32);

typedef struct { s32 f0; s32 f4; s32 f8; } S;

void func_003EFFE8(S *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 temp_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_19;

    temp_2 = arg0->f0;
    temp_lo = arg1 / temp_2;
    temp_lo_2 = arg2 / temp_2;
    temp_19 = func_001C6780(arg1 - temp_2 * temp_lo, arg2 - temp_2 * temp_lo_2);
    if (*func_001C67A0(arg0->f8, temp_lo, temp_lo_2) != 0) {
        s32 *p = func_001C67D0(arg0->f8, temp_lo, temp_lo_2);
        *((u8 *)p + temp_19) = *arg3;
    }
}
