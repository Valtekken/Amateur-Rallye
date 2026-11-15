extern s32 func_003AF288(s32);
extern s32 func_003AEFD0(s32);
extern s32 func_003A80D0(s32);
extern s32 func_003A8118(s32);
extern void func_003AEF40(s32, s32, s32);
extern s32 func_003AF070(s32);
extern void func_0033F628(void *, s32, s32);

s32 func_003A86B8(register s32 arg0, register s32 arg1) {
    return func_003AF288(arg0) + (arg1 << 3);
}

s32 func_003A8720(register s32 arg0, register s32 arg1) {
    return func_003AEFD0(arg0) + (arg1 * 0x30);
}

void func_003A8788(register f32 *arg0, register f32 *arg1) {
    arg0[0] += arg1[0];
    arg0[1] += arg1[1];
    arg0[2] += arg1[2];
}

void func_003A87E8(register f32 *arg0, register f32 arg1) {
    arg0[0] = arg1;
    arg0[1] = arg1;
    arg0[2] = arg1;
}
