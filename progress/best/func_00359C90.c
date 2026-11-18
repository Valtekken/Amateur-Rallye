extern void *func_00152D28(int);
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void func_003F931C(void *, void *, int);
extern u32 D_0040E618[];

static inline void *alloc_or_fallback(int n) {
    void *p = func_002B1FC0(n);
    return p ? p : func_003D2910(n);
}
static inline void *get_free(void) {
    u32 h = D_0040E618[-1];
    if (!h) return func_00152D28(0);
    D_0040E618[-1] = *(u32 *)h;
    return (void *)h;
}

u8 *func_00359C90(u32 *arg0) {
    u32 needed = *arg0 + 1;
    u32 round = 16;
    u32 allocSize;
    u8 *buf, *newdata, *src;

    while (round < needed) round <<= 1;
    allocSize = round + 16;
    buf = allocSize ? (u8 *)alloc_or_fallback(allocSize) : (u8 *)get_free();
    *(u32 *)(buf + 4) = round;
    *(u32 *)(buf + 8) = 1;
    *(u32 *)(buf + 0xC) = 0;
    src = (u8 *)arg0 + 0x10;
    newdata = buf + 0x10;
    if (*arg0) func_003F931C(newdata, src, *arg0);
    *(u32 *)buf = *arg0;
    return newdata;
}
