extern void func_0011E650(s32, s32, s32);
extern s32 func_002971B0(s32);
extern s32 func_00297500(void);

void func_00140EB8(void *arg0) {
    s32 n = func_002971B0(func_00297500());
    if (n > 0) {
        switch (n) {
        case 1:
        case 2:
        case 3:
            func_0011E650(*(s32 *)((u8 *)arg0 + 0xC), 3, 0);
            break;
        case 4:
            func_0011E650(*(s32 *)((u8 *)arg0 + 0xC), 3, 0);
            break;
        }
    }
}
