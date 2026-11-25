s32 func_002B1FC0(s32);
s32 func_002BA330(s32, s32, s32, s32);

s32 func_002BA390(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_2;
    s32 temp_16;
    s32 temp_2;

    var_2 = func_002BA330(0, 0, arg1, arg2);
    if (var_2 > 0) {
        temp_16 = var_2 + 1;
        temp_2 = func_002B1FC0(temp_16);
        *arg0 = temp_2;
        if (temp_2 != 0) {
            return func_002BA330(temp_2, temp_16, arg1, arg2);
        }
        return -1;
    }
    return var_2;
}
