/* func_001D4C98 - with needed = arg3 + (base + arg1) */
extern s32 func_002B2078(s32, s32, u32);
extern s32 func_003F931C(u32, s32, s32);

void func_001D4C98(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_16;
    u32 temp_3;
    u32 temp_5;
    u32 temp_6;

    temp_4 = *(s32 *)((u8 *)arg0 + 0x8);
    if ((temp_4 != 0) && (arg1 >= 0)) {
        temp_6 = *(u32 *)((u8 *)arg0 + 0x4);
        temp_5 = arg3 + (temp_4 + arg1);
        if (temp_6 < temp_5) {
            var_16 = (temp_6 - temp_4) * 2;
            if ((u32)(temp_4 + var_16) < temp_5) {
                var_16 = var_16 * 2;
                while ((u32)(temp_4 + var_16) < temp_5) {
                    var_16 = var_16 * 2;
                }
            }
            temp_2 = func_002B2078(*(s32 *)((u8 *)arg0 + 0x8), var_16, temp_6);
            if (temp_2 != 0) {
                temp_4_2 = *(s32 *)((u8 *)arg0 + 0x8);
                *(u32 *)((u8 *)arg0 + 0x4) = (u32)(temp_2 + var_16);
                *(u32 *)((u8 *)arg0 + 0xC) = (u32)(temp_2 + (*(u32 *)((u8 *)arg0 + 0xC) - temp_4_2));
                *(u32 *)((u8 *)arg0 + 0x10) = (u32)(temp_2 + (*(u32 *)((u8 *)arg0 + 0x10) - temp_4_2));
                *(s32 *)((u8 *)arg0 + 0x8) = temp_2;
                goto block_8;
            }
        } else {
block_8:
            func_003F931C(*(u32 *)((u8 *)arg0 + 0xC), arg2, arg3);
            temp_3 = *(u32 *)((u8 *)arg0 + 0xC) + arg3;
            *(u32 *)((u8 *)arg0 + 0xC) = temp_3;
            if ((u32)*(u32 *)((u8 *)arg0 + 0x10) < temp_3) {
                *(u32 *)((u8 *)arg0 + 0x10) = temp_3;
            }
        }
    }
}
