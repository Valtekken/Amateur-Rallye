extern void func_002C6528(void *, u32, u32, void *);
extern void *func_002DDA20(void);
extern void *func_00303038(void *, void *);
extern s32 func_001D4010(void *);
extern s32 func_003F9698(char *, ...);
extern void func_00362DD8(void *);
extern void func_00362F00(void);
extern char D_00486458[];

void func_003631E0(void *arg0, s32 *arg1) {
    s32 n, cap;
    u32 aligned, newend, v, gap;
    u32 sp[2];
    void *vb, *vec, *obj, *var3;
    u32 base, end, base2, end2;

    if (*(s32 *)arg0 != *arg1) {
        func_00362F00();
        *(s32 *)arg0 = *arg1;
    }
    if (*(s32 *)arg0 == 0) return;
    if (*(void **)((char *)arg0 + 4) != NULL) return;

    vb = *(void **)func_002DDA20();
    var3 = NULL;
    n = *(s32 *)arg0;
    if (n != 0) {
        vec = (char *)vb + 0x14;
        base = *(u32 *)vec;
        end = *(u32 *)((char *)vec + 4);
        cap = ((s32)end - (s32)base) >> 3;
        if (n >= cap) {
            aligned = (n + 0x20) & -0x20;
            sp[0] = 0; sp[1] = 0;
            end2 = *(volatile u32 *)((char *)vec + 4);
            base2 = *(volatile u32 *)((char *)vb + 0x14);
            cap = ((s32)end2 - (s32)base2) >> 3;
            if (aligned < (u32)cap) {
                newend = base2 + (aligned - (u32)cap) * 8;
                gap = end2 - newend;
                if (newend >= end2) goto store;
                v = newend + 8;
                while (v < end2) v += 8;
store:
                *(u32 *)((char *)vec + 4) = end2 - gap;
            } else {
                func_002C6528(vec, end2, aligned - (u32)cap, sp);
            }
        }
        obj = (void *)(*(u32 *)((char *)vb + 0x14) + n * 8);
        if (*(u32 *)((char *)obj + 4) != *(u32 *)((char *)vb + 0x20)) {
            *(void **)obj = func_00303038(vb, arg0);
            *(u32 *)((char *)obj + 4) = *(u32 *)((char *)vb + 0x20);
        }
        var3 = *(void **)obj;
    }
    if (var3 == NULL) return;
    *(void **)((char *)arg0 + 4) = *(void **)((char *)var3 + 0x18);
    if (*(s32 *)((char *)var3 + 0x20) != 0) {
        func_003F9698(D_00486458, func_001D4010(arg0));
        func_00362DD8(arg0);
    }
}
