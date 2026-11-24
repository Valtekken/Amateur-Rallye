typedef struct { f32 key; u32 v; } __attribute__((packed)) E8;
typedef union { u64 q; f32 f; } UF;

E8 *func_001C8F48(E8 *l, E8 *r, u64 pivot) {
    volatile UF u;
    E8 tmp;
    f32 p;
    u.q = pivot;
    p = u.f;
    for (;;) {
        r--;
        while (p < *(f32 *)l) l++;
        while (*(f32 *)r < p) r--;
        if ((u32)l >= (u32)r) break;
        tmp = *l;
        *l = *r;
        *r = tmp;
        l++;
    }
    return l;
}
