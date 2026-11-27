extern s32 func_003F9728(s32, void *, u32);
extern void func_003F9698(char *);
extern void func_002B1528(void *, s32 *, s32 *, s32 *, s32 *, s32 *);
extern s32 D_004404DC, D_0042A938;
extern char D_0047DE88[];
s32 func_002B17D8(void *arg0, u32 arg1) {
    s32 r = func_003F9728(D_004404DC, arg0, arg1);
    if (r == 0) {
        u32 a = arg1 >> 18;
        s32 sp0, sp4, sp8, spC, sp10, sp14;
        if (a >= 0x10) a = 0xF;
        func_003F9698(D_0047DE88);
        func_002B1528(&sp0, &sp4, &sp8, &spC, &sp10, &sp14);
        {
            s32 v = sp10 / 0x100000;
            sp10 = v;
            if (v >= 0x10) sp10 = 0xF;
        }
        D_0042A938 = (D_0042A938 & ~0x1FF) | (a & 0xF) | ((sp10 & 0xF) << 4) | 0x100;
        for (;;) {}
    }
    return r;
}
