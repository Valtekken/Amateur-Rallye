extern f32 func_0023DF58(void *, s32);

void func_0023DED0(void *arg0) {
    s32 temp_19 = (*(s32 *)((u8 *)arg0 + 0xB4) - *(s32 *)((u8 *)arg0 + 0xB0)) >> 2;
    s32 var_17 = 0;
    s32 new_var = 0;
    
    if (temp_19 > new_var) {
        do {
            s32 temp_3 = var_17 * 4;
            s32 *temp_2 = (s32 *)(*(s32 *)((u8 *)arg0 + 0xB0) + temp_3);
            var_17 += 1;
            f32 *temp_16 = (f32 *)(*(s32 *)((u8 *)arg0 + 0x30) + temp_3);
            *temp_16 = func_0023DF58(arg0, *temp_2);
        } while (var_17 < temp_19);
    }
}
