extern f32 D_00479C98;
extern f32 D_00479C9C;

typedef struct {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 f0C;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    f32 f50;
    f32 f54;
    s32 f58;
    s32 f5C;
} S_0016DBF0;

static inline void zero3(s32 *v) {
    v[2] = (v[1] = 0);
}

S_0016DBF0 *func_0016DBF0(S_0016DBF0 *a0) {
    volatile int stack[24];
    s32 *p8 = (s32 *)((u8 *)a0 + 8);
    s32 *p14 = (s32 *)((u8 *)a0 + 0x14);
    s32 *p20 = (s32 *)((u8 *)a0 + 0x20);
    s32 *p2C = (s32 *)((u8 *)a0 + 0x2C);
    s32 *p38 = (s32 *)((u8 *)a0 + 0x38);
    s32 *p44 = (s32 *)((u8 *)a0 + 0x44);
    s32 m1 = -1;
    
    a0->f00 = 0;
    a0->f04 = 0;
    a0->f08 = 0;
    zero3(p8);
    a0->f14 = 0;
    zero3(p14);
    a0->f20 = 0;
    zero3(p20);
    a0->f2C = 0;
    zero3(p2C);
    a0->f38 = 0;
    zero3(p38);
    a0->f44 = 0;
    zero3(p44);
    a0->f50 = D_00479C98 * D_00479C9C;
    a0->f54 = 0.00001f;
    a0->f5C = m1;
    a0->f58 = m1;
    a0->f00 = 0;
    return a0;
}
