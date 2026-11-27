extern void func_0021E4F0(void *);
extern s32 func_00193B60(void);
extern s32 func_001930D8(s32, s32);
extern void func_003FA310(char *, char *, s32);
extern void func_001D4040(void *, void *);
extern void func_0029EA38(s32);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern char D_0044C0D8[];
extern char D_0044C0C0[];
extern char D_0044C498[];
extern char D_0044C4D8[];

void func_0014D938(void *arg0, void *arg1) {
    char sp[0x100];
    char sp100[0x10];
    s32 val;

    func_0021E4F0(arg1);
    func_003FA310(sp, D_0044C0D8, func_001930D8(func_00193B60(), *(s32 *)((char *)arg0 + 0x10)));
    func_001D4040((char *)arg0 + 0x18, sp);
    func_003FA310(sp, D_0044C0C0, func_001930D8(func_00193B60(), *(s32 *)((char *)arg0 + 0x10)));
    func_001D4040((char *)arg0 + 0x1C, sp);
    func_003FA310(sp, D_0044C498, func_001930D8(func_00193B60(), *(s32 *)((char *)arg0 + 0x10)));
    func_001D4040((char *)arg0 + 0x20, sp);

    val = *(s32 *)((char *)arg1 + 4);
    if (val != 0) {
        func_0029EA38(val);
    }

    val = func_001E4280();
    func_001D4040(sp100, D_0044C4D8);
    if (func_001E3650(val, (s32)sp100) == 1) {
        *(s32 *)((char *)arg0 + 0xC) = 0;
    } else {
        func_0021E4F0(arg1);
        *(s32 *)((char *)arg0 + 0xC) = 0;
    }
    *(s32 *)((char *)arg0 + 0x14) = 0;
}
