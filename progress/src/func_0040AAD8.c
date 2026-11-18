extern u8 D_004A14C0[];
extern u8 D_004A16C0[];

s32 func_0040AAD8(s32 arg0, u8 *arg1, u32 arg2) {
    if (func_00409F48() < 0) {
        return 0xFFFF0000;
    }
    if (arg2 >= 3U) {
        return 0xFFFEFFFE;
    }
    *(s32 *)D_004A14C0 = arg0;
    *(u32 *)(D_004A14C0 + 4) = arg2;
    if (func_00405E90((void *)D_004A16C0, 3, 0, (void *)D_004A14C0, 0x20, (void *)D_004A14C0, 0x20, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    if (arg2 == 0) {
        *arg1 = *(u8 *)D_004A14C0;
    } else if (arg2 == 1) {
        *(u16 *)arg1 = *(u16 *)D_004A14C0;
    } else if (arg2 == 2) {
        *(u32 *)arg1 = *(u32 *)D_004A14C0;
    } else {
        return 0xFFFEFFFE;
    }
    return 0;
}
