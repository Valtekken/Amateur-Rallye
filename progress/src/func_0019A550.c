extern void func_001D4040(s32 *, const char *);
extern void *func_00201350(void);
extern void func_0027ECD8(void *);
extern void func_0027F478(void *);
extern void func_00281CD8(void *);
extern void func_00282510(void *);
extern const char D_00471280[], D_00471D08[], D_00471D20[], D_00471D30[];
extern void *D_004739D8[];

void *func_0019A550(void *arg0) {
    s32 sp[4];
    s32 *p = (s32 *)arg0;
    s32 *t17 = p + 0x200 / 4;
    void *ret = arg0;

    func_001D4040(sp, D_00471D08);
    p[1] = sp[0];
    p[0] = -1;
    p[2] = (s32)D_004739D8;
    func_0027F478((char *)arg0 + 0xC);
    func_0027ECD8((char *)arg0 + 0x48);
    func_00282510((char *)arg0 + 0x170);
    func_00281CD8((char *)arg0 + 0x19C);

    p[0x1E4/4] = 0;
    p[0x1E8/4] = 0;
    p[0x1EC/4] = 1;
    p[0x1F0/4] = 0;
    p[0x1F4/4] = 0;
    p[0x1F8/4] = 0;
    p[0x1FC/4] = 0;

    func_001D4040(t17, D_00471D20);

    p[0x204/4] = 0;
    p[0x208/4] = 0;
    p[0x20C/4] = 0;
    p[0x210/4] = 0;
    p[0x214/4] = 0;

    func_001D4040((s32 *)((char *)arg0 + 0x218), D_00471280);

    p[0x21C/4] = 0;
    p[0x220/4] = 0;
    p[0x224/4] = 0;
    p[0x228/4] = 0;
    p[0x230/4] = 0;
    p[0x234/4] = 0;
    p[0x238/4] = 0;
    p[0x23C/4] = 0;
    p[0x240/4] = 0;
    p[0x244/4] = 0;
    p[0x248/4] = 0;

    if (((s32 *)func_00201350())[4] >= 2) {
        func_001D4040(t17, D_00471D30);
    }

    p[0x204/4] = 0;
    p[0x208/4] = 0;
    p[0x20C/4] = 0;
    p[0x210/4] = 0;
    p[0x214/4] = 0;
    p[0x21C/4] = 0;

    return ret;
}
