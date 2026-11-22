extern void func_003F9698(const char *);
extern char D_00488AD0[];
extern char D_FFFFFF[];

void func_003C98F8(s32 *arg0) {
    s32 timeout = (s32)&D_FFFFFF;
    s32 mask100 = ~0x100;
    s32 maskC = ~0xC;
    s32 mask1 = ~1;
    s32 val;

    if (arg0[0] & 0x100) {
        do {
            if (timeout < 0) {
                func_003F9698(D_00488AD0);
                val = arg0[0];
                if ((val >> 8) & 1) {
                    val &= mask100;
                    arg0[0] = val;
                }
            }
            timeout -= 1;
        } while (arg0[0] & 0x100);
    }
    arg0[8] = 0;
    val = arg0[0];
    val &= maskC;
    val |= 4;
    val &= mask1;
    val |= 0x100;
    arg0[0] = val;
}
