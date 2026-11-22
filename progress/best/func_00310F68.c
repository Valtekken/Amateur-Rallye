s32 func_00310F68(void) {
    extern u16 D_0042DA10;
    extern u16 D_0042DA12;
    s32 v2, v4, v5, v6;
    v2 = (s16)(D_0042DA10 + 1);
    v4 = (s16)(D_0042DA12 + 1);
    v2 = v2 - 1;
    v4 = v4 - 1;
    if (v2 >= 4) v2 = 0;
    v5 = v2 + 1;
    if (v5 >= 4) v5 = 0;
    v6 = 0;
    if (v2 == v4 || v5 == v4) v6 = 1;
    return v6 ^ 1;
}
