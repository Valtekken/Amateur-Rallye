extern s32 _SetTLBEntry_4(s32);

s32 func_0040B7A0(s32 a) {
    if ((u32)(a - 0xD) >= 0x23U) {
        return -1;
    }
    return _SetTLBEntry_4(a);
}
