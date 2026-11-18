typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(s32 a, s32 b, s32 c, s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

void func_001D1810(s32 *arg1, s32 *arg2, void *base) {
    /* arg0=base (a0), arg1=count (a1), arg2=index (a2) per target? target uses a0=base? Actually target: lw $3,0($7) where $7=$5 (arg1). So arg1 is count ptr. */
}

s32 func_001CFDD0(s32 arg0) {
    s32 t = arg0 & 1;
    s32 a = arg0 + 1;
    s32 b = arg0 - 1;
    if (t)
        return b;
    return a;
}

extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern const char D_0044E848[];
extern const char D_0044E858[];
extern const char D_0044E870[];
extern void *D_00473680;

void *func_001D0860(void) {
    void *p;
    int local[4];
    p = D_002AD408(0x14);
    func_001D4040(local, D_0044E848);
    *(int *)((char *)p + 4) = local[0];
    *(int *)p = -1;
    *(void **)((char *)p + 8) = &D_00473680;
    *(int *)((char *)p + 0xC) = 0;
    *(int *)((char *)p + 0x10) = 0;
    func_001D4040((char *)p + 0xC, D_0044E858);
    func_001D4040((char *)p + 0x10, D_0044E870);
    return p;
}
