extern s32 func_00116670(s32);
extern s32 func_00116D08(void);
extern s32 func_00191630(void);
extern s32 func_00191D00(void);
extern s32 func_00191D58(s32);
extern s32 func_00191E60(s32);
extern s32 func_00191EB8(s32);
extern s32 func_001920D8(s32);
extern s32 func_00192780(s32, s32, s32);
extern s32 func_00192BE0(s32, s32, s32);
extern s32 func_00193B60(void);
extern s32 func_00194738(void);
extern s32 func_00194C40(void);
extern s32 func_001A1380(void);
extern s32 func_001A1650(void);
extern s32 func_001D4040(void *, const char *);
extern s32 func_001E33C8(s32, s32);
extern s32 func_001E3598(s32, s32);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E3D10(void *, void *, s32);
extern s32 func_001E3EC0(s32, s32, s32);
extern s32 func_001E4280(void);

extern const char D_00444B00[];
extern const char D_00444B18[];
extern const char D_00444BA8[];
extern const char D_00444BC8[];
extern const char D_00444BE8[];
extern const char D_00444C10[];
extern const char D_00444C38[];
extern const char D_00444C48[];
extern const char D_00444C58[];

void func_00101108(void) {
    char stk[0x60];
    s32 s0, s1, s2, s3;
    s32 v;

    func_00194C40();
    if (func_00194738() == 0) goto L_00101280;

    v = func_00193B60();
    s0 = 2;
    func_00192BE0(v, 0, 30);
    v = func_00193B60();
    func_00192BE0(v, 1, 31);
    v = func_00193B60();
    func_00191EB8(v);
    v = func_00193B60();
    func_00192780(v, 0, 5);
    v = func_00193B60();
    func_00192780(v, 1, 6);

    func_001D4040(stk, D_00444BA8);
    func_001D4040(stk + 0x10, D_00444BC8);
    func_001E4280();
    s1 = func_001E4280();

    func_001D4040(stk + 0x20, D_00444BE8);
    s0 = s1;
    s2 = (s32)(stk + 0x20);
    v = func_001E3650(s0, s2);
    func_001E3EC0(s0, (s32)stk, v);

    s2 = func_001E4280();
    s0 = func_001E4280();
    func_001D4040(s0, D_00444C10);
    s1 = s2;
    s2 = (s32)(stk + 0x20);
    v = func_001E3650(s0, s2);
    s3 = func_001E4280();
    func_001E3EC0(s1, s2, v);

    s2 = func_001E4280();
    goto L_00101330;

L_00101280:
    func_00193B60();
    v = func_00191630();
    if (v == 14) goto L_0010132C;
    s0 = 0;
    func_00193B60();
    v = func_00191630();
    if (v == 15) goto L_0010132C;
    s0 = 0;
    func_00193B60();
    s0 = 1;
    func_00192BE0(v, 0, 30);
    func_00193B60();
    func_00191EB8(v);
    func_001D4040(stk, D_00444BA8);
    func_001E4280();
    func_001E3EC0((s32)stk, (s32)stk, -1);
    func_001E4280();

L_0010131C:
    func_001E33C8(0, 0);

L_0010132C:
    goto L_00101330;

L_00101330:
    func_001D4040(stk, D_00444C38);
    func_001E4280();
    func_001E3EC0((s32)stk, (s32)stk, 0);
    func_001E4280();
    func_001E33C8(0, 0);
    func_00193B60();
    v = func_00191630();
    if ((u32)(v - 1) >= 15) goto L_00101648;

    switch (v) {
        case 1: goto L_001013A4;
        case 2: goto L_001015B0;
        case 3: goto L_001013C0;
        case 4: goto L_00101648;
        case 5: goto L_00101498;
        case 6: goto L_00101448;
        case 7: goto L_001014F4;
        case 8: goto L_00101524;
        case 9: goto L_001015B0;
        case 10: goto L_00101418;
        case 11: goto L_00101418;
        case 12: goto L_001015B0;
        case 13: goto L_001015B0;
        case 14: goto L_00101574;
        case 15: goto L_001015E4;
    }

L_001013A4:
    func_00193B60();
    func_00191E60(s0);
    goto L_001015B0;

L_001013C0:
    func_00193B60();
    func_00191E60(s0);
    func_00193B60();
    func_00191D00();
    func_00193B60();
    func_00191D58(0);
    func_00193B60();
    func_00191D58(2);
    goto L_00101648;

L_00101418:
    func_00193B60();
    func_00191D00();
    func_00193B60();
    func_00191D58(2);
    goto L_00101648;

L_00101448:
    func_00194C40();
    func_00194738();
    if (func_00194738() == 0) goto L_0010147C;
    func_00193B60();
    func_00191E60(2);
    goto L_001015B0;
L_0010147C:
    func_00193B60();
    func_00191E60(4);
    goto L_001015B0;

L_00101498:
    func_00194C40();
    func_00194738();
    if (func_00194738() == 0) goto L_001014CC;
    func_00193B60();
    func_00191E60(2);
    goto L_001014E0;
L_001014CC:
    func_00193B60();
    func_00191E60(4);
L_001014E0:
    func_00193B60();
    goto L_001015C0;

L_001014F4:
    func_00193B60();
    func_00191D00();
    func_00193B60();
    func_00191D58(1);
    goto L_00101648;

L_00101524:
    func_00194C40();
    func_00194738();
    if (func_00194738() == 0) goto L_00101558;
    func_00193B60();
    func_00191E60(2);
    goto L_001015B0;
L_00101558:
    func_00193B60();
    func_00191E60(4);
    goto L_001015B0;

L_00101574:
    func_00193B60();
    func_00191E60(4);
    func_00193B60();
    func_00191EB8(0);
    func_00116D08();
    func_00116670(0);
    goto L_001015B0;

L_001015B0:
    func_00193B60();
    func_00191D00();
    func_00193B60();
    func_00191D58(0);
    goto L_00101648;

L_001015C0:
    func_00191D00();
    func_00193B60();
    func_00191D58(0);
    goto L_00101648;

L_001015E4:
    func_00193B60();
    func_00191E60(6);
    func_00193B60();
    func_00191EB8(0);
    func_00116D08();
    func_00116670(1);
    func_00193B60();
    func_00191D00();
    func_00193B60();
    func_00191D58(0);
    goto L_00101648;

L_00101648:
    func_001E4280();
    s3 = 0x30;
    func_001D4040(stk + 0x30, D_00444C48);
    func_001E3598(s3, 0);

    if (v) goto L_001016EC;
    func_001E4280();
    func_001D4040(stk + 0x40, D_00444B18);
    func_001E3598((s32)(stk + 0x40), s2);
    func_001E4280();
    func_001D4040(stk + 0x10, D_00444C58);
    func_001E3D10(stk + 0x30, stk + 0x40, 0);
    func_001E4280();
    s2 = func_001E4280();
    goto L_00101770;

L_001016EC:
    func_001E4280();
    func_001D4040(stk + 0x40, D_00444B00);
    func_001E3598((s32)(stk + 0x40), s2);
    if (s2) goto L_00101790;
    func_001A1650();
    func_001A1380();
    func_001E4280();
    func_001D4040(stk + 0x50, D_00444C58);
    func_001E3D10(stk + 0x30, stk + 0x50, 1);
    func_001E4280();
    goto L_00101770;

L_00101790:
    func_001A1650();
    func_001A1380();
    func_001E4280();
    func_001D4040(stk + 0x50, D_00444C58);
    func_001E3D10(stk + 0x30, stk + 0x50, 0);
    func_001E4280();
    func_001D4040(stk + 0x40, D_00444B18);
    func_001E3D10(stk + 0x30, stk + 0x40, 0);

L_00101770:
    func_001E3D10(stk + 0x40, stk + 0x50, 0);
    func_001E4280();

L_00101800:
    return;
}
