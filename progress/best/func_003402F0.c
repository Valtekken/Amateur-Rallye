extern s32 D_0042DD24;
extern f32 D_0049B328;
extern void func_003E7FE8(f32 *);
extern s32 func_003E7650(void);
extern void func_003E7660(s32);
extern void func_003E76B8(s32);
extern void func_003E7748(s32);
extern void func_003E8150(f32 *);
extern void func_003E80A8(f32 *, f32);

void func_003402F0(void) {
    s32 i, j;
    f32 f0, f1, f12;

    if (D_0042DD24 == 0) {
        func_003E7FE8(&D_0049B328);
        D_0042DD24 = 1;
    }
    func_003E8150(&D_0049B328);
    f0 = D_0049B328;
    if (f0 < 0.033333335f) {
        f1 = f0 - 0.033333335f;
        func_003E7660(func_003E7650());
        func_003E76B8(func_003E7650());
        func_003E7748(func_003E7650());
        func_003E8150(&D_0049B328);
        do {
            i = 100;
            do {
                i--;
                j = 48;
                do { j--; } while (j >= 0);
            } while (i >= 0);
            func_003E8150(&D_0049B328);
        } while (D_0049B328 < 0.033333335f);
        f0 = D_0049B328;
        func_003E80A8(&D_0049B328, f0 - 0.033333335f);
    } else {
        f1 = f0 - 0.033333335f;
        f12 = 0.0066666673f;
        if (f1 < 0.0066666673f)
            f12 = f1;
        func_003E80A8(&D_0049B328, f12);
    }
}
