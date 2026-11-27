extern void func_0021B988(s32, void *, s32, s32 *);

void func_0021BC58(s32 arg0, s32 arg1) {
    s32 var_18 = (arg1 * 0x38E38E39) + (arg0 * 0xC71C71C7);
    s32 var_19 = var_18;
    void *var_16 = (void *)((u8 *)arg1 - 0x24);
    do {
        var_19 -= 4;
        var_18 -= 4;
        func_0021B988(arg0, 0, var_19 >> 2, &var_18);
        var_16 = (void *)((u8 *)var_16 - 0x24);
    } while ((var_18 >> 2) >= 2);
}
