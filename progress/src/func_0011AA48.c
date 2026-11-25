extern s32 func_00196E10(void);
extern s32 func_001965A8(s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, s32);
extern s32 func_00194C40(void);
extern void func_00194A88(s32, s32);
extern s32 func_00194738(s32);
extern s32 func_0011AD90(void);
extern void func_00118F78(s32, s32, s32, s32);
extern s32 func_00193B60(void);
extern void func_00191C50(s32, s32);
extern void func_0011AC88(s32);
extern const char D_00447168[];

void func_0011AA48(s32 arg0) {
    char key[16];
    s32 t17, cfg, val;
    t17 = func_001965A8(func_00196E10());
    cfg = func_001E4280();
    func_001D4040(key, D_00447168);
    val = func_001E3650(cfg, (s32)key);
    func_00194A88(func_00194C40(), val);
    if (func_00194738(func_00194C40()) != 0)
        func_00118F78(func_0011AD90(), 2, 0, t17);
    else
        func_00118F78(func_0011AD90(), 1, 3, t17);
    if ((u32)val < 6U) {
        switch (val) {
        case 0: func_00191C50(func_00193B60(), 0xA); break;
        case 1: func_00191C50(func_00193B60(), 0xD); break;
        case 2: func_00191C50(func_00193B60(), 0x10); break;
        case 3: func_00191C50(func_00193B60(), 0x13); break;
        case 4: func_00191C50(func_00193B60(), 0x16); break;
        case 5: func_00191C50(func_00193B60(), 0x24); break;
        }
    }
    func_0011AC88(arg0);
}
