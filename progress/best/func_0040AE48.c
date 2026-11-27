extern void func_00404EA8(char *, char *);
extern void func_00405650(int);
extern void func_004057F0(void);
extern int func_0040ACA8(char *, int);
extern char D_0048CC40[];
extern char D_0048CC50[];

int func_0040AE48(char *arg0) {
    char sp[0x50];
    char *src;
    char *dst;
    char *p;
    char *base;
    unsigned char c;
    unsigned char c2;

    src = D_0048CC40;
    p = arg0;
    if (*p != 0) {
        do {
            p++;
        } while (*p != 0);
    }
    base = arg0 - 11;
    if ((unsigned int)(p - base) >= 0x51) {
        func_00404EA8(D_0048CC50, arg0);
        return 0;
    }

    func_00405650(0);
    func_004057F0();

    dst = sp;
    c = *src;
    if (*src != 0) {
        c2 = *arg0;
        do {
            *dst = c;
            src++;
            dst++;
            c = *src;
        } while (*src != 0);
        c = c2;
    } else {
        c = *arg0;
    }

    if (c != 0) {
        do {
            *dst = c;
            arg0++;
            dst++;
            c = *arg0;
        } while (c != 0);
    }
    *dst = 0;
    return func_0040ACA8(sp, 0);
}
