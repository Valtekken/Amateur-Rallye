extern void func_0014B388(void *, s32);
extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E2AF0(void *, const char *, void *);
extern char D_0044BC38[], D_0044C318[], D_0044C338[], D_0044C358[], D_0044C370[], D_0044C388[], D_0044C3A0[], D_0044C3B8[], D_0044C3D8[];

void func_0014B290(void *arg0, s32 arg1, s32 arg2) {
    char sp[0x10];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (char *)arg0 + 0xC);
    func_001E2AF0(sp, D_0044C318, (char *)arg0 + 0x30);
    func_001E2AF0(sp, D_0044C338, (char *)arg0 + 0x38);
    func_001E2470(sp, D_0044C358, (char *)arg0 + 0x40);
    func_001E2AF0(sp, D_0044C370, (char *)arg0 + 0x1C);
    func_001E2510(sp, D_0044C388, (char *)arg0 + 0x24);
    func_001E2510(sp, D_0044C3A0, (char *)arg0 + 0x28);
    func_001E2510(sp, D_0044C3B8, (char *)arg0 + 0x2C);
    func_001E2470(sp, D_0044C3D8, (char *)arg0 + 0x18);
    func_0014B388(arg0, arg1);
}
