/* func_002BA300: store byte at (arg0 + *arg1) if within arg2, then increment *arg1 */
void func_002BA300(char *arg0, s32 *arg1, u32 arg2, s8 arg3) {
    s32 idx = *arg1;
    if ((u32)idx < arg2) {
        arg0[idx] = arg3;
    }
    *arg1 = idx + 1;
}

/* func_002B9C30 */
extern s32 func_0040C4D0(void);
extern s32 func_0040C758(s32);
extern s32 func_002ABF20(s32, s32);
extern s32 func_002AC4B0(s32, s64);

s32 func_002B9C30(s32 arg0) {
    s32 tmp = func_0040C4D0();
    s32 res = func_002AC4B0(func_002ABF20(arg0, func_0040C758(tmp)), (s64)0xFF80 << 46);
    s32 ret = tmp + 1;
    if (res < 0) ret = tmp;
    return ret;
}

/* func_002BB288 */
extern void func_003F94D0(void *, s32, s32);

void *func_002BB288(void *arg0) {
    s32 *p;
    s32 *end;

    func_003F94D0(arg0, 0, 0x300);
    end = (s32 *)((char *)arg0 + 0x300);
    p = (s32 *)arg0;
    if ((u32)p < (u32)end) {
        s32 val = -1;
        do {
            p[1] = val;
            p = (s32 *)((char *)p + 0xC);
        } while ((u32)p < (u32)end);
    }
    return arg0;
}

/* func_002BB398 */
extern void func_002B1FC0(u32);
extern void func_002B8A78(void *, u32);
extern void *func_002B8938(void *, void *, u32);
extern void *func_003F96F8(void);
extern void func_003F9698(const char *);
extern char D_0047FF48[];

typedef struct {
    u32 a;
    u32 b;
    u8 pad[12];
    u8 f14;
    u8 f15;
} F398Arg1;

void *func_002BB398(void *arg0, F398Arg1 *arg1) {
    void *ret;
    void *base;

    func_002B1FC0(arg1->b);
    ret = func_003F96F8();
    base = (char *)arg0 + 0x28;
    func_002B8A78(base, arg1->a);
    func_002B8938(base, ret, arg1->b);

    {
        u16 key = (u16)(((u16)arg1->f15 << 8) | arg1->f14);
        if (*(u16 *)((char *)arg0 + 0x64) != key) {
            func_003F9698(D_0047FF48);
            return (void *)0;
        }
    }
    return ret;
}
