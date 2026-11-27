extern void func_001B22F8(void *, s32);
extern void func_002B2028(void *);
extern int D_00473130;
extern int D_0040E614;

void func_001B40C8(void *arg0, s32 arg1) {
    char *a = (char *)arg0;
    void *temp_6 = a + 0x134;
    void *temp_5 = a + 0x108;
    void *temp_17 = a + 0xF8;
    void *temp_18 = a + 0xEC;
    void *temp_19 = a + 0xE0;

    *(int *)(a + 0xDC) = (int)&D_00473130;

    /* 134 block */
    {
        unsigned int t3 = *(unsigned int *)(a + 0x134);
        unsigned int t4 = *(unsigned int *)((char *)temp_6 + 4);
        if (t3 < t4) {
            unsigned int v = t3 + 0x2C;
            do { v += 0x2C; } while (v < t4);
        }
        unsigned int t4_2 = *(unsigned int *)(a + 0x134);
        int t3_2 = (int)(((unsigned int)*(int *)((char *)temp_6 + 8) - t4_2) * 0xBA2E8BA3u) >> 2;
        if (t3_2 != 0) {
            if (t3_2 * 0x2C != 0) {
                func_002B2028((void *)t4_2);
            } else {
                *(int *)t4_2 = D_0040E614;
                D_0040E614 = (int)t4_2;
            }
        }
    }
    /* 108 block */
    {
        unsigned int t3 = *(unsigned int *)(a + 0x108);
        unsigned int t4 = *(unsigned int *)((char *)temp_5 + 4);
        if (t3 < t4) {
            unsigned int v = t3 + 0xC;
            do { v += 0xC; } while (v < t4);
        }
        unsigned int t4_4 = *(unsigned int *)(a + 0x108);
        int t3_4 = (int)(((unsigned int)*(int *)((char *)temp_5 + 8) - t4_4) * 0xAAAAAAABu) >> 2;
        if (t3_4 != 0) {
            if (t3_4 * 0xC != 0) {
                func_002B2028((void *)t4_4);
            } else {
                *(int *)t4_4 = D_0040E614;
                D_0040E614 = (int)t4_4;
            }
        }
    }
    /* F8 block */
    {
        unsigned int t3 = *(unsigned int *)(a + 0xF8);
        unsigned int t4 = *(unsigned int *)((char *)temp_17 + 4);
        if (t3 < t4) {
            unsigned int v = t3 + 0x38;
            do { v += 0x38; } while (v < t4);
        }
        unsigned int t4_6 = *(unsigned int *)(a + 0xF8);
        int t3_6 = (int)(((unsigned int)*(int *)((char *)temp_17 + 8) - t4_6) * 0xB6DB6DB7u) >> 3;
        if (t3_6 != 0) {
            if (t3_6 * 0x38 != 0) {
                func_002B2028((void *)t4_6);
            } else {
                *(int *)t4_6 = D_0040E614;
                D_0040E614 = (int)t4_6;
            }
        }
    }
    /* EC block */
    {
        unsigned int t3 = *(unsigned int *)(a + 0xEC);
        unsigned int t4 = *(unsigned int *)((char *)temp_18 + 4);
        if (t3 < t4) {
            unsigned int v = t3 + 0x38;
            do { v += 0x38; } while (v < t4);
        }
        unsigned int t4_8 = *(unsigned int *)(a + 0xEC);
        int t3_8 = (int)(((unsigned int)*(int *)((char *)temp_18 + 8) - t4_8) * 0xB6DB6DB7u) >> 3;
        if (t3_8 != 0) {
            if (t3_8 * 0x38 != 0) {
                func_002B2028((void *)t4_8);
            } else {
                *(int *)t4_8 = D_0040E614;
                D_0040E614 = (int)t4_8;
            }
        }
    }
    /* E0 block */
    {
        unsigned int t3 = *(unsigned int *)(a + 0xE0);
        unsigned int t4 = *(unsigned int *)((char *)temp_19 + 4);
        if (t3 < t4) {
            unsigned int v = t3 + 4;
            do { if (!(v < t4)) break; v += 4; } while (1);
        }
        unsigned int t4_10 = *(unsigned int *)(a + 0xE0);
        int t2 = (int)(((unsigned int)*(int *)((char *)temp_19 + 8) - t4_10)) >> 2;
        if (t2 != 0) {
            if (t2 * 4 != 0) {
                func_002B2028((void *)t4_10);
            } else {
                *(int *)t4_10 = D_0040E614;
                D_0040E614 = (int)t4_10;
            }
        }
    }
    func_001B22F8(arg0, arg1);
}
