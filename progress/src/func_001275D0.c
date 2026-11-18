extern void func_00126890(void*);
extern void* func_00127378(char*);
extern void func_001D4040(void*, char*);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void*);
extern char D_00448748[], D_00448AC0[];

void func_001275D0(void *arg0) {
    char spbuf[16];
    s32 *p = (s32*)arg0;
    void *r;
    s32 temp;
    r = func_00127378(D_00448AC0);
    if (((s32*)r)[0x30/4] == 0) return;
    temp = func_001E4280();
    func_001D4040(spbuf, D_00448748);
    if (func_001E3650(temp, spbuf) == 0) {
        p[0x5C/4] = 1;
        func_00126890(arg0);
        p[0x54/4] = 1;
    } else {
        p[0x5C/4] = 0;
        p[0x34/4] = 0;
        p[0x54/4] = 1;
        p[0x30/4] = 0;
    }
}
