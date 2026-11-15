extern s32 func_003AF288(s32);
extern s32 func_003AEFD0(s32);
extern s32 func_003A80D0(s32);
extern s32 func_003A8118(s32);
extern void func_003AEF40(s32, s32, s32);
extern s32 func_003AF070(s32);
extern void func_0033F628(void *, s32, s32);

s32 func_003A86B8(register s32 arg0, register s32 arg1) {
    register s32 s1 = arg0;
    register s32 tmp = func_003AF288(s1);
    return tmp + (arg1 << 3);
}

void func_003A8788(register f32 *arg0, register f32 *arg1) {
    register f32 *v1 = arg1;
    arg0[0] += (*v1);
    arg0[1] += (*v1);
    arg0[2] += (*v1);
}

void func_003A87E8(register f32 *arg0, register f32 arg1) {
    register f32 *v1 = arg0;
    *v1 = arg1;
    v1[1] = arg1;
    v1[2] = arg1;
}

void func_003A8828(register f32 *arg0, register f32 *arg1) {
    register f32 inv = 1.0f / arg1[0];
    arg0[0] *= inv;
    arg0[1] *= inv;
    arg0[2] *= inv;
}
