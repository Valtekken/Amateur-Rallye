typedef struct { f32 key; u32 v[3]; } __attribute__((packed)) E16;
static inline s32 less(E16 *a, E16 *b) { return *(f32 *)b > *(f32 *)a; }

void func_00214210(E16 *p, s32 n, s32 m, E16 value) {
    s32 i = n;
    s32 mid = (i - 1) / 2;
    while (m < i && less(&p[mid], &value)) {
        p[i] = p[mid];
        i = mid;
        mid = (i - 1) / 2;
    }
    p[i] = value;
}
