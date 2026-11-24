#include "context.h"

extern f32 D_004265E4;

s32 func_002323F0(void *arg0, void *arg1) {
    f32 p0 = ((f32 *)arg0)[0];
    f32 p1 = ((f32 *)arg0)[1];
    f32 p2 = ((f32 *)arg0)[2];
    f32 e0 = ((f32 *)arg1)[0];
    f32 e1 = ((f32 *)arg1)[1];
    f32 e2 = ((f32 *)arg1)[2];
    f32 dot0 = p0 * e0 + p1 * e1 + p2 * e2;
    f32 eps = D_004265E4;
    f32 neg_eps = -eps;

    if (neg_eps < dot0) {
        if (dot0 < eps) {
            return 0;
        }

        // Path for dot0 >= eps
        // Note: Target has 'addiu $2, $5, 0xC' which is $v0 = $a1 + 0xC
        // $5 is arg1.
        void *arg1_plus_c = (void *)((u8 *)arg1 + 0xC);
        f32 p3 = ((f32 *)arg0)[3];
        f32 e3 = ((f32 *)arg1_plus_c)[0];
        f32 e4 = ((f32 *)arg1_plus_c)[1];
        f32 e5 = ((f32 *)arg1_plus_c)[2];
        f32 dot1 = p0 * e3 + p1 * e4 + p2 * e5 - p3;

        if (neg_eps < dot1) {
            if (dot1 < eps) {
                return 1;
            }
        }
    }

    return 0;
}
