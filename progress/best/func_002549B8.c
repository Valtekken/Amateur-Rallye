int func_002549B8(int unused0, int **a1, int unused2, int **a3) {
    volatile int sp0;
    volatile int sp4;
    volatile int sp8;
    volatile int spC;
    int *p1;
    int *p2;

    sp0 = 0;
    p1 = *a3;
    p2 = *p1;
    if (p2 != p1) {
        do {
            p2 = *p2;
            sp0++;
        } while (p2 != p1);
    }
    if ((unsigned)sp0 >= 2u) return 0;

    sp4 = 0;
    p1 = *a1;
    p2 = *p1;
    if (p2 != p1) {
        do {
            p2 = *p2;
            sp4++;
        } while (p2 != p1);
    }
    if (sp4 == 0) return 0;

    sp8 = 0;
    p1 = *a1;
    p2 = *p1;
    if (p2 != p1) {
        do {
            p2 = *p2;
            sp8++;
        } while (p2 != p1);
    }
    if ((unsigned)sp8 >= 2u) return 0;

    spC = 0;
    p1 = *a3;
    p2 = *p1;
    if (p2 != p1) {
        do {
            p2 = *p2;
            spC++;
        } while (p2 != p1);
    }
    if (spC == 0) return 1;
    return 1;
}
