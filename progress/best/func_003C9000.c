extern void func_003F9698(void *, const char *, u64 *);

extern const char D_00488AA0[];

#define REG_A000 (*(volatile u32 *)0x1000A000)
#define REG_A010 (*(volatile u32 *)0x1000A010)
#define REG_A020 (*(volatile u32 *)0x1000A020)

s32 func_003C9000(u64 *arg0) {
    u32 var_4 = 0;
    if (REG_A000 & 0x100) {
        u32 var_2 = 0;
        do {
            var_4++;
            if (var_2 <= 0x1000000) {
                var_2 = var_4;
                if (!(REG_A000 & 0x100)) {
                    goto block_4;
                }
            } else {
                func_003F9698(&D_00488AA0, 0x1000000, arg0);
                return -1;
            }
        } while (REG_A000 & 0x100);
    }
block_4:
    REG_A020 = (u32)((*arg0 & 0x7FFF) + 1);
    if ((*arg0 & 0x70000000) == 0x70000000) {
        REG_A010 = (u32)(*arg0 & 0x0FFFFFFF) | 0x80000000;
    } else {
        REG_A010 = (u32)(*arg0 & 0x0FFFFFFF);
    }
    REG_A000 = 0x101;
    return 0;
}
