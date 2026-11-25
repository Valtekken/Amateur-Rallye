extern void func_001D4040(void *, const char *);
extern s32 func_001E3598(s32, void *);
extern void func_0022B8B8(s32, s32);
extern void func_0022BB80(s32, s32);
extern void func_0022BE48(s32, s32);
extern const char D_00479948[], D_00479960[], D_00479978[];

void func_0022C110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char key[16];
    s32 cfg;
    cfg = func_001E4280();
    func_001D4040(key, D_00479948);
    if (func_001E3598(cfg, key) != 0) func_0022B8B8(arg0, arg2);
    cfg = func_001E4280();
    func_001D4040(key, D_00479960);
    if (func_001E3598(cfg, key) != 0) func_0022BB80(arg0, arg1);
    cfg = func_001E4280();
    func_001D4040(key, D_00479978);
    if (func_001E3598(cfg, key) != 0) func_0022BE48(arg0, arg3);
}
