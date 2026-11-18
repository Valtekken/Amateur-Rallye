typedef struct { s32 v[4]; } Ctx;
extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, void *, void *);
extern void func_001E2510(void *, void *, void *);
extern void func_001E25B0(void *, void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern void func_001D4040(void *, const char *);
extern const char D_00444D00[], D_00445D48[], D_00445D60[], D_004465C8[], D_004465D8[], D_004465E0[], D_00446718[], D_00446728[], D_00446730[], D_00446738[], D_00446890[], D_004468A0[], D_004468B0[], D_004468C0[], D_004468D8[], D_004468F0[];
void func_00113D58(void *obj, void *unused, s32 arg2) {
    Ctx c;
    func_001E2460(&c, arg2);
    func_001E25B0(&c, D_00444D00, (char*)obj+0xC);
    func_001E28F8(&c, D_00446718, (char*)obj+0x5C);
    func_001E25B0(&c, D_00445D48, (char*)obj+0x10);
    func_001E25B0(&c, D_00445D60, (char*)obj+0x14);
    func_001E28F8(&c, D_004465C8, (char*)obj+0x3C);
    func_001E28F8(&c, D_004465D8, (char*)obj+0x40);
    func_001E28F8(&c, D_004465E0, (char*)obj+0x44);
    func_001E28F8(&c, D_00446728, (char*)obj+0x60);
    func_001E25B0(&c, D_00446730, (char*)obj+0x20);
    func_001E28F8(&c, D_00446890, (char*)obj+0x64);
    func_001E28F8(&c, D_004468A0, (char*)obj+0x68);
    func_001E25B0(&c, D_00446738, (char*)obj+0x1C);
    func_001E2510(&c, D_004468B0, (char*)obj+0x88);
    func_001E2510(&c, D_004468C0, (char*)obj+0x8C);
    func_001E2510(&c, D_004468D8, (char*)obj+0x90);
    func_001E2470(&c, D_004468F0, (char*)obj+0x34);
}
