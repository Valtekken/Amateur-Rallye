extern void *D_002AD5A8(s32, u32);
extern void D_002AD530(s32);
extern void func_003F931C(void *, void *, s32);
extern s32 D_0043C000;
extern u8 D_1990[];

void func_0031B1F0(u8 *arg0, s32 arg1)
{
    u8 *temp_16 = *(u8 **)(arg0 + 0x14);
    s32 temp_3 = *(s32 *)(temp_16 + 0xC);

    if ((*(s32 *)(temp_16 + 0x8) - temp_3) < 0xC) {
        u32 temp_5 = (u32)temp_3 + 0x2C;
        s32 var_3 = 0;
        s32 temp_4;
        s32 temp_19;
        s32 temp_2;
        u32 temp_17;
        s32 temp_6;

        D_0043C000 = *(s32 *)(temp_16 + 0x10);

        if (temp_5 > 1U) {
            do {
                var_3 += 1;
            } while ((u32)(1 << var_3) < temp_5);
        }
        temp_4 = 1 << var_3;
        temp_19 = temp_4 - 0x20;
        temp_2 = (s32)D_002AD5A8(temp_4 * 4, temp_5);
        temp_6 = *(s32 *)(temp_16 + 0xC);
        temp_17 = ((u32)temp_2 + 0x7F) & 0xFFFFFF80U;

        if (temp_6 > 0) {
            func_003F931C((void *)temp_17, *(void **)temp_16, temp_6 * 4);
        }
        if (*(s32 *)(temp_16 + 0x4) != 0) {
            D_002AD530(*(s32 *)(temp_16 + 0x4));
        }
        *(s32 *)(temp_16 + 0x4) = temp_2;
        *(s32 *)(temp_16 + 0x0) = (s32)temp_17;
        *(s32 *)(temp_16 + 0x8) = temp_19;
        D_0043C000 = 0;
    }

    {
        s32 temp_4_3 = *(s32 *)(temp_16 + 0xC);
        s32 *base = *(s32 **)temp_16;
        s32 temp_4_4;
        s32 temp_6_2;
        s32 temp_9;
        s32 temp_4_5;
        s32 temp_5_2;

        base[temp_4_3] = 0x10000002;
        temp_4_4 = temp_4_3 + 1;
        *(s32 *)(temp_16 + 0xC) = temp_4_4;
        base[temp_4_4] = 0;
        temp_6_2 = temp_4_4 + 1;
        *(s32 *)(temp_16 + 0xC) = temp_6_2;
        base[temp_6_2] = 0x01000404;
        temp_9 = temp_4_4 + 2;
        *(s32 *)(temp_16 + 0xC) = temp_9;
        base[temp_9] = 0x6C018000;
        temp_4_5 = temp_4_4 + 3;
        *(s32 *)(temp_16 + 0xC) = temp_4_5;

        func_003F931C((void *)(*(s32 **)temp_16 + temp_4_5), (void *)arg1, 0x10);

        temp_5_2 = *(s32 *)(temp_16 + 0xC);
        *(s32 *)(temp_16 + 0xC) = temp_5_2 + 4;
        (*(s32 **)temp_16)[temp_5_2 + 4] = (s32)(((u32)(s32)D_1990 >> 3) | 0x14000000U);
        *(s32 *)(temp_16 + 0xC) = temp_5_2 + 5;
        (*(s32 **)temp_16)[temp_5_2 + 5] = 0;
        *(s32 *)(temp_16 + 0xC) = temp_5_2 + 6;
        (*(s32 **)temp_16)[temp_5_2 + 6] = 0;
        *(s32 *)(temp_16 + 0xC) = temp_5_2 + 7;
        (*(s32 **)temp_16)[temp_5_2 + 7] = 0;
        *(s32 *)(temp_16 + 0xC) = temp_5_2 + 8;
    }
}
