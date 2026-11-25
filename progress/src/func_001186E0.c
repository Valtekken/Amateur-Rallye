extern s32 func_00195788(void *, s32);
extern s32 func_00195B58(void *, s32);
extern void *func_00196028(void);

s32 func_001186E0(u32 *arg0) {
    if (func_00195B58(func_00196028(), 6) != 0) return 1;
    if (func_00195B58(func_00196028(), 0) != 0) return 1;
    switch (*arg0) {
    case 0: case 1: case 2:
        return 1;
    case 3: return func_00195788(func_00196028(), 0);
    case 4: return func_00195788(func_00196028(), 1);
    case 5: return func_00195788(func_00196028(), 2);
    case 6: return func_00195788(func_00196028(), 9);
    case 11: return func_00195788(func_00196028(), 3);
    case 12: return func_00195788(func_00196028(), 4);
    case 13: return func_00195788(func_00196028(), 5);
    case 14: return func_00195788(func_00196028(), 0xA);
    case 19: return func_00195788(func_00196028(), 6);
    case 20: return func_00195788(func_00196028(), 7);
    case 21: return func_00195788(func_00196028(), 8);
    case 22: return func_00195788(func_00196028(), 0xB);
    case 23: return func_00195788(func_00196028(), 0xC);
    case 24: return func_00195788(func_00196028(), 0xD);
    case 25: case 26: case 27: case 28:
        return func_00195788(func_00196028(), 0xE);
    }
    return 1;
}
