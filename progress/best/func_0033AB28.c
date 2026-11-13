void *func_0033AB28(void *arg0, void *arg1, u64 *arg2) {
    void *var_4 = arg0;
    s32 var_7 = (s32)((char*)arg1 - (char*)var_4) >> 3;
    for (;;) {
        s32 test = var_7;
        if (test <= 0) break;
        s32 var_5 = test >> 1;
        u64 *temp_3 = (u64*)((char*)var_4 + var_5 * 8);
        if (*temp_3 < *arg2) {
            var_4 = (void*)((char*)temp_3 + 8);
            var_7 = (var_7 - var_5) - 1;
        } else {
            var_7 = var_5;
        }
    }
    return var_4;
}
