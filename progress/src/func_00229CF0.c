/* identical to func_00251700 (matched), with its names changed by decompdecomp */
#include "context.h"

extern s32 func_00229988(s32 arg0, s32 arg1, s32 arg2);

s32 func_00229CF0(s32 arg0, s32 arg1) {
    s32 res_neg = func_00229988(arg0, arg1, -1);
    s32 res_pos = func_00229988(arg0, arg1, 1);

    if (res_neg != 0 && res_pos != 0) {
        return 1;
    }

    return 0;
}
