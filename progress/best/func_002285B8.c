extern void *D_002AD408(s32);
extern void func_00228F10(void *, void *, s32);
extern f32 fabsf(f32);
extern f32 D_00426518[];
extern f32 D_00426538[];

void func_002285B8(void *arg0) {
    f32 diff[4] __attribute__((aligned(16)));
    f32 mid[4] __attribute__((aligned(16)));
    f32 tv[4] __attribute__((aligned(16)));
    f32 dot;
    f32 *p = *(f32 **)((char *)arg0 + 4);
    f32 *v1 = (f32 *)((char *)p + 0xC);
    f32 *v2 = (f32 *)((char *)p + 0x18);
    f32 *t; void *r;
    diff[0] = p[6] - p[3];
    diff[1] = v2[1] - v1[1];
    diff[2] = v2[2] - v1[2];
    mid[0] = (p[6] + p[3]) * 0.5f;
    mid[1] = (v2[1] + v1[1]) * 0.5f;
    mid[2] = (v2[2] + v1[2]) * 0.5f;
    tv[0] = 0.0f; tv[1] = 0.0f; tv[2] = 0.0f;
    if (fabsf(diff[2]) < fabsf(diff[0])) { t = D_00426518; } else { t = D_00426538; }
    tv[0] = t[0]; tv[1] = t[1]; tv[2] = t[2];
    dot = -(tv[0] * mid[0] + tv[1] * mid[1] + tv[2] * mid[2]);
    r = D_002AD408(0x14);
    *(f32 *)((char *)r + 0) = tv[0];
    *(f32 *)((char *)r + 4) = tv[1];
    *(f32 *)((char *)r + 8) = tv[2];
    *(f32 *)((char *)r + 0xC) = dot;
    *(s32 *)((char *)r + 0x10) = -1;
    *(void **)arg0 = r;
    func_00228F10(arg0, r, -1);
}
