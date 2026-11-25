extern s32 func_00193B60(void);
extern s32 func_00191630(s32);
extern s32 func_00194C40(void);
extern s32 func_00194738(s32);
extern void func_0011E278(s32, s32);

void func_001348E0(void *arg0) {
    s32 val = func_00191630(func_00193B60());
    s32 idx = val - 1;
    if ((u32)idx < 13u) {
        switch (val) {
            case 1: case 2: case 3: case 4:
            case 9: case 10: case 11: case 12: case 13:
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x17);
                } else {
                    func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x1B);
                }
                break;
            case 5:
                func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x1D);
                break;
            case 6:
                func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x11);
                break;
            case 8:
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x20);
                } else {
                    func_0011E278(*(s32 *)((u8 *)arg0 + 0xC), 0x2);
                }
                break;
            case 7:
                break;
        }
    }
}
