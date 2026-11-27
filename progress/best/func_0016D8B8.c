#define A(p,t,o) (*(t*)((char*)(p)+(o)))
typedef struct { u32 data[8]; } S32;
typedef void (*Fn)(void *, void *);
extern f32 func_0016DA38(void *);
extern void func_0016DA58(void *, void *);
extern f32 func_0016DB38(void *), func_0016DB48(void *), func_0016DB80(void *);
extern void func_0016DBB8(void *, void *);
extern void *func_00203358(void *, void *);
static inline void copy36(u32 *dst, void *r) { func_00203358(dst, r); }

void func_0016D8B8(void *arg0) {
    u32 sp[13];
    void *v, *q;

    A(arg0, f32, 0xC) = A(A(arg0, void *, 8), f32, 0x18);
    A(arg0, f32, 0x10) = A(A(arg0, void *, 8), f32, 0x60);
    A(arg0, f32, 0x30) = A(A(arg0, void *, 8), f32, 0x64);
    A(arg0, f32, 0x34) = A(A(arg0, void *, 8), f32, 0x68);
    A(arg0, f32, 0x38) = A(A(arg0, void *, 8), f32, 0x6C);
    v = A(A(arg0, void *, 4), void *, 0x14);
    A(v, Fn, 0x2C)((char *)A(arg0, void *, 4) + A(v, s16, 0x28), A(arg0, void *, 4));
    {
        f32 f = func_0016DA38(arg0);
        A(A(arg0, void *, 4), f32, 0x20) = f;
        A(A(arg0, void *, 4), f32, 0x24) = 1.0f / f;
    }
    func_0016DA58(sp, arg0);
    q = A(arg0, void *, 4);
    A(q, f32, 0x28) = *(f32 *)sp;
    {
        char *r = (char *)q + 0x28;
        A(r, f32, 0x20) = *(f32 *)(sp + 2);
        A(r, f32, 0x10) = *(f32 *)(sp + 1);
        A(r, u32, 4) = 0;
        A(r, u32, 8) = 0;
        A(r, u32, 0xC) = 0;
        A(r, u32, 0x14) = 0;
        A(r, u32, 0x18) = 0;
        A(r, u32, 0x1C) = 0;
        copy36(sp + 4, r);
    }
    *(S32 *)((char *)q + 0x4C) = *(S32 *)(sp + 4);
    A(q, u32, 0x6C) = sp[12];
    A(q, f32, 0x1C) = func_0016DB38(arg0);
    A(q, f32, 0x1BC) = func_0016DB48(arg0);
    A(q, f32, 0x1C0) = func_0016DB80(arg0);
    func_0016DBB8(sp + 4, arg0);
    A(q, f32, 0x94) = *(f32 *)(sp + 4);
    A((char *)q + 0x94, f32, 4) = *(f32 *)(sp + 5);
    A((char *)q + 0x94, f32, 8) = *(f32 *)(sp + 6);
}
