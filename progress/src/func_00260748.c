typedef struct S_func_00260748_arg0 {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 f0C;
} S_func_00260748_arg0;

void func_00260748(S_func_00260748_arg0 *arg0, S_func_00260748_arg0 *arg1, s32 *arg2, s32 *arg3) {
    *arg2 = (s32)((arg1->f0 - arg0->f4) / arg0->f0C) + 1;
    *arg3 = (s32)((arg1->f8 - arg0->f8) / arg0->f0C);
}
