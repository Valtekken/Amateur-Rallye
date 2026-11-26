extern void func_001D4040(void *, const char *);
extern s32 func_001E38C8(s32, void *);
extern f32 func_001E3610(s32, void *);
extern f32 D_004264A0;
extern const char D_004797E0[], D_004797F8[];

void func_0022AA48(void *arg0) {
    char key[16], key10[16], key20[16];
    s32 cfg;
    cfg = func_001E4280();
    func_001D4040(key, D_004797E0);
    if (func_001E38C8(cfg, key) != 0) {
        cfg = func_001E4280();
        func_001D4040(key10, D_004797E0);
        D_004264A0 = func_001E3610(cfg, key10);
    }
    cfg = func_001E4280();
    func_001D4040(key, D_004797F8);
    if (func_001E38C8(cfg, key) != 0) {
        cfg = func_001E4280();
        func_001D4040(key20, D_004797F8);
        *(f32 *)((char *)arg0 + 0x2C) = func_001E3610(cfg, key20);
    }
}
