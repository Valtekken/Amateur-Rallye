#include "context.h"

extern s32 func_00398720(s32 *val_ptr);
extern s32 func_00398778(s32 val, s32 arg1, s32 arg2, s32 aux);

s32 func_003987C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 local_val = arg0;
    s32 aux = func_00398720(&local_val);

    return func_00398778(local_val, arg1, arg2, aux);
}
