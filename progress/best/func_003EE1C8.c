extern void *func_00152D28(int);
extern void *func_002B1FC0(int);
extern void func_002B2028(void *);
extern void *func_003D2910(int);
extern void func_003F931C(void *, void *, int);
extern void func_003F93CC(void *, void *, int, int);
extern u32 D_0040E618[];
static inline void *alloc_or_fallback(int n) { void *p = func_002B1FC0(n); return p ? p : func_003D2910(n); }
static inline void *get_free(void) { u32 h = D_0040E618[-1]; if (!h) return func_00152D28(0); D_0040E618[-1] = *(u32 *)h; return (void *)h; }
static inline u32 clamp_min(u32 v, u32 max) { return v < max ? v : max; }
void *func_003EE1C8(u8 **arg0, s32 arg1, u32 arg2, void *arg3, s32 arg4) {
    u8 *p = *arg0;
    u32 begin = *(u32 *)(p - 0x10);
    s32 grow = 0;
    u32 n, needed, allocSize, rem, sp4;
    u8 *buf, *newdata;
    *(u32 *)(p - 4) = 0;
    n = clamp_min(begin - (u32)arg1, arg2);
    needed = (begin - n) + (u32)arg4;
    {
        u8 *v = *arg0 - 0x10;
        if (*(u32 *)(v + 8) >= 2 || *(u32 *)(v + 4) < needed + 1 || ((needed + 1 > 15 ? needed + 1 : 16) * 2) < *(u32 *)(v + 4)) grow = 1;
    }
    if (grow) {
        u32 need1 = needed + 1;
        u32 round = 16;
        u32 base = (u32)arg1 + n;
        while (round < need1) round <<= 1;
        sp4 = (u32)arg1 + (u32)arg4;
        allocSize = round + 16;
        buf = allocSize ? (u8 *)alloc_or_fallback(allocSize) : (u8 *)get_free();
        *(u32 *)(buf + 4) = round;
        *(u32 *)(buf + 8) = 1;
        newdata = buf + 0x10;
        *(u32 *)(buf + 0xC) = 0;
        if (arg1) func_003F931C(newdata, *arg0, arg1);
        {
            u8 *src;
            rem = begin - base;
            src = *arg0;
            src += arg1;
            src += n;
            if (rem) func_003F931C(newdata + sp4, src, rem);
        }
        if (arg4) func_003F931C(newdata + (u32)arg1, (u8 *)arg3, arg4);
        {
            u8 *oldv = *arg0 - 0x10;
            u32 ref = *(u32 *)(oldv + 8) - 1;
            *(u32 *)(oldv + 8) = ref;
            if (ref == 0) {
                u32 e = *(u32 *)(oldv + 4) + 0x10;
                if (e) func_002B2028(oldv);
                else { *(u32 *)oldv = D_0040E618[-1]; D_0040E618[-1] = (u32)oldv; }
            }
            *arg0 = newdata;
        }
    } else {
        u8 *dst, *src;
        rem = begin - ((u32)arg1 + n);
        dst = *arg0 + (u32)arg1 + (u32)arg4;
        src = *arg0 + (u32)arg1 + n;
        if (rem) func_003F93CC(dst, src, rem, grow);
        if (arg4) func_003F931C(*arg0 + (u32)arg1, (u8 *)arg3, arg4);
    }
    *(u32 *)(*arg0 - 0x10) = needed;
    return arg0;
}
