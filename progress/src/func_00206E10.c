#include "context.h"

void func_00206E10(void *arg0, void *arg1, void *arg2) {
    s32 n = (*(s32 *)((char *)arg0 + 4) - *(s32 *)arg0) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            s32 off = i << 2;
            f32 *pa = (f32 *)(*(s32 *)arg1 + off);
            f32 *pb = (f32 *)(*(s32 *)arg0 + off);
            i++;
            *(f32 *)(*(s32 *)arg2 + off) = *pa * *pb;
        } while (i < n);
    }
}
