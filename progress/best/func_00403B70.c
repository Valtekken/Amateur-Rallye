extern void _iDisableIntc_2(void);

void func_00403B70(void) {
    volatile int x = 0;
    _iDisableIntc_2();
    x = x;
}
