extern void *func_001E37E8(s32, void *);
extern s32 func_001E4280(void);
extern void func_001D4810(void *, s32, s32 *, u32);
extern void func_002060F8(void *);
extern void func_002062A8(void *, void *);
extern void func_00205CE0(void *, s32);
typedef struct { s32 *b; s32 *e; } V;

void func_002A0890(s32 arg0, char *arg1) {
    void *p; V *v; u32 lim; s32 *b; s32 count; u32 n; s32 idx; s32 *q; s32 sp0; s32 key;
    p = *(void **)(arg1 + 0x4C);
    if (p == 0) return;
    func_002060F8(p);
    key = func_001E4280();
    v = func_001E37E8(key, (void *)(arg0 + 0x10));
    if (v == 0) return;
    key = func_001E4280();
    lim = func_001E3650(key, (s32)(arg0 + 0xC));
    b = v->b;
    count = ((s32)v->e - (s32)b) >> 2;
    n = (lim < (u32)count) ? lim : (u32)(count - 1);
    idx = ((s32)n > -1) ? (s32)n : 0;
    q = b + idx;
    sp0 = 0;
    func_001D4810(&sp0, *q, q, idx);
    func_002062A8(p, &sp0);
    func_00205CE0(p, 0);
}
