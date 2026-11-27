extern void func_0016DCA0(s32, s32);
extern void func_00177B70(s32, s32);
extern void func_00197F68(s32, s32);
extern void func_0023A528(s32, s32);
extern void func_0023B758(s32, s32);
extern void func_0023C778(s32, s32);
extern void func_00241958(s32, s32);
extern void func_00259328(s32, s32);
extern void func_0025C868(s32, s32);
extern void func_0025DF10(s32, s32);
extern void func_0025E8A8(s32, s32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u8 D_0040E618[];
extern u8 D_0044DCD8[];
extern u8 D_00474050[];

void func_00171A10(void *arg0, s32 arg1) {
    u8 *a = (u8 *)arg0;
    u8 *var_2;
    s32 i;
    s32 n;
    u8 *elem;
    u8 *vt;
    u8 *vec;
    s32 arg1_and1;

    *(u8 **)(a + 0x8) = D_00474050;

    if (*(s32 *)(a + 0x2C) != 0) func_0023A528(*(s32 *)(a + 0x2C), 3);
    if (*(s32 *)(a + 0x30) != 0) func_0023B758(*(s32 *)(a + 0x30), 3);
    if (*(s32 *)(a + 0x34) != 0) func_0016DCA0(*(s32 *)(a + 0x34), 3);
    if (*(s32 *)(a + 0x38) != 0) func_00259328(*(s32 *)(a + 0x38), 3);
    if (*(s32 *)(a + 0x3C) != 0) func_0025C868(*(s32 *)(a + 0x3C), 3);
    if (*(s32 *)(a + 0x40) != 0) func_0023C778(*(s32 *)(a + 0x40), 3);
    if (*(s32 *)(a + 0x44) != 0) func_00241958(*(s32 *)(a + 0x44), 3);
    if (*(s32 *)(a + 0x48) != 0) func_0025DF10(*(s32 *)(a + 0x48), 3);
    if (*(s32 *)(a + 0x4C) != 0) func_0025E8A8(*(s32 *)(a + 0x4C), 3);

    var_2 = a + 0x20;
    if (*(s32 *)(a + 0x50) != 0) {
        func_00197F68(*(s32 *)(a + 0x50), 3);
        var_2 = a + 0x20;
    }

    arg1_and1 = arg1 & 1;
    i = 0;
    n = (s32)(*(u8 **)(var_2 + 4) - *(u8 **)(a + 0x20)) >> 2;
    if (n > 0) {
        do {
            u8 **arr = *(u8 ***)(a + 0x20);
            elem = arr[i];
            if (elem != NULL) {
                vt = *(u8 **)(elem + 0x14);
                ((void (*)(u8 *, s32)) * (u8 **)(vt + 0xC))(elem + *(s16 *)(vt + 8), 3);
            }
            i += 1;
        } while (i < n);
    }

    /* loop 2 over +0x14 */
    {
        u8 *base = a + 0x14;
        i = 0;
        n = (s32)(*(u8 **)(base + 4) - *(u8 **)(a + 0x14)) >> 2;
        if (n > 0) {
            do {
                u8 **arr = *(u8 ***)(a + 0x14);
                u8 *p = arr[i];
                if (p != NULL) {
                    func_00177B70((s32)p, 3);
                }
                i += 1;
            } while (i < n);
        }
    }

    /* free +0x20 vector */
    vec = *(u8 **)(a + 0x20);
    {
        s32 sz = (s32)(*(u8 **)(var_2 + 8) - vec) >> 2;
        if (sz != 0) {
            if ((sz << 2) != 0) {
                func_002B2028(vec);
            } else {
                *(u32 *)vec = *(u32 *)(D_0040E618 - 4);
                *(u32 *)(D_0040E618 - 4) = (u32)vec;
            }
        }
    }

    /* free +0x14 vector */
    {
        u8 *base = a + 0x14;
        vec = *(u8 **)(a + 0x14);
        s32 sz = (s32)(*(u8 **)(base + 8) - vec) >> 2;
        if (sz != 0) {
            if ((sz << 2) != 0) {
                func_002B2028(vec);
            } else {
                *(u32 *)vec = *(u32 *)(D_0040E618 - 4);
                *(u32 *)(D_0040E618 - 4) = (u32)vec;
            }
        }
    }

    *(u8 **)(a + 0x8) = D_0044DCD8;
    if (arg1_and1) {
        D_002AD390(a);
    }
}
