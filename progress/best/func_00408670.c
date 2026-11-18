#include "context.h"

/* external functions */
extern s32 func_003AD3E0(s32);
extern s32 func_003AD3A8(s32);
extern s32 func_00407F48(s32);

s32 func_003A6178(s32 arg0) {
    s32 r1 = func_003AD3E0(arg0);
    s32 r2 = func_003AD3A8(arg0);
    return (r1 - r2) >> 3;
}

s32 func_004082C0(void) {
    return func_00407F48(8);
}

s32 func_00408670(void) {
    return func_00407F48(16);
}

s32 func_00408FE8(void) {
    return func_00407F48(18);
}
