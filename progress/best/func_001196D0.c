extern void func_00119A98(s32, s32, s32);
extern s32 func_00119CB0(s32);
extern void func_0011AC88(s32);
extern s32 func_00191710(s32);
extern void func_00191C50(s32, s32);
extern s32 func_00193B60(void);
extern s32 func_00194738(s32);
extern u32 func_00194B18(s32);
extern s32 func_00194C40(void);
extern s32 func_001965A8(s32);
extern s32 func_00196E10(void);
extern void *func_001D4040(void *, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_002A1290(s32, void *, s32);
extern s32 func_002A1700(void);
extern char D_00445BE0[], D_00445BF0[], D_00445C10[], D_00445C30[], D_00445C50[], D_00445C70[];

s32 func_001196D0(s32 arg0) {
    s32 var_18 = -1;
    s32 var_17 = -1;
    s32 var_16 = -1;
    s32 temp_19 = func_00191710(func_00193B60());
    u32 temp_2 = func_00194B18(func_00194C40());
    switch (temp_2) {
    case 0:
        var_17 = 0xA;
        var_18 = 0xC;
        var_16 = 0xA;
        break;
    case 1:
        var_17 = 0xD;
        var_18 = 0xF;
        var_16 = 0xD;
        break;
    case 2:
        var_17 = 0x10;
        var_18 = 0x12;
        var_16 = 0x10;
        break;
    case 3:
        var_17 = 0x13;
        var_18 = 0x15;
        var_16 = 0x13;
        break;
    case 4:
        var_17 = 0x16;
        var_18 = 0x18;
        var_16 = 0x16;
        break;
    case 5:
        var_17 = 0x24;
        var_18 = 0x26;
        var_16 = 0x24;
        break;
    }
    s32 temp_19_2 = temp_19 + 1;
    func_00119A98(arg0, temp_19 - var_17, var_16);
    s32 temp_16 = func_002A1700();
    func_001D4040(&temp_16, &D_00445BE0);
    func_002A1290(temp_16, &temp_16, 3);
    if (var_18 < temp_19_2) {
        s32 temp_16_2 = func_001E4280();
        func_001D4040(&temp_16_2, &D_00445BF0);
        func_001E3EC0(temp_16_2, &temp_16_2, -1);
        s32 temp_16_3 = func_001E4280();
        func_001D4040(&temp_16_3, &D_00445C10);
        func_001E3EC0(temp_16_3, &temp_16_3, -1);
        s32 temp_16_4 = func_001E4280();
        func_001D4040(&temp_16_4, &D_00445C30);
        func_001E3EC0(temp_16_4, &temp_16_4, -1);
        s32 temp_17 = func_00119CB0(arg0);
        s32 temp_16_5 = func_002A1700();
        func_001D4040(&temp_16_5, &D_00445BE0);
        func_002A1290(temp_16_5, &temp_16_5, 3);
        if (temp_17 != 0) {
            if (func_00194B18(func_00194C40()) == 5) {
                s32 temp_16_6 = func_001E4280();
                func_001D4040(&temp_16_6, &D_00445C50);
                func_001E3EC0(temp_16_6, &temp_16_6, 0x13);
                if (func_00194738(func_00194C40()) != 0) {
                    s32 temp_16_7 = func_001E4280();
                    func_001D4040(&temp_16_7, &D_00445C70);
                    func_001E3EC0(temp_16_7, &temp_16_7, 0x20);
                    return 0x2B;
                }
                s32 temp_16_8 = func_001E4280();
                func_001D4040(&temp_16_8, &D_00445C70);
                func_001E3EC0(temp_16_8, &temp_16_8, 2);
                return 0x2B;
            }
            s32 temp_17_2 = func_001965A8(func_00196E10());
            s32 temp_16_9 = (func_00194B18(func_00194C40()) * 3) + (temp_17_2 + 3);
            s32 temp_17_3 = func_001E4280();
            func_001D4040(&temp_17_3, &D_00445C50);
            func_001E3EC0(temp_17_3, &temp_17_3, temp_16_9);
            s32 temp_16_10 = func_001E4280();
            func_001D4040(&temp_16_10, &D_00445C70);
            func_001E3EC0(temp_16_10, &temp_16_10, 0x11);
            return 0x2B;
        }
        if (func_00194B18(func_00194C40()) == 5) {
            s32 var_2_2 = func_00194738(func_00194C40());
            return var_2_2 != 0 ? 0x20 : 2;
        }
        return 0x11;
    }
    func_0011AC88(arg0);
    func_00191C50(func_00193B60(), temp_19_2);
    s32 var_2_2 = func_00194738(func_00194C40());
    return var_2_2 != 0 ? 0x35 : 0x24;
}
