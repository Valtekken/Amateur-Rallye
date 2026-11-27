extern s32 func_002329D8(void *, s32);
extern void func_00232A50(void *, s32, void *);
extern void func_00271E48(void *);
extern void func_00272DC8(void *, void *);
extern void *func_002B1FC0(int, void **, void *);
extern void func_002B2028(void *);
extern void *func_003D2910(int);

void func_002325A8(void *arg0) {
    void *sp = 0;
    void **temp_2 = 0;
    void *temp_3 = 0;
    s32 temp_16 = 0;
    void *var_6 = 0;
    void *var_2_2 = 0;
    s32 temp_16_2 = 0;
    void *var_2 = 0;

    var_2 = func_002B1FC0(0xC, 0, 0);
    if (var_2 == 0) {
        var_2 = func_003D2910(0xC);
    }
    sp = var_2;
    temp_3 = *(void **)((u8 *)arg0 + 0x14);
    temp_16 = ((s32 *)temp_3)[2];
    var_6 = func_002B1FC0(0xC, &temp_2, &sp);
    var_2_2 = var_6 + 8;
    if (var_6 == 0) {
        var_6 = func_003D2910(0xC);
        var_2_2 = var_6 + 8;
    }
    func_00232A50(arg0, temp_16, var_6);
}
