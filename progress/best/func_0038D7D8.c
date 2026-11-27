extern void *func_00152D28(int);
extern void *func_00152F00(void *, void *, long long *, int, void *, int);
extern void func_00219898(void *, void *, long long, int *);
extern void *func_002B1FC0(int);
extern void func_002B2028(void *);
extern void *func_003D2910(int);
extern void func_003F93CC(void *, void *, int);

extern long long D_0040E614; /* head at -4 of D_0040E618 */
extern char D_00487288[];
extern char D_004872B8[];

void *func_0038D7D8(void *arg0) {
    char *a = (char *)arg0;
    char *temp_3 = a + 8;
    char *temp_18 = a + 0x14;
    char *temp_8 = a + 0x18;
    char *temp_17 = temp_18 + 4;

    void *temp_16 = D_004872B8 + 0xE0;

    *(void **)(a + 4) = (void *)D_00487288;
    *(int *)(a + 0) = 0;
    *(int *)(temp_3 + 0) = 0;
    *(int *)(temp_3 + 8) = 0;
    *(int *)(temp_3 + 4) = 0;
    /* temp_18 bytes */
    unsigned char t = *(unsigned char *)(temp_18 + 1);
    *(unsigned char *)(a + 0x20) = t; // sp20 (stack) but using a+0x20? placeholder
    *(unsigned char *)(temp_18 + 1) = 0;
    *(unsigned char *)(temp_18 + 2) = 0;
    *(unsigned char *)(temp_18 + 1) = t;
    *(unsigned char *)(temp_18 + 3) = 0;
    *(int *)(a + 0x18) = 0;
    *(int *)(temp_8 + 8) = 0;
    *(int *)(temp_8 + 4) = 0;
    *(int *)(temp_18 + 0x10) = 0;

    long long sp40 = 0x64;
    void *temp_2_2 = func_00152F00(D_004872B8, temp_16, &sp40, 0, temp_8, 0x64);
    long long var_4;
    if (temp_2_2 != temp_16) {
        var_4 = *(long long *)temp_2_2;
    } else {
        var_4 = *(long long *)(D_004872B8 + 0xD8);
    }
    void *temp_20 = *(void **)(temp_18 + 4);
    long long temp_22 = (long long)((unsigned long long)var_4 << 32) >> 32;
    if ((unsigned int)(((int)(*(int *)(temp_17 + 8) - (int)temp_20)) >> 2) < (unsigned int)temp_22) {
        void **temp_30 = *(void ***)(temp_17 + 8);
        int sp4C = ((int)(temp_30 - (void **)temp_20)) >> 2;
        void *var_16;
        int var_21;
        if (temp_22 != 0) {
            var_21 = (int)(temp_22 * 4);
            if (var_21 != 0) {
                var_16 = func_002B1FC0(var_21);
                if (var_16 == 0) {
                    var_16 = func_003D2910(var_21);
                }
            } else {
                if (*(void **)&D_0040E614 != 0) {
                    var_16 = *(void **)&D_0040E614;
                    *(void **)&D_0040E614 = *(void **)var_16;
                } else {
                    var_16 = func_00152D28(0);
                }
            }
        } else {
            var_16 = 0;
            var_21 = 0;
        }
        func_003F93CC(var_16, temp_20, (((int)(temp_30 - (void **)temp_20)) >> 2) * 4);
        void *temp_4 = *(void **)(temp_18 + 4);
        int temp_2_4 = ((int)(*(int *)(temp_17 + 8) - (int)temp_4)) >> 2;
        if (temp_2_4 != 0) {
            if (temp_2_4 * 4 != 0) {
                func_002B2028(temp_4);
            } else {
                *(void **)temp_4 = *(void **)&D_0040E614;
                *(void **)&D_0040E614 = temp_4;
            }
        }
        *(void **)(temp_18 + 4) = var_16;
        *(void **)(temp_17 + 8) = (void *)((char *)var_16 + var_21);
        *(void **)(temp_17 + 4) = (void *)((char *)var_16 + sp4C * 4);
    }
    int sp48 = 0;
    func_00219898(temp_17, *(void **)(temp_17 + 4), temp_22, &sp48);
    *(int *)(temp_18 + 0x10) = 0;
    *(int *)(a + 0x28) = 0;
    return arg0;
}
