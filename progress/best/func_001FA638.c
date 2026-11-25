typedef struct { f32 *begin; f32 *end; } FVec;

s32 func_001FA638(void *arg0, FVec *arg1) {
    f32 lo[3], hi[3];
    f32 *b = arg1->begin;
    f32 *cur = b;
    f32 *pl, *ph;
    f32 *hp = hi;
    s32 i;
    while (b != arg1->end) {
        b += 3;
        ph = hp; pl = lo;
        i = 2;
        do {
            f32 v = *cur;
            if (v < *pl) *pl = v;
            if (*ph < v) *ph = v;
            ph++; pl++; i--; cur++;
        } while (i >= 0);
        cur = b;
    }
    {
        f32 best = hi[0] - lo[0];
        s32 idx = 0, k = 1;
        while (k < 3) {
            f32 d = hi[k] - lo[k];
            if (best < d) { best = d; idx = k; }
            k++;
        }
        return idx;
    }
}
