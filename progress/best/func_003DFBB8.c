extern u64 D_0043ADC0[24];

u32 func_003DFBB8(u32 arg0, u32 arg1) {
    u32 ret = 0;
    if (arg0 < 10) {
        u64 *p = (u64 *)((u8 *)D_0043ADC0 + arg0 * 16);
        u64 v = p[1];
        u32 shift = 0;
        if (v == (u64)0xFFFFULL << 24) {
            shift = 0x18;
        } else if (v == (u64)0xFF00ULL << 24) {
            shift = 0x20;
        } else if (v > (u64)0xFFFFULL << 24) {
            shift = 0;
        }
        ret = (u32)p[0] | (arg1 << shift);
    }
    return ret;
}
