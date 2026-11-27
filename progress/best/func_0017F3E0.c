extern s32 func_001918C0(s32);
extern s32 func_00191908(s32);
extern f32 func_00192530(s32, s32);
extern s32 func_001925F0(s32, s32);
extern f32 func_001926B0(s32, s32);
extern void func_00192B68(s32, s32, f32);
extern void func_00192C50(s32, s32, s32);
extern s32 func_00193B60(void);
extern void func_001D4040(char *, char *);
extern f32 func_001D5E70(s32, f32, f32);
extern s32 func_001D5EB0(s32, s32, s32);
extern s32 func_001D5F70(void);
extern f32 func_001E3610(s32, char *);
extern s32 func_001E4280(void);
extern void func_003FA310(char *, char *, s32);
extern char D_0044FAB0[];

void func_0017F3E0(void) {
    char sp[0x30];
    char sp30[0x10];
    s32 temp_19;
    s32 var_18;
    f32 temp_f23;

    temp_19 = func_001918C0(func_00193B60());
    var_18 = func_00191908(func_00193B60());
    temp_f23 = func_00192530(func_00193B60(), 0);
    if (var_18 < temp_19) {
        do {
            if (func_001925F0(func_00193B60(), var_18) == 0) {
                f32 temp_f22;
                f32 temp_f20;
                f32 temp_f21;
                s32 temp_17;
                s32 temp_16b;
                s32 temp_16a;

                func_00192C50(func_00193B60(), var_18, 1);
                func_003FA310(sp, D_0044FAB0, var_18);
                temp_16a = func_001E4280();
                func_001D4040(sp30, sp);
                temp_f22 = func_001E3610(temp_16a, sp30);
                temp_f20 = func_001926B0(func_00193B60(), var_18);
                temp_f21 = 1.0f - temp_f22;
                temp_17 = func_001D5EB0(func_001D5F70(), 0, 0x3C);
                temp_16b = func_001D5EB0(func_001D5F70(), 0, 0x1E);
                temp_f20 = temp_f20 + (temp_f21 * temp_f23) + (temp_f21 * (f32)temp_17) - (temp_f21 * (f32)temp_16b) + func_001D5E70(func_001D5F70(), 0.0f, 0.1f);
                func_00192B68(func_00193B60(), var_18, temp_f20);
            }
            var_18 += 1;
        } while (var_18 < temp_19);
    }
}
