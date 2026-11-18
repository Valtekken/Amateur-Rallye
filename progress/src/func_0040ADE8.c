extern s32 sceSifGetReg_2(s32);

s32 func_0040ADE8(void) {
    s32 reg = sceSifGetReg_2(4);
    if (reg & 0x10000) {
        return 1;
    } else {
        return 0;
    }
}
