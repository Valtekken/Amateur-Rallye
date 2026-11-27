extern void func_001D4040(void *, char *);
extern void func_001E3EC0(s32, void *, s32);
extern char D_0044AA08[], D_0044ABA0[];

typedef struct {
    char pad[0x10];
    s32 mode;
    s32 v[8];
} A;

void func_00137E20(A *arg0, s32 arg1) {
    char sp[0x10];
    s32 h1, h2;
    if (arg1 < 0xA) {
        arg0->v[6] = arg1;
        arg0->mode = 6;
    } else if (arg1 < 0xD) {
        arg0->mode = 0;
        arg0->v[0] = arg1 - 0xA;
    } else if (arg1 < 0x10) {
        arg0->mode = 1;
        arg0->v[1] = arg1 - 0xD;
    } else if (arg1 < 0x13) {
        arg0->mode = 2;
        arg0->v[2] = arg1 - 0x10;
    } else if (arg1 < 0x16) {
        arg0->mode = 3;
        arg0->v[3] = arg1 - 0x13;
    } else if (arg1 < 0x19) {
        arg0->mode = 4;
        arg0->v[4] = arg1 - 0x16;
    } else if (arg1 < 0x24) {
        arg0->mode = 5;
        arg0->v[5] = arg1 - 0x19;
    } else if (arg1 < 0x27) {
        arg0->mode = 7;
        arg0->v[7] = arg1 - 0x24;
    }
    h1 = func_001E4280();
    func_001D4040(sp, D_0044AA08);
    func_001E3EC0(h1, sp, arg0->mode);
    h2 = func_001E4280();
    func_001D4040(sp, D_0044ABA0);
    func_001E3EC0(h2, sp, arg0->v[arg0->mode]);
}
