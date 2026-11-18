
extern s32 func_002C5160(s32, s32, s32, s32);
s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    register s32 zero = 0;
    register s32 ret;
    ret = func_002C5160(a, b, c, 0);
    return ret;
}

extern s32 func_0016E498(void *, s32);
extern s32 func_0023A6D0(s32);
extern f32 D_00479C9C;
void func_00173D98(void *arg0, f32 fparg0) {
    f32 zero = 0.0f;
    f32 x = fparg0;
    f32 v = D_00479C9C * zero * x;
    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 0x50) = v;
    func_0023A6D0(*(s32 *)((u8 *)arg0 + 0x2C));
    func_0016E498(*(void **)((u8 *)arg0 + 0x34), *(s32 *)((u8 *)arg0 + 0x2C));
}

extern void func_00178260(void *);
extern void func_002698B8(void *);
void func_00173C18(void *arg0) {
    s32 new_var;
    void **new_var2;
    s32 count;
    s32 i;
    void **base;
    new_var = *((s32 *)(((u8 *)arg0) + 0x24));
    count = ((new_var - (*((s32 *)(((u8 *)arg0) + 0x20)))) >> 1) >> 1;
    i = 0;
    if (count > i) {
        i = 0;
        do {
            base = *((void ***)(((u8 *)arg0) + 0x20));
            new_var2 = &base[i];
            func_002698B8(*(void **)((u8 *)*new_var2 + 0x18));
            i++;
        } while (i < count);
    }
    new_var = *((s32 *)(((u8 *)arg0) + 0x18));
    count = ((new_var - (*((s32 *)(((u8 *)arg0) + 0x14)))) >> 1) >> 1;
    i = 0;
    if (count > i) {
        i = 0;
        do {
            base = *((void ***)(((u8 *)arg0) + 0x14));
            new_var2 = &base[i];
            func_00178260(*new_var2);
            i++;
        } while (i < count);
    }
}

extern void func_00188F20(void *);
extern void func_00188F28(void *, s32);
extern void func_00189060(void *, void *, void *);
void func_001734E0(void *arg0) {
    u8 sp[0x10];
    s32 i = 0;
    s32 count;
    void **base;
    void **elem;
    func_00188F20(sp);
    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    if (count > 0) {
        do {
            base = *(void ***)((u8 *)arg0 + 0x14);
            elem = &base[i];
            func_00189060(sp, *elem, *(void **)((u8 *)arg0 + 0x50));
            i++;
        } while (i < count);
    }
    func_00188F28(sp, 2);
}
