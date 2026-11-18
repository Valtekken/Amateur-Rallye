s32 func_002F7600(u32 arg0) {
    s32 var_3 = 0;
    u32 one = 1;
    if (one < arg0) {
        do {
            var_3 += 1;
        } while ((u32)(1 << var_3) < arg0);
    }
    return var_3;
}
