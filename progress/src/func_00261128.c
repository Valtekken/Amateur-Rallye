/* identical to func_00260708 (matched), with its names changed by decompdecomp */
typedef struct S_func_00260708 {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 f0C;
} S_func_00260708;

void func_00261128(S_func_00260708 *arg0, S_func_00260708 *arg1, s32 *arg2, s32 *arg3) {
    *arg2 = (s32)((arg1->f0 - arg0->f4) / arg0->f0C);
    *arg3 = (s32)((arg1->f8 - arg0->f8) / arg0->f0C);
}
