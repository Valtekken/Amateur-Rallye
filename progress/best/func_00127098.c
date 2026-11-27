extern void func_001266E8(void);
extern void func_00126890(void *a);
extern void func_00126C98(void *a);
extern void func_00127A60(void *a);
extern void func_00127AF0(void *a);
extern void func_00127BE8(void *a);
extern void func_00127CE8(void *a);
extern void func_00127F68(void *a);
extern void func_00128058(void *a);
extern void func_00128148(void *a);
extern void func_00128238(void *a);
extern void func_00128328(void *a);
extern void func_001284B8(void *a);
extern void func_001285B0(void *a);
extern void func_001286E8(void *a);
extern void func_00128828(void *a);
extern void func_001288C0(void *a);
extern void func_00128960(void *a);
extern s32 func_002B4658(s32 a, s32 b, s32 c);
extern s32 func_002B4740(s32 a);
extern void func_003F9698(char *s);
extern char D_00448A50[];

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[8];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 pad2[4];
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    u8 pad3[0xC];
    s32 unk60;
    u8 pad4[0x10];
    s32 unk74;
} S_127098_arg;

void func_00127098(void *arg0) {
    S_127098_arg *a = arg0;
    s32 temp;
    s32 r;

    a->unk74 = 0;
    if (a->unk20 == 0) {
        func_001266E8();
        a->unk20 = 0;
    }
    temp = a->unk14;
    switch (temp) {
    case 0:
        if (a->unk34 != 0) {
            func_00126890(a);
            a->unk30 = 0;
        } else if (a->unk50 != 0) {
            func_001284B8(a);
            a->unk30 = 0;
        } else if (a->unk48 != 0) {
            r = func_002B4658(func_002B4740(a->unk38), 0, 0);
            a->unk30 = 0;
            if (r != 0) {
                if (a->unk60 != 0) {
                    func_00128058(a);
                    a->unk30 = 0;
                } else {
                    func_00127F68(a);
                    a->unk30 = 0;
                }
            } else {
                func_00128328(a);
                a->unk30 = 0;
            }
        } else if (a->unk38 != 0) {
            func_00126C98(a);
            a->unk30 = 0;
        } else if (a->unk4C != 0) {
            func_00128828(a);
            a->unk30 = 0;
        } else {
            if (a->unk30 == 0) goto L_skip;
            a->unk30 = 0;
            func_00127A60(a);
        L_skip:;
        }
        break;
    case 1:
        if (a->unk44 == 0) {
            func_00127CE8(a);
        }
        break;
    case 2:
        if (a->unk34 != 0 || a->unk48 != 0) {
            func_00128148(a);
        } else if (a->unk3C != 0 || a->unk50 != 0) {
            func_001285B0(a);
        } else if (a->unk38 != 0 || a->unk4C != 0) {
            func_00128960(a);
        }
        break;
    case 3:
        if (a->unk38 != 0 && a->unk28 == 0) {
            func_001286E8(a);
        } else if (a->unk34 != 0 && a->unk24 == 0) {
            func_00127AF0(a);
        } else if (a->unk4C != 0) {
            func_001288C0(a);
        } else if (a->unk48 != 0) {
            func_00128238(a);
        }
        break;
    case 4:
        if (a->unk2C == 0) {
            func_00127BE8(a);
        }
        break;
    case 5:
        if (a->unk38 != 0) {
            a->unk74 = 1;
            func_00126C98(a);
        } else if (a->unk34 != 0 && a->unk3C == 0) {
            a->unk74 = 1;
            func_00126890(a);
        }
        break;
    case 6:
        func_003F9698(D_00448A50);
        if (a->unk30 != 0) {
            func_00127A60(a);
            a->unk30 = 0;
        }
        break;
    }
}
