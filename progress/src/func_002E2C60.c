typedef struct { s32 tag; f32 a, b, c, d, e, f, g; } E_sort;

extern void func_002DAB78(E_sort *, E_sort *);
extern void func_002DAD38(E_sort *, E_sort *, void *);
extern void func_002DAA98(E_sort *, E_sort *, void *);

void func_002DADE8(E_sort *p, E_sort *end) {
    if ((((s32)end - (s32)p) >> 5) < 0x11) {
        func_002DAB78(p, end);
    } else {
        E_sort *q = p + 16;
        func_002DAB78(p, q);
        func_002DAD38(q, end, 0);
    }
}

void func_002DAD38(E_sort *p, E_sort *end, void *arg2) {
    if (p == end) return;
    do {
        E_sort v = *p;
        func_002DAA98(p, &v, arg2);
        p++;
    } while (p != end);
}

u64 *func_002DEB80(u64 *start, u64 *end, u64 *value) {
    s32 n = ((s32)end - (s32)start) >> 3;
    s32 i = n;
    u64 key = *value;
    while (i > 0) {
        s32 half = i >> 1;
        u64 *mid = start + half;
        if (*mid < key) {
            start = mid + 1;
            n = n - half - 1;
        } else {
            n = half;
        }
        i = n;
    }
    return start;
}

void func_002E2C60(void *arg0) {
    void *vt = *(void **)arg0;
    void (*fn)(void *) = *(void (**)(void *))((char *)vt + 0x8C);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x88));
}
