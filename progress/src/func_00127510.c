extern void func_00126890(void *);
extern void func_00126C98(void *);
extern void *func_00127378(char *);
extern void func_00127A60(void *);
extern void func_00128790(void *);
extern void func_001D4040(void *, char *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern s32 func_003F9698(const char *, ...);

extern char D_00448748[];
extern char D_00448AB0[];
extern char D_00448AA0[];
extern char D_00448828[];

void func_00127510(void *arg0) {
    char spbuf[16];
    s32 *p = (s32 *)arg0;
    void *r;

    r = func_00127378(D_00448AB0);
    if (((s32 *)r)[0x30 / 4] == 0) return;
    {
        s32 temp = func_001E4280();
        func_001D4040(spbuf, D_00448748);
        if (func_001E3650(temp, (s32)spbuf) == 0) {
            if (p[0x74 / 4] != 0) {
                func_00128790(arg0);
                p[0x38 / 4] = 0;
                p[0x54 / 4] = 1;
                p[0x74 / 4] = 0;
            } else {
                p[0x64 / 4] = 1;
                func_00126C98(arg0);
                p[0x54 / 4] = 1;
            }
        } else {
            p[0x38 / 4] = 0;
            p[0x54 / 4] = 1;
            p[0x64 / 4] = 0;
            p[0x30 / 4] = 0;
        }
    }
}

void func_00127458(void *arg0) {
    char spbuf[16];
    s32 *p = (s32 *)arg0;
    void *r;

    r = func_00127378(D_00448AA0);
    if (((s32 *)r)[0x30 / 4] == 0) return;
    {
        s32 temp = func_001E4280();
        func_001D4040(spbuf, D_00448748);
        if (func_001E3650(temp, (s32)spbuf) == 0) {
            if (p[0x74 / 4] != 0) {
                func_00127A60(arg0);
                p[0x34 / 4] = 0;
                p[0x3C / 4] = 1;
            } else {
                p[0x5C / 4] = 1;
                func_00126890(arg0);
                p[0x54 / 4] = 1;
            }
        } else {
            p[0x34 / 4] = 0;
            p[0x54 / 4] = 1;
            p[0x5C / 4] = 0;
            p[0x30 / 4] = 0;
        }
    }
}

s32 func_00126828(s32 arg0, s32 arg1) {
    s32 var_2 = func_003F9698(D_00448828, arg1);
    var_2 = 3;
    if (arg1 < -9) return var_2;
    var_2 = 0;
    if (arg1 >= 0) return var_2;
    switch (arg1) {
    case -3: return 4;
    case -2: return 5;
    default: return 2;
    }
}
