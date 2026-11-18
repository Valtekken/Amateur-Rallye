extern void func_001D4040(void *, void *);
extern s32 func_001E3598(s32, void *);
extern s32 func_001E3650(s32, void *);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E4280(void);
extern void *func_002DDA20(...);
extern void func_002EF7D0(void *, s32, s32);
extern void func_002EF870(void *, s32);
extern void func_002F9C30(void *);
extern void func_002FDDF8(s32);
extern void func_00302FF0(s32);
extern void func_00345A10(s32);
extern s32 func_003F93CC(s32, s32, s32);
extern s32 D_0042DCA0, D_0042DCA4, D_0042DCA8, D_0042DCAC;
extern s32 D_0042DCB0, D_0042DCB4, D_0042DCB8, D_0042DCBC;
extern s32 D_0042DD30, D_0042DD34, D_0042DD38, D_0042DD40, D_0042DD44;
extern s32 D_0042DD48, D_0042DD4C, D_0042DD50, D_0042DD54;
extern char D_004858A0[], D_004858B0[], D_004858C8[], D_004858E0[], D_004858F0[];
extern char D_0049B348[], D_0049B350[], D_0049B358[], D_0049B360[], D_0049B368[];
extern char D_0042A950[];

void func_0032F988(char *self) {
    s32 var_17 = 0, var_20 = 0;
    s32 *p;
    D_0042DD38 = 0;
    if (D_0042DD40 == 0) { D_0042DD40 = 1; func_002FDDF8(*(s32 *)func_002DDA20(&D_0042DD40)); }
    if (D_0042DD44 == 0) { func_001D4040(D_0049B348, D_004858A0); D_0042DD44 = 1; }
    if (D_0042DD48 == 0) { func_001D4040(D_0049B350, D_004858B0); D_0042DD48 = 1; }
    if (D_0042DD4C == 0) { func_001D4040(D_0049B358, D_004858C8); D_0042DD4C = 1; }
    if (D_0042DD50 == 0) { func_001D4040(D_0049B360, D_004858E0); D_0042DD50 = 1; }
    if (D_0042DD54 == 0) { func_001D4040(D_0049B368, D_004858F0); D_0042DD54 = 1; }
    if (func_001E38C8(func_001E4280(), D_0049B360)) var_17 = func_001E3650(func_001E4280(), D_0049B360);
    if (func_001E38C8(func_001E4280(), D_0049B368)) var_20 = func_001E3650(func_001E4280(), D_0049B368);
    func_002EF7D0(D_0042A950, var_17, var_20);
    if (func_001E38C8(func_001E4280(), D_0049B358)) D_0042DD30 = func_001E3598(func_001E4280(), D_0049B358);
    if (func_001E38C8(func_001E4280(), D_0049B348)) func_002EF870(D_0042A950, func_001E3650(func_001E4280(), D_0049B348));
    D_0042DD34 = 1;
    if (func_001E38C8(func_001E4280(), D_0049B350)) D_0042DD34 = func_001E3598(func_001E4280(), D_0049B350) ^ 1;
    D_0042DCB0 = 0; D_0042DCB4 = 0; D_0042DCB8 = 0; D_0042DCBC = 0;
    D_0042DCA8 = 0; D_0042DCAC = 0; D_0042DCA0 = 0; D_0042DCA4 = 0;
    *(s32 *)(self + 0x404) = *(s32 *)(self + 0x404) + 1;
    func_00302FF0(*(s32 *)func_002DDA20(&D_0042DCA4, &D_0042DCA8, &D_0042DCAC, &D_0042DCB0, &D_0042DCB4, &D_0042DCB8, &D_0042DCBC));
    p = *(s32 **)(*(char **)(self + 0x30) + 0x144);
    p[0x1F] = *(s32 *)(self + 0x404);
    p[0x20] = 0;
    func_002F9C30(p);
    {
        s32 b = *(s32 *)(self + 0x20);
        s32 e = *(s32 *)(self + 0x24);
        func_003F93CC(b, e, 0);
        *(s32 *)(self + 0x24) = e - (e - b);
    }
    func_00345A10(*(s32 *)(self + 0x464));
    {
        char *v = *(char **)(self + 0x30);
        char *vt = *(char **)(v + 0x148);
        (*(void (**)(char *, s32, char *))(vt + 0x14))(v + *(s16 *)(vt + 0x10), *(s32 *)(self + 0x404), v);
    }
}
