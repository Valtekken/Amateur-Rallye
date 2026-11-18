extern int func_003A6460(int, int);

int func_00397D50(int arg0, int arg1, int arg2, signed char arg3) {
    int sp0 = arg0;
    int sp10 = arg2;
    while (sp0 != arg1) {
        func_003A6460(sp10, sp0);
        sp0 += 8;
        sp10 += 8;
    }
    return sp10;
}
