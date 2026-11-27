typedef s32 (*func3650_t)(s32, s32);
typedef s32 (*func3e90_t)(s32, void *, f32);
typedef f32 (*func16e0_t)(void *, f32, s32);
typedef void (*func3f310_t)(void *, const char *, s32);

extern s32 func_001E4280(void);
extern void func_001D4040(void *obj, const char *fmt);
extern s32 func_001E3650(s32 a, s32 b);
extern f32 func_001816E0(void *arg0, f32 val, s32 flag);
extern void func_001E3E90(s32 count, void *sp, f32 val);
extern void func_003FA310(void *dst, const char *fmt, s32 n);
extern s32 func_001918C0(s32 arg);
extern s32 func_00193B60(void);

extern const char D_0046F7B0[];
extern const char D_0046FA90[];
extern const char D_0046FAB8[];
extern const char D_0046FAE0[];

struct S {
    f32 unkC;
};

void func_001813C0(void *arg0) {
    struct S *obj = (struct S *)arg0;
    s32 sp10[4];
    s32 temp_16 = func_001E4280();
    func_001D4040(obj, D_0046FA90);
    s32 temp_2 = func_001E3650(temp_16, 0);
    switch (temp_2) {
    case 1:
        s32 var_16 = func_001E4280();
        func_001D4040(obj, D_0046F7B0);
        f32 var_f12 = obj->unkC;
        func_001E3E90(var_16, (void *)sp10, func_001816E0(arg0, var_f12, 0x40200000));
        break;
    case 2:
        s32 var_16_2 = func_001E4280();
        func_001D4040(obj, D_0046F7B0);
        f32 var_f12_2 = obj->unkC * 0.95f;
        func_001E3E90(var_16_2, (void *)sp10, func_001816E0(arg0, var_f12_2, 0x40200000));
        break;
    default:
        s32 temp_16_2 = func_001E4280();
        func_001D4040(obj, D_0046F7B0);
        f32 var_f12_3 = obj->unkC * 1.1f;
        func_001E3E90(temp_16_2, (void *)sp10, var_f12_3);
        break;
    }
    s32 var_17 = 0;
    s32 temp_16_3 = func_001E4280();
    func_001D4040(obj, D_0046FAB8);
    func_001E3E90(temp_16_3, (void *)sp10, 0.0f);
    s32 temp_2_2 = func_001918C0(func_00193B60());
    if (temp_2_2 > 0) {
        s32 var_6 = 0;
        s32 var_17_loop = 0;
        do {
            var_17_loop += 1;
            func_003FA310((void *)(sp10 + var_6), D_0046FAE0, var_6);
            s32 temp_16_4 = func_001E4280();
            func_001D4040(obj, (const char *)(sp10 + var_6));
            func_001E3E90(temp_16_4, (void *)sp10, 0.0f);
            var_6 = var_17_loop;
        } while (var_17_loop < temp_2_2);
    }
}
