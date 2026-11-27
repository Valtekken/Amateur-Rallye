extern void func_00110158(s32, s32);
extern s32 func_00110430(void);
extern void func_0011DFB8(s32);
extern s32 func_0011E2B8(s32, s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, s32, s32);
extern void func_00127098(void *);
extern void func_001273C8(void *);
extern void func_00127458(void *);
extern void func_00127510(void *);
extern void func_001275D0(void *);
extern void func_00127668(void *);
extern void func_00127A60(void *);
extern void func_00128B98(void *);
extern void func_00128C30(void *);
extern void func_001D4040(char *, char *);
extern void func_001E3EC0(s32, char *, s32);
extern s32 func_001E4280(void);
extern void func_00297398(s32, s32);
extern void func_002973F0(s32, s32);
extern s32 func_00297500(void);
extern void func_003F9698(char *);

extern s32 D_0040DCD8;
extern char D_00448748[];
extern char D_00448768[];
extern char D_00448780[];

typedef struct Obj {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x20];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 pad40[4];
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    u8 pad5C[0xC];
    s32 unk68;
    u8 pad6C[4];
    s32 unk70;
    u8 pad74[0x70];
    s32 unkE4;
} Obj;

void func_00126440(Obj *arg0) {
    s32 r;
    char buf[16];

    func_0011E650(arg0->unkC, 6, 0);
    func_0011DFB8(arg0->unkC);
    if (func_0011E528(arg0->unkC) != 0) {
        return;
    }

    if (D_0040DCD8 >= 0xB) {
        if (arg0->unkE4 == 0) {
            arg0->unkE4 = 1;
            func_00110158(func_00110430(), 1);
        }
    }
    D_0040DCD8++;

    if (arg0->unk54 != 0) {
        func_00297398(func_00297500(), arg0->unk70);
        arg0->unk54 = 0;
    }

    if (arg0->unk3C != 0) {
        s32 tmp;
        func_00297398(func_00297500(), 3);
        tmp = func_001E4280();
        func_001D4040(buf, D_00448748);
        func_001E3EC0(tmp, buf, 1);
        func_002973F0(func_00297500(), 4);
        arg0->unk3C = 0;
    }

    func_00127668(arg0);

    if (arg0->unk68 != 0) {
        func_00128B98(arg0);
        return;
    }

    if (arg0->unk44 == 0 && arg0->unk48 == 0 && arg0->unk4C == 0 && arg0->unk50 == 0) {
        goto check30;
    }
    if (arg0->unk58 != 0) {
        goto check30;
    }
    func_00127098(arg0);
    return;

check30:
    if (arg0->unk30 == 0) {
        goto doswitch;
    }
    if (arg0->unk58 != 0) {
        goto doswitch;
    }
    func_00127098(arg0);
    return;

doswitch:
    r = func_0011E2B8(arg0->unkC, 1);
    switch (r) {
    case -3:
        func_00128C30(arg0);
        break;
    case 1:
        func_003F9698(D_00448768);
        func_00127A60(arg0);
        arg0->unk34 = 0;
        arg0->unk70 = 1;
        arg0->unk38 = 1;
        arg0->unk44 = 1;
        break;
    case 2:
        func_003F9698(D_00448780);
        func_00127A60(arg0);
        arg0->unk70 = 2;
        arg0->unk44 = 1;
        arg0->unk34 = 1;
        arg0->unk38 = 0;
        break;
    case 3:
        func_001273C8(arg0);
        break;
    case 4:
        func_00127458(arg0);
        break;
    case 5:
        func_001275D0(arg0);
        break;
    case 6:
        func_00127510(arg0);
        break;
    }
}
