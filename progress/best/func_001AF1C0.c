extern void func_001AF460(void *);
extern void func_001D4040(void *, const char *);
extern void func_001D4810(void *, const char *);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001FDBA8(s32, void *);
extern s32 func_001FDE60(void);
extern void func_00205CE0(s32, s32);
extern void func_002062A8(s32, void *);
extern void func_0021E4F0(s32);
extern const char D_00472B90[], D_00472C68[], D_00472C80[];

void func_001AF1C0(char *p, s32 arg1) {
    char key[16], key2[16];
    s32 t, n;
    void *q;
    *(s32 *)(p + 0xAC) = func_001FDBA8(func_001FDE60(), p + 0xA4);
    t = func_001FDBA8(func_001FDE60(), p + 0xA0);
    *(s32 *)(p + 0xA8) = t;
    if (t == 0 && *(s32 *)(p + 0xAC) == 0) {
        func_0021E4F0(arg1);
        return;
    }
    arg1 = func_001E4280();
    func_001D4040(key, D_00472C68);
    if (func_001E38C8(arg1, key) != 0) {
        arg1 = func_001E4280();
        func_001D4040(key2, D_00472C68);
        *(s32 *)(p + 0x34) = func_001E3650(arg1, (s32)key2);
    }
    func_001AF460(p);
    if (*(s32 *)(p + 0x94) != 0) func_001D4810(p + 0x28, D_00472B90);
    else func_001D4810(p + 0x28, D_00472C80);
    q = *(void **)(*(void **)(p + 0x38));
    if (q != 0) {
        n = *(s32 *)((char *)q + 0x4C);
        if (n != 0) {
            func_002062A8(n, p + 0x28);
            func_00205CE0(n, 0);
            func_00205CE0(n, 1);
            func_00205CE0(n, 2);
            func_00205CE0(n, 3);
        }
    }
}
