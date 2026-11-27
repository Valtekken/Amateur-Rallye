#include "context.h"

const u64 *func_0035B038(const u64 *begin, const u64 *end, const u64 *val) {
    s32 len = (s32)(end - begin);

    if (len > 0) {
        u64 target = *val;
        s32 half = len >> 1;

        do {
            const u64 *mid = begin + half;

            if (*mid < target) {
                begin = mid + 1;
                len = (len - half) - 1;
            } else {
                len = half;
            }

            half = len >> 1;
        } while (len > 0);
    }

    return begin;
}
