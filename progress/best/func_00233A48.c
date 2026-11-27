extern void func_00233988(void);
extern void func_0023F7D8(void *);
typedef struct { f32 v[3]; } Q33;

s32 func_00233A48(char *arg0, char *arg1) {
    func_00233988();
    func_0023F7D8(arg1);
    void **base = *(void ***)arg1;
    void **end = *(void ***)(arg1 + 4);
    s32 n = end - base;
    if (n > 0) {
        f32 minx = *(f32 *)(arg0 + 0x20);
        void **p = base;
        s32 i = 0;
        do {
            Q33 *q = *(Q33 **)(*(char **)p + 0xC);
            if (q->v[0] < minx) return 0;
            if (*(f32 *)(arg0 + 0x2C) < q->v[0]) return 0;
            if (q->v[1] < *(f32 *)(arg0 + 0x24)) return 0;
            if (*(f32 *)(arg0 + 0x30) < q->v[1]) return 0;
            if (q->v[2] < *(f32 *)(arg0 + 0x28)) return 0;
            i++;
            if (*(f32 *)(arg0 + 0x34) < q->v[2]) return 0;
            p++;
        } while (i < n);
    }
    return 1;
}
