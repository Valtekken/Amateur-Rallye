extern void *func_00201350(void);
extern void func_001D56B0(void *, void *, void *, void *);
typedef struct { f32 x, y, z, w; } V4;

void func_00281DD8(u8 *arg0) {
    V4 v0, v1, v2, v3;
    void *tbl = func_00201350();
    s32 idx = *(s32 *)(arg0 + 0x10);
    f32 *q1 = (f32 *)&v1, *q2 = (f32 *)&v2, *q3 = (f32 *)&v3;
    f32 *d38 = (f32 *)(arg0 + 0x38), *d2C = (f32 *)(arg0 + 0x2C);
    s32 *d44 = (s32 *)(arg0 + 0x44);
    u8 *d14 = arg0 + 0x14;
    f32 *base = *(f32 **)((u8 *)tbl + (idx << 2));
    v0.x = ((f32 *)((u8 *)base + 0x90))[0];
    v0.y = ((f32 *)((u8 *)base + 0x90))[1];
    v0.z = ((f32 *)((u8 *)base + 0x90))[2];
    v0.w = ((f32 *)((u8 *)base + 0x90))[3];
    q1[0] = ((f32 *)((u8 *)base + 0xA0))[0];
    q1[1] = ((f32 *)((u8 *)base + 0xA0))[1];
    q1[2] = ((f32 *)((u8 *)base + 0xA0))[2];
    q1[3] = ((f32 *)((u8 *)base + 0xA0))[3];
    q2[0] = ((f32 *)((u8 *)base + 0xB0))[0];
    q2[1] = ((f32 *)((u8 *)base + 0xB0))[1];
    q2[2] = ((f32 *)((u8 *)base + 0xB0))[2];
    q2[3] = ((f32 *)((u8 *)base + 0xB0))[3];
    q3[0] = ((f32 *)((u8 *)base + 0xC0))[0];
    q3[1] = ((f32 *)((u8 *)base + 0xC0))[1];
    q3[2] = ((f32 *)((u8 *)base + 0xC0))[2];
    q3[3] = ((f32 *)((u8 *)base + 0xC0))[3];
    q2[0] = -q2[0]; q2[1] = -q2[1]; q2[2] = -q2[2];
    q1[1] = -q1[1]; q1[2] = -q1[2];
    v0.x = -v0.x; v0.y = -v0.y; v0.z = -v0.z;
    d38[0] = q3[3];
    d2C[0] = q3[1]; d2C[1] = q2[1]; d2C[2] = q2[2];
    *d44 = 1;
    func_001D56B0(d14, (u8 *)base + 0xA0, q2, (u8 *)base + 0xB0);
}
