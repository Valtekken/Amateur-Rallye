extern void ExitDeleteThread_2(void);
extern void WaitSema_2(s32);
extern void func_00404EA8(s32 *, void (*)(s32), s32);

extern s32 D_0043E710;
extern s32 D_0043E714;
extern s32 D_0043E720;
extern s32 D_0043E730;
extern s32 D_0043E754;
extern s32 D_0043E758;
extern s32 D_0048B478;
extern void (*D_0049D580)(s32);
extern s32 D_0049D58C;

void func_003F1430(void) {
    s32 temp_2;

    while (1) {
        WaitSema_2(D_0043E720);
        temp_2 = D_0043E710;
        if (D_0043E754 == -1) {
            D_0043E730 = 0;
            D_0043E754 = 0;
            D_0043E714 = 0;
            D_0049D58C = 0;
            ExitDeleteThread_2();
            temp_2 = D_0043E710;
        }
        if (temp_2 > 0) {
            func_00404EA8(&D_0048B478, D_0049D580, D_0043E758);
        }
        if (D_0049D580 != 0 && D_0043E758 != 0) {
            D_0049D580(D_0043E758);
        }
        D_0043E730 = 0;
    }
}
