extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern s32 func_00194C40(void);
extern void func_001943D8(s32, s32);
extern void func_001944F8(s32, s32);
extern void func_00194588(s32, s32);
extern void func_00194618(s32, s32);
extern void func_001D4040(void *, char *);
extern s32 func_002A1700(void);
extern void func_002A1290(s32, void *, s32);
extern char D_00445BE0[], D_00449F18[], D_00449F60[], D_00449F88[], D_00449FB0[];

void func_00131D40(void) {
    char sp[0x10];
    s32 h1, h2, h3, h4, h5, v1, v2a, v2b, v3;
    h1 = func_001E4280();
    func_001D4040(sp, D_00449F18);
    v1 = func_001E3650(h1, (s32)sp) + 1;
    func_001943D8(func_00194C40(), v1);
    switch (v1) {
    case 0:
    case 1:
        break;
    case 2:
        v2a = func_00194C40();
        h2 = func_001E4280();
        func_001D4040(sp, D_00449F60);
        func_001944F8(v2a, func_001E3650(h2, (s32)sp) + 1);
        v2b = func_00194C40();
        h3 = func_001E4280();
        func_001D4040(sp, D_00449F88);
        func_00194588(v2b, func_001E3650(h3, (s32)sp));
        break;
    case 3:
        v3 = func_00194C40();
        h4 = func_001E4280();
        func_001D4040(sp, D_00449FB0);
        func_00194618(v3, func_001E3650(h4, (s32)sp));
        break;
    }
    h5 = func_002A1700();
    func_001D4040(sp, D_00445BE0);
    func_002A1290(h5, sp, 3);
}
