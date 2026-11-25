extern void func_001D4040(s32 *, const char *);
extern const char D_0044C598[];
extern void *D_0044C680[];

void *func_0014E858(void *arg0) {
    s32 sp[16];
    volatile char pad[0x30];
    s32 *p = (s32 *)arg0;

    func_001D4040(sp, D_0044C598);
    s32 result = sp[0];
    p[1] = result;
    p[0] = -1;
    p[2] = (s32)D_0044C680;

    s32 *a1 = p + 11;
    s32 *a0 = p + 14;
    s32 *v1 = p + 17;
    s32 *v0 = p + 20;
    s32 *a2 = p + 23;
    s32 *a3 = p + 26;

    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    s32 t0 = 1;
    p[11] = 0;

    a1[2] = (a1[1] = 0);
    s32 t2 = 2;

    s32 *t1 = p + 5;
    p[14] = 0;
    a0[2] = (a0[1] = 0);
    p[17] = 0;
    v1[2] = (v1[1] = 0);
    p[20] = 0;
    v0[2] = (v0[1] = 0);
    p[23] = 0;
    a2[2] = (a2[1] = 0);
    p[26] = 0;
    a3[2] = (a3[1] = 0);

    p[33] = 1;
    p[32] = 0;

    do {
        *t1 = 0;
        t2--;
        t1--;
    } while (t2 >= 0);

    return arg0;
}
