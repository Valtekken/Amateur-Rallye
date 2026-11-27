extern int func_003F1E40(int);
extern void func_003F1668(int *, int, int);
extern void func_003F1700(void);
extern void func_003F1830(void);
extern void func_00404EA8(void *, int, int);
extern void func_004055A0(int *, int);
extern void func_00405650(int);
extern int func_00405CC0(void *, int, int);
extern int func_00405E90(void *, int, int, int *, int, void *, int, int, int);
extern int GetThreadId_2(void);

extern int D_0043E710, D_0043E720, D_0043E724, D_0043E728, D_0043E72C;
extern int D_0043E734, D_0043E738, D_0043E73C, D_0043E740, D_0043E744, D_0043E748, D_0043E74C, D_0043E750;
extern char D_0043F900[], D_0048B5B0[], D_0048B5D0[], D_0049D7A8[], D_0049D800[];
extern int D_0049D590;

int func_003F2020(int arg0) {
    int var_2 = 0;
    if (func_003F1E40(1) == 0) {
        func_00405650(0);
        int temp_2 = GetThreadId_2();
        D_0043E724 = 1;
        D_0049D590 = temp_2;
        D_0043E73C = -1;
        D_0043E740 = -1;
        D_0043E738 = -1;
        D_0043E748 = -1;
        D_0043E744 = -1;
        D_0043E734 = 0;
        D_0043E750 += 1;
        D_0043E74C = -1;
        while (1) {
            int temp_2_2 = func_00405CC0(D_0049D7A8, 0x80000592, 0);
            if (temp_2_2 < 0) {
                if (D_0043E710 > 0) {
                    func_00404EA8(D_0048B5B0, temp_2_2, D_0043E750);
                }
                for (volatile int i = 0xFFFFF; i != -1; i--) { }
                continue;
            }
            if (*(int *)(D_0049D7A8 + 0x24) == 0) {
                for (volatile int i = 0xFFFFF; i != -1; i--) { }
                continue;
            }
            *(int *)D_0049D800 = arg0;
            D_0043E74C = 0;
            func_004055A0((int *)D_0049D800, 4);
            if (func_00405E90(D_0049D7A8, 0, 0, (int *)D_0049D800, 4, (void *)D_0043F900, 0x10, 0, 0) < 0) {
                D_0043E724 = 0;
                return 0;
            }
            int var_6 = *(int *)(D_0043F900 + 0xC);
            int temp_5 = *(int *)(D_0043F900 + 0x4);
            int var_16 = 1;
            int temp_4 = *(int *)(D_0043F900 + 0x8);
            /* apply | 0x20000000 */
            var_6 = *(int *)((unsigned int)(D_0043F900 + 0xC) | 0x20000000);
            temp_5 = *(int *)((unsigned int)(D_0043F900 + 0x4) | 0x20000000);
            temp_4 = *(int *)((unsigned int)(D_0043F900 + 0x8) | 0x20000000);
            if (var_6 != 0xFF) {
                if (var_6 == 0xFE) {
                    D_0043E710 = 1;
                } else {
                    int a = (temp_5 > -1) ? temp_5 : (temp_5 + 0xFF);
                    a >>= 8;
                    int b = (temp_4 > -1) ? temp_4 : (temp_4 + 0xFF);
                    b >>= 8;
                    if (a < 2 || b < 2) {
                        var_16 = 2;
                    }
                }
            }
            D_0043E724 = 0;
            if (arg0 >= 0 && arg0 >= 2 && arg0 == 5) {
                if (D_0043E710 > 0) {
                    func_00404EA8(D_0048B5D0, temp_5, var_6);
                }
                func_003F1700();
                D_0043E728 = -1;
                D_0043E72C = -1;
                D_0043E720 = -1;
            } else {
                func_003F1668(&D_0043E724, temp_5, var_6);
                func_003F1830();
            }
            var_2 = var_16;
            return var_2;
        }
    }
    return var_2;
}
