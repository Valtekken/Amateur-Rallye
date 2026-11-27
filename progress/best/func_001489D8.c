extern s32 func_001930D8(s32, s32);
extern s32 func_00193138(s32, s32);
extern s32 func_00193B60(void);
extern void func_001D4040(char *, char *);
extern void func_002060F8(void *);
extern void func_0021E4F0(void *);
extern s32 func_003FA310(char *, char *, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, char *);
extern char D_0040E6F8[];
extern char D_0044C058[];
extern char D_0044C070[];

typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Unk4C { char pad[0x50]; Vec3 pos; char pad2[0x1C]; s64 unk78; } Unk4C;
typedef struct UnkArg1 { char pad[0x4C]; Unk4C *unk4C; } UnkArg1;
typedef struct UnkArg0 {
    char pad[0xC];
    s32 unkC;
    char pad14[0x4];
    char unk14[4];
    char unk18[4];
    char pad1C[0x78];
    Vec3 unk94;
    Vec3 unkA0;
    char padAC[0x10];
    s32 unkBC;
    s32 unkC0;
} UnkArg0;

void func_001489D8(UnkArg0 *arg0, UnkArg1 *arg1) {
    char buf[0x40];
    s32 id;
    Unk4C *p;

    if (func_00193138(func_00193B60(), arg0->unkC) == 0) {
        func_0021E4F0(arg1);
        arg0->unkBC = -1;
    } else {
        arg0->unkBC = -1;
    }

    arg0->unkC0 = func_001E3650(func_001E4280(), D_0040E6F8);

    p = arg1->unk4C;
    if (p != NULL) {
        volatile f32 *vs = (volatile f32 *)buf;
        Vec3 *v94 = &arg0->unk94;
        Vec3 *vA0 = &arg0->unkA0;
        f32 x = p->pos.x;
        f32 y;
        f32 z;
        f32 y2;

        vs[0] = x;
        y = p->pos.y;
        vs[1] = y;
        y2 = y - 60.0f;
        z = p->pos.z;
        vs[9] = y;
        v94->x = x;
        vs[6] = 0.0f;
        vs[4] = x;
        vs[5] = y2;
        vs[8] = x;
        vs[2] = z;
        vs[10] = 0.0f;
        v94->y = y2;
        v94->z = vs[6];

        vs[12] = vs[8] - vs[4];
        vs[13] = vs[9] - vs[5];
        vs[14] = vs[10] - vs[6];
        vA0->x = vs[12];
        vA0->y = vs[13];
        vA0->z = vs[14];

        func_002060F8(arg1->unk4C);
        arg1->unk4C->unk78 = (arg1->unk4C->unk78 & ~4LL) | 4LL;
    }

    id = func_001930D8(func_00193B60(), arg0->unkC);
    func_003FA310(buf, D_0044C058, id);
    func_001D4040(arg0->unk14, buf);
    func_003FA310(buf, D_0044C070, id);
    func_001D4040(arg0->unk18, buf);
}
