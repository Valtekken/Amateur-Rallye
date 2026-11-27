typedef struct { f32 *start; f32 *end; f32 *sent; s32 cnt; f32 x; f32 acc; } S5B;
extern void func_001C64B0(void *, f32 *, void *);

void func_001D5B50(S5B *a, f32 x) {
    f32 sp0 = x - a->x;
    f32 *p;
    f32 v, sum, den;
    s32 n;
    if ((u32)(((u8 *)a->end - (u8 *)a->start) >> 2) < (u32)a->cnt) {
        if (a->end != a->sent) {
            if (a->end != 0) *a->end = sp0;
            a->end = a->end + 1;
        } else {
            func_001C64B0(a, a->end, &sp0);
        }
    } else {
        p = a->start;
        v = p[1];
        while (p != (f32 *)((char *)a->start + a->cnt * 4 - 4)) {
            *p = v;
            p++;
            v = p[1];
        }
        *(f32 *)((char *)a->start + (a->cnt - 1) * 4) = sp0;
    }
    p = a->start;
    sum = 0.0f;
    while (p != a->end) {
        sum += *p;
        p++;
    }
    n = (s32)((u8 *)a->end - (u8 *)a->start) >> 2;
    den = (n >= 0) ? (f32)n : 2.0f * (f32)((n & 1) | ((u32)n >> 1));
    a->x = x;
    a->acc += sum / den;
}
