/* func_00233180 */
void *func_00233180(void *arg0) {
    s32 sp[12];
    s32 *p = (s32 *)arg0;
    s32 *v1;
    s32 *a1;
    (void)sp;
    p[0] = 0;
    v1 = p + 3;
    p[1] = 0;
    a1 = p + 6;
    p[2] = 0;
    p[3] = 0;
    v1[2] = 0;
    v1[1] = 0;
    p[6] = 0;
    a1[2] = 0;
    a1[1] = 0;
    return p;
}

/* func_00233750 */
s32 func_00233750(void *arg0, s32 arg1) {
    s32 *begin;
    s32 end;
    s32 *p;
    s32 n;
    s32 i;
    begin = *(s32 **)((u8 *)arg0 + 0xC);
    end = *(s32 *)((u8 *)arg0 + 0x10);
    p = begin;
    n = (end - (s32)p) >> 2;
    i = 0;
    if (n > 0) {
        do {
            i++;
            if (arg1 == *p) return 1;
            p++;
        } while (i < n);
    }
    return 0;
}
