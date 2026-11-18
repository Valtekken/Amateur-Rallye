#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((char *)(expr) + (offset)))
extern s32 func_0010EB88(s32);
extern s32 func_00110050(void);
extern void func_0011DFB8(s32);
extern void func_0011E278(s32, int);
extern s32 func_0011E2B8(s32, int);
extern s32 func_0011E528(s32);
extern void func_0011E650(s32, int, int);
extern void func_00191C50(s32, int);
extern s32 func_00193B60(void);
extern s32 func_00194738(s32);
extern s32 func_00194C40(void);

void func_0012A888(void *arg0) {
    s32 temp_2;

    func_0011E650(M2C_FIELD(arg0, s32 *, 0xC), 3, 0);
    func_0011DFB8(M2C_FIELD(arg0, s32 *, 0xC));
    if (func_0011E528(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        temp_2 = func_0011E2B8(M2C_FIELD(arg0, s32 *, 0xC), 1);
        switch (temp_2) {
        case -3:
            if (func_00194738(func_00194C40()) != 0) {
                func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x20);
            } else {
                func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 2);
            }
            break;
        case 1:
            func_00191C50(func_00193B60(), 0);
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x1E);
            break;
        case 2:
            if (func_0010EB88(func_00110050()) != 0) {
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x35);
                } else {
                    func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x24);
                }
            }
            break;
        }
    }
}
