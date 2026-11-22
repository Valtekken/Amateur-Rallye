extern s32 func_003F9288(s8 *, s8 *, s32);
s32 func_002D9680(void **arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 i = arg2;
    u32 end = (u32)(i + arg3);
    if ((u32)*((u32 *)*arg0 - 4) >= end) {
        do {
            s8 key = *arg1;
            s8 *p = (s8 *)*arg0 + i;
            if (*p != key || func_003F9288(p, arg1, arg3) != 0) {
                i++;
                end = (u32)(i + arg3);
            } else {
                return i;
            }
        } while ((u32)*((u32 *)*arg0 - 4) >= end);
    }
    return -1;
}
