extern void func_003E7D78(s32, s32, s32);
extern void func_003EF518(void *, s32);
extern void func_003F2020(s32);
extern void func_003F24F8(s32);
extern void func_003F9698(void *);
extern void func_003FA634(void *, void *);
extern void func_00405650(s32);
extern void func_00406E70(void);
extern s32 func_0040A948(void *, s32, s32);
extern s32 func_0040AE10(void);
extern s32 func_0040AE48(void *);

extern u8 D_0048B2C8[];
extern u8 D_0048B2E8[];
extern u8 D_0048B300[];
extern u8 D_0048B320[];
extern u8 D_0048B340[];
extern u8 D_0048B350[];
extern s32 *D_0043C2E0;

s32 func_003EF558(s32 *arg0)
{
    u8 sp[0x100];
    s32 **var_17;
    s32 temp_2;
    s32 var_2, var_3;

    if (*arg0 != 0) return *arg0;

    func_00405650(0);
    func_003F2020(0);
loop_3:
    if (func_0040AE48(D_0048B2C8) == 0) { func_003E7D78(0x7C4500, 0x912D66, 8); goto loop_3; }
    func_003E7D78(0x7C4500, 0xDEA6C1, 0);
loop_7:
    if (func_0040AE10() == 0) { func_003E7D78(0x7C4500, 0x40, 8); goto loop_7; }
    func_003E7D78(0x7C4500, 0xFF, 0);
    func_00405650(0);
    func_003F2020(0);
    func_003F9698(D_0048B2E8);
    func_003F24F8(2);
    func_00406E70();
    func_003E7D78(0x7C4500, 0xA0FFA0, 0);
loop_10:
    temp_2 = func_0040A948(D_0048B300, 0, 0);
    if (temp_2 < 0) { func_003E7D78(0x7C4500, 0xA0A0FF, 8); goto loop_10; }
    func_003E7D78(0x7C4500, 0xA0A0FF, 0);
loop_14:
    if (func_0040A948(D_0048B320, 0, 0) < 0) { func_003E7D78(0x7C4500, 0xFFFF, 8); goto loop_14; }
    var_17 = (s32 **)&D_0043C2E0;
    func_003E7D78(0x7C4500, 0xA0FFFF, 0);
    if (D_0043C2E0 != NULL) {
    loop_17:
        func_003FA634(sp, (void *)var_17[0]);
        func_003FA634(sp, D_0048B350);
    loop_19:
        if (func_0040A948(sp, 0, 0) < 0) {
            func_003E7D78(0x7C4500, var_17[1], 8);
            func_003EF518(sp, temp_2);
            goto loop_19;
        }
        var_2 = 0x3E8;
    loop_27:
        if (var_2 >= 0) {
            var_2 -= 1;
            var_3 = 0x30;
        loop_24:
            var_3 -= 1;
            if (var_3 >= 0) goto loop_24;
            goto loop_27;
        }
        var_17 = (s32 **)((u8 *)var_17 + 8);
        if (*var_17 != NULL) goto loop_17;
    }
    func_003E7D78(0x7C4500, 0xFF00, 0);
    *arg0 = 1;
    return *arg0;
}
