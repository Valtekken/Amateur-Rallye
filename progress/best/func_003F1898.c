extern s32 PollSema_2(s32), SignalSema_2(s32);
extern s32 ReferThreadStatus_2(s32, void *, s32 *);
extern s32 func_003F1DA0(s32);
extern s32 func_00405CC0(void *, s32, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_00404EA8(char *, void *, ...);
extern void func_004055A0(void *, s32);
extern void func_00405650(s32);
extern void func_003F1668(void);
extern s32 D_0043E710, D_0043E71C, D_0043E728, D_0043E740;
extern char D_0048B4A0[], D_0048B4C0[], D_0048B4D8[], D_0048B4E8[], D_0048B4F8[];
extern s32 D_0049D590;
extern u8 D_0049D598[];
extern u8 D_0049D600[], D_0049D780[];
extern s32 D_0049D740[];

s32 func_003F1898(s32 *arg0, u8 *arg1) {
    s32 result = 0, i, spin, id;
    char *name = (char *)((u32)D_0049D600 | 0x20000020);

    func_003F1668();
    if (D_0043E728 == PollSema_2(D_0043E728)) {
        D_0043E71C = 1;
        ReferThreadStatus_2(D_0049D590, D_0049D598, &D_0043E71C);
        if (func_003F1DA0(1) == 0) {
            func_00405650(0);
            if (D_0043E740 < 0) {
                while (func_00405CC0(D_0049D780, 0x80000597, 0) < 0) {
                    spin = 0x000FFFFF;
                    if (D_0043E710 > 0) func_00404EA8(D_0048B4A0, 0);
                    while (spin != -1) spin += 0x000FFFFF;
                }
                if (D_0049D780[0x24] == 0) {
                    spin = 0x000FFFFF;
                    while (spin != -1) spin += 0x000FFFFF;
                }
                D_0043E740 = 0;
            }
            D_0049D600[0x24] = *arg1;
            for (i = 0; i < 0x100 && D_0049D600[0x24 + i] != 0; i++) {
                D_0049D600[0x24 + i] = arg1[i];
            }
            if (i == 0x100) D_0049D600[0x123] = 0;
            *(char **)&D_0049D600[0x124] = (char *)D_0049D600;
            if (D_0043E710 > 0) func_00404EA8(D_0048B4C0, &D_0049D600[0x24]);
            func_004055A0(D_0049D600, 0x128);
            if (func_00405E90(D_0049D780, 0, 0, D_0049D600, 0x128, D_0049D740, 4, 0, 0) >= 0) {
                for (i = 0; i < 0x24; i++) ((char *)arg0)[i] = name[i];
                if (D_0043E710 > 0) {
                    func_00404EA8(D_0048B4D8, (char *)arg0 + 8, 0);
                    if (D_0043E710 > 0) {
                        func_00404EA8(D_0048B4E8, (void *)arg0[1]);
                        if (D_0043E710 > 0) func_00404EA8(D_0048B4F8, (void *)arg0[0]);
                    }
                }
                id = D_0049D740[0];
                SignalSema_2(D_0043E728);
                return id;
            }
            SignalSema_2(D_0043E728);
            return 0;
        }
    }
    return result;
}
