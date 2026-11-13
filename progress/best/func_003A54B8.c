extern void func_003A0BD8(void *, void *);
extern void func_00219DA8(void *, void *);

u16 func_003A5560(u16 *arg0) {
    return *arg0;
}

s64 func_003A5598(u64 *arg0) {
    return (s64)(s32)((*arg0 >> 16) & 0x7FFFF);
}

void *func_003A5DC8(void *arg0, void *arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8((char *)arg0 + 0xC, (char *)arg1 + 0xC);
    return arg0;
}

void func_003A54B8(u64 *arg0, f32 fparg0) {
    s32 n = (s32)(fparg0 * 1024.0f);
    if (n > 0xFFFF) n = 0xFFFF;
    if (n < 1) n = 1;
    *arg0 = (*arg0 & 0xFF0000000FFFFFFFULL) | ((u64)n << 36);
}
