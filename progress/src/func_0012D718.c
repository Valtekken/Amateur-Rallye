extern void func_0011DFB8(s32);
extern void func_0011E278(s32, s32);
extern s32 func_0011E2B8(s32, s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, s32, s32);
extern void func_0012D8A0(void *);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_0021EE78(void *, s32, s32, s32);
extern void *func_0021F4B0(void);
extern const char D_00449208[], D_00449220[], D_00449240[];

typedef struct {
    /* 0x00 */ u8 pad[0xC];
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
} Progress;

void func_0012D718(Progress *p)
{
    char buf[16];
    s32 cfg1, cls, cfg2, cfg3, res;

    func_0011E650(p->unk0C, 2, 0);
    func_0011DFB8(p->unk0C);
    if (func_0011E528(p->unk0C) != 0 || p->unk10 != 0) return;

    cfg1 = func_001E4280();
    func_001D4040(buf, D_00449208);
    cls = func_001E3650(cfg1, buf);
    if (p->unk18 != 0) {
        func_0012D8A0(p);
        p->unk18 = 0;
    } else if (cls != p->unk14) {
        func_0021EE78(func_0021F4B0(), p->unk14 + 2, 0, 0);
        p->unk14 = cls;
        func_0021EE78(func_0021F4B0(), p->unk14 + 2, 1, 0);
        func_0012D8A0(p);
    }

    cfg2 = func_001E4280();
    func_001D4040(buf, D_00449220);
    func_001E3EC0(cfg2, buf, p->unk14 > 0);
    cfg3 = func_001E4280();
    func_001D4040(buf, D_00449240);
    func_001E3EC0(cfg3, buf, p->unk14 < 3);

    res = func_0011E2B8(p->unk0C, 1);
    if (res == -3 || res == 1) func_0011E278(p->unk0C, 1);
}
