extern void func_001D4040(char *dst, const char *src);
extern void func_001E3EC0(s32, char *, s32);
extern s32 func_001E3650(s32, char *);
extern s32 func_001E4280(void);
extern void func_003FA310(char *, const char *, s32);
extern char D_00471528[];
extern char D_00471548[];
extern char D_00471570[];

void func_00192780(s32 arg0, s32 arg1, s32 arg2) {
    char sp[0x40];
    char sp40[0x10];
    char sp50[0x10];
    char sp60[0x10];
    s32 obj;
    s32 obj2;
    char *p;

    func_003FA310(sp, D_00471528, arg1 + 1);
    switch (arg2) {
    case 5:
        obj = func_001E4280();
        func_001D4040(sp40, sp);
        obj2 = func_001E4280();
        func_001D4040(sp50, D_00471548);
        func_001E3EC0(obj, sp40, func_001E3650(obj2, sp50));
        return;
    case 6:
        obj = func_001E4280();
        func_001D4040(sp40, sp);
        obj2 = func_001E4280();
        func_001D4040(sp60, D_00471570);
        func_001E3EC0(obj, sp40, func_001E3650(obj2, sp60));
        return;
    case 0:
        obj = func_001E4280();
        func_001D4040(sp40, sp);
        func_001E3EC0(obj, sp40, -2);
        return;
    default:
        obj = func_001E4280();
        func_001D4040(sp40, sp);
        func_001E3EC0(obj, sp40, -1);
        return;
    }
}
