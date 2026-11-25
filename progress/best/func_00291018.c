extern void *func_00201350(void);
extern void func_001CB748(void *, void *, void *, void *);

void func_00291018(char *arg0) {
    f32 a[3], b[3], c[3];
    void *ctx = *(void **)func_00201350();
    f32 *pc = c;
    f32 *p = (f32 *)(arg0 + 0x3c);
    f32 s0 = *(f32 *)((char *)ctx + 0xc0);
    f32 s1 = *(f32 *)((char *)ctx + 0xc4);
    f32 s2 = *(f32 *)((char *)ctx + 0xc8);
    f32 x0 = *(f32 *)(arg0 + 0x30);
    f32 x1 = *(f32 *)(arg0 + 0x34);
    f32 x2 = *(f32 *)(arg0 + 0x38);
    f32 f = *(f32 *)(arg0 + 0x50);
    a[0] = s0 + f * (x0 - s0);
    a[1] = s1 + f * (x1 - s1);
    a[2] = s2 + f * (x2 - s2);
    b[0] = a[0] + p[0];
    b[1] = a[1] + p[1];
    b[2] = a[2] + p[2];
    c[0] = 0.0f; c[2] = 0.0f;
    pc[1] = 1.0f;
    func_001CB748(a, b, pc, (char *)ctx + 0x90);
}
