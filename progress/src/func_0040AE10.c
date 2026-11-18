extern void func_00403360(void);
extern s32 sceSifGetReg_2(s32);

s32 func_0040AE10(void) {
    if (sceSifGetReg_2(4) & 0x40000) {
        func_00403360();
        return 1;
    }
    return 0;
}
