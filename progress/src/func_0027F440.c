f32 func_0027F440(s32 arg0) {
    f32 *var_4 = (f32 *)(arg0 + 0x30);
    s32 var_2 = 0x3B;
    f32 temp_f1;
    do {
        temp_f1 = *var_4;
        var_2--;
        var_4++;
    } while (var_2 >= 0);
    return temp_f1 / 60.0f;
}
