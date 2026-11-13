typedef struct {
    void *begin;
    void *end;
} Vec3;

s32 func_00251D20(s32 unused, Vec3 *arg1) {
    s32 **p;
    s32 n;
    s32 i;

    n = (s32)((u32)arg1->end - (u32)arg1->begin) >> 2;
    i = 0;
    if (n <= 0) {
        return 0;
    }
    p = (s32 **)arg1->begin;
    do {
        i++;
        if (p[0][1] == 0) {
            return 1;
        }
        p++;
    } while (i < n);
    return 0;
}
