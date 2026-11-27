typedef struct { f32 unk00; f32 unk04; } S_A0;
typedef struct { s32 *begin; s32 *end; } S_A1;

extern f32 D_004264A0;
extern f32 D_00479B5C;
extern s32 func_00242460(void *, s32, s32);
extern f32 func_00242210(void *, s32, s32);
extern void func_00242320(void *, s32, s32);

void func_00241FF0(void *arg0, void *arg1) {
    S_A0 *a0 = (S_A0 *)arg0;
    S_A1 *a1 = (S_A1 *)arg1;
    s32 *arr = a1->begin;
    s32 count = (s32)((u32)a1->end - (u32)a1->begin) >> 2;
    s32 i, j;
    s32 changed;
    s32 vi, vj;
    s32 best_j;
    f32 best;

    a0->unk00 = D_004264A0 * 10.0f;
    a0->unk00 *= a0->unk00;

    do {
        changed = 0;
        i = 0;
        while (i < count) {
            vi = arr[i];
            if (vi != 0) {
                j = 0;
                while (j < count) {
                    vj = arr[j];
                    j++;
                    if (vj != 0 && func_00242460(a0, vi, vj) != 0) {
                        arr[j - 1] = 0;
                        changed = 1;
                    }
                }
            }
            i++;
        }
    } while (changed);

    do {
        changed = 0;
        i = 0;
        while (i < count) {
            vi = arr[i];
            if (vi != 0) {
                best_j = -1;
                best = D_00479B5C;
                j = i + 1;
                while (j < count) {
                    vj = arr[j];
                    if (vj != 0) {
                        f32 d = func_00242210(a0, vi, vj);
                        if (d < best) {
                            best = d;
                            best_j = j + 1;
                            j++;
                        }
                    }
                    j++;
                }
                if (i < best_j && best < a0->unk04) {
                    changed = 1;
                    func_00242320(a0, vi, arr[best_j]);
                    arr[best_j] = 0;
                }
            }
            i++;
        }
    } while (changed);
}
