s32 func_00233790(void *arg0, s32 arg1) {
    s32 end;
    s32 *p;
    s32 n;
    s32 i;
    end = *(s32 *)((u8 *)arg0 + 0x1C);
    p = *(s32 **)((u8 *)arg0 + 0x18);
    n = (end - (s32)p) >> 2;
    i = 0;
    if (n > 0) {
        do {
            if (arg1 == *p) return 1;
            i++;
            p++;
        } while (i < n);
    }
    return 0;
}
