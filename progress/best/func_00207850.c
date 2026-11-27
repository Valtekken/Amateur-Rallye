typedef struct S_elem {
    f32 *unk0;
    f32 *unk4;
    char pad[16];
} S_elem;

typedef struct S_arg0 {
    s32 count;
    S_elem *elems;
} S_arg0;

typedef struct S_arg1 {
    f32 *weights;
} S_arg1;

extern f32 func_002088B0(S_elem *e);
extern void func_00208888(S_elem *e, s32 j, s32 *idx, f32 *val);

void func_00207850(S_arg0 *arg0, S_arg1 *arg1, f32 **arr_ptr) {
    s32 i;

    if (arg0->count > 0) {
        i = 0;
        do {
            (*arr_ptr)[i] = 0.0f;
            i++;
        } while (i < arg0->count);
    }

    if (arg0->count > 0) {
        for (i = 0; i < arg0->count; i++) {
            S_elem *e = &arg0->elems[i];
            s32 delta = (s32)((u8 *)e->unk4 - (u8 *)e->unk0);
            s32 limit = (delta >> 2) - 1;
            f32 w = arg1->weights[i];

            (*arr_ptr)[i] += func_002088B0(e) * w;
            if (limit > 0) {
                for (s32 j = 0; j < limit; j++) {
                    s32 idx;
                    f32 val;
                    func_00208888(e, j, &idx, &val);
                    (*arr_ptr)[idx] += val * w;
                }
            }
        }
    }
}
