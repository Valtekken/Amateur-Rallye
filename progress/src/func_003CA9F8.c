typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
} UnkBBC0;

extern u32 D_0049B980[];
extern u32 D_0049BBC0[];
extern s32 func_00405E90(void *a, s32 b, s32 c, void *d, s32 e, void *f, s32 g, s32 h, s32 i);
extern s32 func_003CA590(s32 a, s32 b, s32 c);

s32 func_003CA9F8(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    UnkBBC0 *p = (UnkBBC0 *)D_0049BBC0;
    p->unk0 = 6;
    p->unk4 = arg0;
    p->unk8 = arg1;
    p->unkC = arg2;
    p->unk10 = arg3;
    if (func_00405E90(D_0049B980, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    s32 t = p->unk14;
    if (t == 1) {
        func_003CA590(arg0, arg1, 2);
        t = p->unk14;
    }
    return t;
}
