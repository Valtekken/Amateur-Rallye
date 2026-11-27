extern void D_002AD390(void *);
extern void func_002338E8(void *, s32);
extern void func_00233C30(void *, s32);
extern void func_0023F370(void *, s32);
extern void func_002B2028(void *);
extern s32 D_0040E618[];
void func_0025A398(void *arg0, s32 arg1) {
    char *t = (char *)arg0;
    char *p19;
    volatile s32 sp0;
    unsigned int *v5;
    unsigned int v18;
    unsigned int v30;
    unsigned int v3;
    unsigned int v16;
    unsigned int v6;
    unsigned int v2;
    unsigned int v4;
    unsigned int *v5b;
    unsigned int v18b;
    unsigned int v3b;
    unsigned int v16b;
    unsigned int v6b;
    unsigned int v2b;
    unsigned int v4b;
    unsigned int *v4c;
    unsigned int v3c;
    unsigned int cnt;
    volatile char pad[0x10];

    if (*(void **)(t + 0xC)) func_002338E8(*(void **)(t + 0xC), 3);
    if (*(void **)(t + 0x4)) func_0023F370(*(void **)(t + 0x4), 3);
    p19 = t + 0x10;
    if (*(void **)(t + 0x8)) { func_00233C30(*(void **)(t + 0x8), 3); p19 = t + 0x10; }
    *(s32 *)(t + 0x0) = 0;
    v5 = (unsigned int *)*(unsigned int *)(t + 0x10);
    v18 = *(unsigned int *)(t + 0x14);
    v30 = v18 - (unsigned int)v5;
    sp0 = arg1 & 1;
    if ((unsigned int)v5 < v18) {
        do {
            v3 = *v5;
            v16 = (unsigned int)(v5 + 3);
            v6 = v5[1];
            v4 = v3;
            if (v3 < v6) {
                unsigned int vb = v3 + 0x14;
                while (vb < v6) { vb += 0x14; }
            }
            v2 = (unsigned int)((s32)((unsigned int)(v5[2] - v4) * 0xCCCCCCCDu) >> 2);
            if (v2 != 0) {
                unsigned int bytes = v2 * 0x14;
                if (bytes == 0) {
                    *(unsigned int *)v4 = D_0040E618[-1];
                    D_0040E618[-1] = (int)v4;
                } else {
                    func_002B2028((void *)v4);
                }
            }
            v5 = (unsigned int *)v16;
        } while ((unsigned int)v5 < v18);
    }
    *(unsigned int *)(t + 0x14) = *(unsigned int *)(t + 0x14) - v30;
    v5b = (unsigned int *)*(unsigned int *)(t + 0x10);
    v18b = *(unsigned int *)(t + 0x14);
    if ((unsigned int)v5b < v18b) {
        do {
            v3b = *v5b;
            v16b = (unsigned int)(v5b + 3);
            v6b = v5b[1];
            v4b = v3b;
            if (v3b < v6b) {
                unsigned int vb = v3b + 0x14;
                while (vb < v6b) { vb += 0x14; }
            }
            v2b = (unsigned int)((s32)((unsigned int)(v5b[2] - v4b) * 0xCCCCCCCDu) >> 2);
            if (v2b != 0) {
                unsigned int bytes = v2b * 0x14;
                if (bytes == 0) {
                    *(unsigned int *)v4b = D_0040E618[-1];
                    D_0040E618[-1] = (int)v4b;
                } else {
                    func_002B2028((void *)v4b);
                }
            }
            v5b = (unsigned int *)v16b;
        } while ((unsigned int)v5b < v18b);
    }
    v4c = (unsigned int *)*(unsigned int *)(p19 + 0x0);
    v3c = *(unsigned int *)(p19 + 0x8) - (unsigned int)v4c;
    cnt = (unsigned int)((s32)(v3c * 0xAAAAAAABu) >> 2);
    if (cnt != 0) {
        unsigned int bytes = cnt * 0xC;
        if (bytes != 0) {
            func_002B2028(v4c);
        } else {
            *v4c = D_0040E618[-1];
            D_0040E618[-1] = (int)v4c;
        }
    }
    if (sp0) D_002AD390(arg0);
    (void)pad;
}
