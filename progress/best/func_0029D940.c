typedef struct { s32 v[4]; } S16;
extern s32 func_00262838(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern f32 func_001E3610(s32, void *);
extern void func_002624A0(s32, void *, f32, f32);
extern void func_0029DBB0(void *);
extern char D_0047C0F8[], D_0047C108[];
void func_0029D940(char *a, s32 b) {
    S16 k0, k1, k2;
    if (*(s32 *)(a + 0x18) < (s32)*(f32 *)(a + 0x20)) {
        s32 x, y;
        f32 v;
        *(f32 *)(a + 0x20) = *(f32 *)(a + 0x20) - (f32)b;
        x = func_00262838();
        func_001D4040(&k0, D_0047C0F8);
        y = func_001E4280();
        func_001D4040(&k1, *(void **)(a + 0x3C));
        func_002624A0(x, &k0, func_001E3610(y, &k1), 1.0f);
        v = (f32)*(s32 *)(a + 0x18);
        if (*(f32 *)(a + 0x20) < v) *(f32 *)(a + 0x20) = v;
        func_0029DBB0(a);
    } else {
        s32 x, y;
        x = func_00262838();
        func_001D4040(&k0, D_0047C108);
        y = func_001E4280();
        func_001D4040(&k2, *(void **)(a + 0x3C));
        func_002624A0(x, &k0, func_001E3610(y, &k2), 1.0f);
    }
}
