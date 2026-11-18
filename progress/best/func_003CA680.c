extern void *func_003CA3B0(s32);
extern u8 D_0049B9D0[];

u8 func_003CA680(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    u8 temp5;
    u8 temp3;
    s32 s0 = arg3;
    s32 s1 = arg2;
    s32 t0 = arg0;

    p = (u8*)D_0049B9D0;
    p += arg0 * 0x70;
    p += arg1 * 0x1C;
    if (*(s32*)(p + 0x10) == 0) goto L108;
    p = (u8*)func_003CA3B0(t0);
    temp5 = p[0x72];
    if (temp5 != 1) goto L10C;
    if (p[0x64] < 2) goto L10C;
    temp3 = p[0x6A];
    if (arg2 >= temp3) goto L108;
    if (arg2 == -1) return temp3;
    if (arg3 != 2) {
        if (arg3 < 3) {
            if (arg3 != 1) goto L110;
            return p[arg2*4 + 0x30];
        }
        if (arg3 == 3) goto L68;
        if (arg3 == 4) goto L78;
        goto L110;
    }
    return p[arg2*4 + 0x31];
L68:
    return p[arg2*4 + 0x32];
L78:
    return p[arg2*4 + 0x33];
L108:
    return 0;
L10C:
    return 0;
L110:
    return 0;
}
