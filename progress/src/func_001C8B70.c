typedef struct { f32 key; u32 v; } __attribute__((packed)) E;
static inline s32 less(E *a, E *b){ return *(f32*)b > *(f32*)a; }

void func_001C8B70(E *p, s32 n, s32 m, E value) {
    s32 i = n;
    s32 mid = (i - 1) / 2;
    while (m < i && less(&value, p + mid)) {
        p[i] = p[mid];
        i = mid;
        mid = (i - 1) / 2;
    }
    p[i] = value;
}
