#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void func_001B3558(void *, void *);
extern void func_001B2900(void *, void *);
extern f32 func_001B2D60(void *);
extern f32 func_001B2DF0(void *);
extern f32 func_001B2E38(void *);

void func_001B3380(void *arg0) {
    char *s0 = (char *)arg0;
    f32 *vbase;
    void *sp[4];
    if (A(s0, void *, 0xC8) != 0) {
        void *obj = A(s0, void *, 0xC8);
        void *vt = A(obj, void *, 0);
        s16 off = A(vt, s16, 0x10);
        void (*fn)(void *, void *, void *) = A(vt, void *, 0x14);
        fn((char *)obj + off, arg0, obj);
    }
    {
        f32 *src = (f32 *)(s0 + 0x38);
        f32 *dst = (f32 *)(s0 + 0x48);
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
    }
    A(s0, u32, 0x118) = 0;
    A(s0, f32, 0x6C) = A(s0, f32, 0x60);
    A(s0, f32, 0x70) = A(s0, f32, 0x64);
    A(s0, f32, 0x84) = A(s0, f32, 0x7C);
    A(s0, f32, 0x94) = A(s0, f32, 0x8C);
    A(s0, f32, 0xA0) = A(s0, f32, 0x98);
    if (A(s0, s32, 0xC) != 0 || A(s0, s32, 0xCC) != 0) {
        vbase = (f32 *)(s0 + 0xA4);
        A(vbase, f32, 0) = A(s0, f32, 0);
        A(vbase, f32, 4) = A(s0, f32, 4);
        A(vbase, f32, 8) = A(s0, f32, 8);
    } else {
        func_001B3558(sp, arg0);
        vbase = (f32 *)(s0 + 0xA4);
        A(vbase, f32, 0) = ((f32 *)sp)[0];
        A(vbase, f32, 4) = ((f32 *)sp)[1];
        A(vbase, f32, 8) = ((f32 *)sp)[2];
    }
    if (A(s0, s32, 0x1C) != 0 || A(s0, s32, 0xCC) != 0) {
        f32 *dst = (f32 *)(s0 + 0xB0);
        f32 *src = (f32 *)(s0 + 0x10);
        A(dst, f32, 0) = A(src, f32, 0);
        A(dst, f32, 4) = A(src, f32, 4);
        A(dst, f32, 8) = A(src, f32, 8);
    } else {
        f32 *dst;
        func_001B2900(sp, arg0);
        dst = (f32 *)(s0 + 0xB0);
        A(dst, f32, 0) = ((f32 *)sp)[0];
        A(dst, f32, 4) = ((f32 *)sp)[1];
        A(dst, f32, 8) = ((f32 *)sp)[2];
    }
    if (A(s0, s32, 0x24) != 0 || A(s0, s32, 0xCC) != 0) A(vbase, f32, 0x18) = A(s0, f32, 0x20);
    else A(vbase, f32, 0x18) = func_001B2D60(arg0);
    if (A(s0, s32, 0x2C) != 0 || A(s0, s32, 0xCC) != 0) A(vbase, f32, 0x1C) = A(s0, f32, 0x28);
    else A(vbase, f32, 0x1C) = func_001B2DF0(arg0);
    if (A(s0, s32, 0x34) != 0 || A(s0, s32, 0xCC) != 0) A(vbase, f32, 0x20) = A(s0, f32, 0x30);
    else A(vbase, f32, 0x20) = func_001B2E38(arg0);
}
