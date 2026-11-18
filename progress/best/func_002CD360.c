extern s32 func_003FA580(s32, s32);

struct S3F0 { s32 n; s32 cap; s32 pad8; s32 *arr; };

s32 func_002CD360(struct S3F0 *p, s32 a) {
    if (p->n == 0) return -1;
    s32 *arr = p->arr;
    s32 i = 0;
    s32 r = -1;
    while ((u32)i < (u32)p->cap) {
        if (func_003FA580(a, *arr) == 0) { r = i; break; }
        arr++; i++;
    }
    return r;
}
