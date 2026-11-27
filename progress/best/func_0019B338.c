#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern s32 func_001E4280(void);
extern void *func_001E3820(s32, s32, void *);
extern void *func_00201350(void);
extern f32 fabsf(f32);

void func_0019B338(void *arg0, void *arg1) {
    void *r, *q, *v;
    char *ptr, *q2, *p2;
    volatile f32 sp0, sp4, sp8, unused, sp10, sp14, sp18;
    f32 s2, s3, t, d, k025, k07, k10;
    s32 i;
    r = func_001E3820(func_001E4280(), (s32)((char *)arg0 + 0x20C), (char *)arg0 + 0x218);
    if (r == 0) return;
    ptr = (char *)func_00201350();
    ptr += A(arg0, s32, 0x228) * 4;
    q = *(void **)ptr;
    p2 = (char *)A(arg1, void *, 0x50) + 0x50;
    q2 = (char *)q + 0xC0;
    sp0 = A(q, f32, 0xC0);
    sp4 = A(q2, f32, 4);
    sp8 = A(q2, f32, 8);
    sp10 = A((char *)p2 - 0x50, f32, 0x50);
    sp14 = A(p2, f32, 4);
    sp18 = A(p2, f32, 8);
    v = A(r, void *, 0xC);
    s2 = 0.0f; s3 = 0.0f;
    for (i = 3; i >= 0; i--) { s2 += A(v, f32, 0x44); s3 += A(v, f32, 0x30); v = (char *)v + 0x54; }
    if (s2 > 1.1920929e-7f) {
        k025 = 0.25f; k07 = 0.7f; k10 = 1.0f;
        t = s3 * k025 + s2 * k025;
        d = sp4 - t;
        sp14 = t;
        if (d < 0.0f) sp4 += fabsf(d) + k07;
        else if (d < k07) sp4 += k07 - fabsf(d);
        A(q, f32, 0xC0) = sp0;
        A(q2, f32, 4) = sp4;
        A(q2, f32, 0xC) = k10;
        A(q2, f32, 8) = sp8;
    }
}
