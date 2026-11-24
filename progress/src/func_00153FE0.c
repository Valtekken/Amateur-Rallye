typedef struct { u8 a; f32 b; s32 c; f32 d, e, f, g; } R;
static inline void vc(f32 *d, const f32 *s) {
    d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; d[3] = s[3];
}
static inline void cp(R *d, const R *s) {
    d->a = s->a; d->b = s->b; d->c = s->c; vc(&d->d, &s->d);
}
R *func_00153FE0(R *first, R *last, R *dest) {
    R *cur = dest;
    while (first != last) {
        if (cur) cp(cur, first);
        first++;
        cur++;
    }
    return cur;
}
