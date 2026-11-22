extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern s32 func_001E3650(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_002A1700(void);
extern void func_002A1290(s32, void *, s32);
extern char D_00445758[], D_00445770[], D_00445BE0[], D_00448090[], D_004480A8[], D_004480F0[], D_00448138[];

void func_00124360(void) {
    char sp[16], sp10[16], sp20[16], sp30[16];
    s32 temp_16, temp_16_2, temp_16_3, temp_16_4;
    s32 temp_17, temp_17_2, temp_17_3;

    temp_17 = func_001E4280();
    func_001D4040(sp, D_00448090);
    temp_16 = func_001E4280();
    func_001D4040(sp10, D_004480A8);
    func_001E3EC0(temp_17, sp, func_001E3650(temp_16, sp10));
    temp_17_2 = func_001E4280();
    func_001D4040(sp, D_00445758);
    temp_16_2 = func_001E4280();
    func_001D4040(sp20, D_004480F0);
    func_001E3EC0(temp_17_2, sp, func_001E3650(temp_16_2, sp20));
    temp_17_3 = func_001E4280();
    func_001D4040(sp, D_00445770);
    temp_16_3 = func_001E4280();
    func_001D4040(sp30, D_00448138);
    func_001E3EC0(temp_17_3, sp, func_001E3650(temp_16_3, sp30));
    temp_16_4 = func_002A1700();
    func_001D4040(sp, D_00445BE0);
    func_002A1290(temp_16_4, sp, 3);
}
