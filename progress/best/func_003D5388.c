extern void D_002AD390(void **);
extern void D_002AD530(s32, s64, s64);
extern s64 D_00488F18[];
extern s64 D_00488F58[];
extern s64 D_00489120[];

void func_003D5388(void **arg0, s32 arg1) {
    char sp[0x20];
    void *obj = *arg0;
    *(void **)((char *)obj + 0x28) = (void *)D_00488F18;
    if (arg1 == 0) {
        s32 h = *(u16 *)((char *)D_00488F18 + 8);
        s64 v0 = D_00488F18[0];
        s64 v1 = D_00488F18[1];
        s32 delta = (s32)((char *)arg0 - ((char *)obj - 8));
        *(s64 *)(sp + 0x10) = v0;
        *(s64 *)(sp + 0x18) = v1;
        h = h + delta;
        *(void **)((char *)obj + 0x28) = (void *)(sp + 0x10);
        *(u16 *)(sp + 0x18) = (u16)h;
    }
    *(void **)((char *)obj + 0x28) = (void *)D_00488F58;
    s32 bit2 = arg1 & 2;
    s32 h2 = *(u16 *)((char *)D_00488F58 + 8);
    s64 e1 = D_00488F58[1];
    s64 e0 = D_00488F58[0];
    s32 delta2 = (s32)((char *)arg0 - ((char *)obj - 8));
    h2 = h2 + delta2;
    *(s64 *)(sp + 0x8) = e1;
    *(s64 *)(sp + 0x0) = e0;
    *(u16 *)(sp + 0x8) = (u16)h2;
    *(void **)((char *)obj + 0x28) = (void *)sp;
    if (bit2 != 0) {
        *(void **)((char *)obj + 0x28) = (void *)D_00489120;
        s32 t = *(s32 *)((char *)obj + 0x20);
        if (t != 0) {
            D_002AD530(t, e0, e1);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
