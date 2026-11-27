#include "context.h"

typedef struct {
    s32 *start;
    s32 *finish;
    s32 *end_of_storage;
} IntVec;

typedef struct {
    u8 pad0[0xC];
    IntVec vec;
} Obj_26BFF0;

extern void func_00152720(IntVec *, s32 *, const s32 *);

s32 func_0026BFF0(Obj_26BFF0 *arg0, s32 arg1) {
    IntVec *vec = &arg0->vec;
    s32 *first = vec->start;
    s32 count = vec->finish - first;
    s32 i;

    if (count > 0) {
        for (i = 0; i < count; i++) {
            if (first[i] == arg1) {
                return 0;
            }
        }
    }

    if (vec->finish != vec->end_of_storage) {
        if (vec->finish != 0) {
            *vec->finish = arg1;
        }
        vec->finish++;
    } else {
        func_00152720(vec, vec->finish, &arg1);
    }

    return 1;
}
