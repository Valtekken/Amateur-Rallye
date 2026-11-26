typedef struct { f32 *row; s32 unk4; s32 unk8; } Row;
typedef struct { Row *begin; Row *end; s32 unk8; f32 *c; } Mat;

void func_002041A0(Mat *m, f32 **out) {
    s32 n = m->end - m->begin;
    s32 i = n - 1;
    if (i < 0) return;
    do {
        f32 sum = 0.0f;
        s32 j = i + 1;
        if (j < n) {
            f32 *p = (m->begin + i)->row + j;
            f32 *b = *out + j;
            s32 k = n - j;
            do {
                sum += *p * *b;
                p++;
                b++;
                k--;
            } while (k != 0);
        }
        (*out)[i] = (m->c[i] - sum) / *(f32 *)((u8 *)m->begin[i].row + (i << 2));
        i--;
    } while (i >= 0);
}
