s32 func_0026B190(s32 arg0, s32 arg1) {
    s32 *var_3;
    s32 *var_5;
    s32 temp_2;
    s32 var_6;

    var_5 = (s32 *)(arg1 + 8);
    var_3 = (s32 *)(arg0 + 8);
    var_6 = 7;
    do {
        temp_2 = *var_5;
        var_6 -= 1;
        var_5++;
        *var_3 = temp_2;
        var_3++;
    } while (var_6 >= 0);
    return arg0;
}
