extern void func_001D4040(void *, const char *);
extern s32 D_0044BE48;
extern s32 D_0044BE60;
extern s32 D_0044BE70;
extern s32 D_0044CBC0;

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ f32 unk8;
} Sub;

typedef struct {
    /* 0x000 */ s32 unk0;
    /* 0x004 */ s32 unk4;
    /* 0x008 */ s32 unk8;
    /* 0x00C */ s32 unkC;
    /* 0x010 */ s32 unk10;
    /* 0x014 */ s32 unk14;
    /* 0x018 */ s32 unk18;
    /* 0x01C */ f32 unk1C;
    /* 0x020 */ s32 unk20;
    /* 0x024 */ Sub subs[30];
    /* 0x198 */ s32 unk198;
    /* 0x19C */ s32 unk19C;
} Obj;

Obj *func_00144D58(Obj *arg0)
{
    s32 sp[4];
    s32 sp10[4];
    s32 var_4;
    s32 var_4_2;
    Sub *var_3;

    func_001D4040(sp, (const char *)&D_0044BE48);
    arg0->unk4 = sp[0];
    arg0->unk0 = -1;
    arg0->unk8 = (s32)&D_0044CBC0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    var_4 = 0x1C;
    do {
        var_4 -= 1;
    } while (var_4 != -1);
    arg0->unk198 = 0;
    arg0->unk19C = 0;
    arg0->unkC = 0;
    func_001D4040(sp10, (const char *)&D_0044BE60);
    arg0->unk10 = sp10[0];
    func_001D4040(sp10, (const char *)&D_0044BE70);
    var_3 = &arg0->subs[0];
    var_4_2 = 0x1D;
    arg0->unk14 = sp10[0];
    arg0->unk1C = 32.0f;
    arg0->unk18 = 0;
    arg0->unk20 = 0;
    do {
        var_4_2 -= 1;
        var_3->unk0 = 0.0f;
        var_3->unk8 = 0.0f;
        var_3->unk4 = 0.0f;
        var_3 += 1;
    } while (var_4_2 >= 0);
    return arg0;
}
