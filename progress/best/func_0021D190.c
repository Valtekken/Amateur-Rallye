void *func_0021D190(void *arg0, void *arg1) {
    s32 *sp20;
    s32 *sp40;
    s32 *sp50;
    void *var_2;
    void *var_2_2;
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 *temp_2_4;
    s32 *temp_9;
    s32 *temp_9_2;

    func_001D2488();
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    *(s32 **)((char*)arg0 + 4) = var_2;
    *(s32 *)var_2 = (s32)var_2;
    temp_2 = *(s32 **)((char*)arg0 + 4);
    temp_2[1] = (s32)temp_2;
    temp_2_2 = *(s32 **)((char*)arg1 + 4);
    temp_9 = *(s32 **)temp_2;
    sp20 = temp_9;
    func_00213410((char*)arg0 + 4, &sp20, *temp_2_2, temp_2_2, 0, temp_9, temp_9);
    var_2_2 = func_002B1FC0(0xC);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0xC);
    }
    *(s32 **)((char*)arg0 + 8) = var_2_2;
    *(s32 *)var_2_2 = (s32)var_2_2;
    temp_2_3 = *(s32 **)((char*)arg0 + 8);
    temp_2_3[1] = (s32)temp_2_3;
    temp_2_4 = *(s32 **)((char*)arg1 + 8);
    temp_9_2 = *(s32 **)temp_2_3;
    sp40 = temp_9_2;
    sp50 = temp_9_2;
    func_00213410((char*)arg0 + 8, &sp50, *temp_2_4, temp_2_4, 0, temp_9_2, temp_9_2);
    return arg0;
}
