extern void func_0011DFB8(s32);
extern void func_0011E278(s32, s32);
extern s32 func_0011E2B8(s32, s32);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, s32, s32);
extern s32 func_00137D30(void *);
extern void func_00137F80(void *, s32);
extern void func_00138090(void *, s32);
extern void func_00191C50(s32, s32);
extern s32 func_00193B60(void);
extern void func_00193D08(s32, s32);
extern s32 func_00193FD8(s32);
extern void func_00194348(s32, s32);
extern s32 func_00194738(s32);
extern s32 func_00194C40(void);
extern void func_001D4040(void *, void *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern s32 func_002971B0(s32);
extern s32 func_00297500(void);
extern void func_002A1290(s32, void *, s32);
extern s32 func_002A1700(void);

extern u8 D_00445BE0[];
extern u8 D_00447398[];
extern u8 D_004473B0[];
extern u8 D_00447E10[];

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14[1];
} S_func_00137530_arg0;

void func_00137530(S_func_00137530_arg0 *arg0) {
    s32 temp_16;
    s32 temp_2;
    char sp[0x10];

    func_0011E650(arg0->unkC, 3, 0);
    func_0011DFB8(arg0->unkC);
    if (func_0011E528(arg0->unkC) == 0) {
        func_00193D08(func_00194C40(), 0);
        temp_2 = func_0011E2B8(arg0->unkC, 1);
        switch (temp_2) {
        case 1:
        case 2:
            temp_16 = func_00193B60();
            func_00191C50(temp_16, func_00137D30((void *)arg0));
            if (func_00193FD8(func_00194C40()) != 0) {
                s32 temp_16_2 = func_00194C40();
                func_00194348(temp_16_2, func_00137D30((void *)arg0));
                temp_16 = func_002A1700();
                func_001D4040(sp, D_00445BE0);
                func_002A1290(temp_16, sp, 3);
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(arg0->unkC, 0x17);
                } else {
                    func_0011E278(arg0->unkC, 0x1B);
                }
            } else {
                temp_16 = func_001E4280();
                func_001D4040(sp, D_00447E10);
                func_001E3EC0(temp_16, sp, 0);
                func_0011E278(arg0->unkC, 6);
            }
            break;
        case -3:
            if (func_00193FD8(func_00194C40()) != 0) {
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(arg0->unkC, 0x17);
                } else {
                    func_0011E278(arg0->unkC, 0x1B);
                }
            }
            break;
        case -5:
            if (func_002971B0(func_00297500()) == 2) {
                func_00138090((void *)arg0, 1);
            } else {
                func_00137F80((void *)arg0, 1);
            }
            break;
        case -4:
            if (func_002971B0(func_00297500()) == 2) {
                func_00138090((void *)arg0, 0);
            } else {
                func_00137F80((void *)arg0, 0);
            }
            break;
        }
        temp_16 = func_001E4280();
        func_001D4040(sp, D_00447398);
        func_001E3EC0(temp_16, sp, arg0->unk10);
        temp_16 = func_001E4280();
        func_001D4040(sp, D_004473B0);
        func_001E3EC0(temp_16, sp, arg0->unk14[arg0->unk10]);
    }
}
