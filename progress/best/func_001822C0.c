extern int func_001D4010(char *);
extern void func_003FA310(char *, char *, int, int);
extern int func_0021F4B0(void);
extern void func_001D4040(char *, char *);
extern void *func_0021E9C0(int, char *);
extern int D_002AD408(int);
extern void *func_0019FCD0(int);
extern void func_001D4810(char *, char *);
extern void func_00262F88(void *, char *);
extern void func_0021E620(void *, int, void *);
extern void func_003F9698(char *, char *);
extern char D_0046FC10[];
extern char D_0046FC18[];
extern char D_0046FC40[];

void func_001822C0(void *arg0, char *arg1) {
    char sp[0x100];
    char sp100[0x20];
    float sp110, sp114, sp118;
    int i;

    i = 0;
    do {
        int r;
        void *obj;
        func_003FA310(sp, D_0046FC10, func_001D4010(arg1 + 0x5C), i);
        r = func_0021F4B0();
        func_001D4040(sp100, sp);
        obj = func_0021E9C0(r, sp100);
        if (obj != 0) {
            if (i < 4) {
                void *tmp;
                float f20 = 487.50003f;
                float f21 = 900.0f;
                tmp = func_0019FCD0(D_002AD408(0x3C));
                *(int *)((char *)tmp + 0x10) = 1;
                *(float *)((char *)tmp + 0x14) = 500.0f;
                *(float *)((char *)tmp + 0x18) = 5.0f;
                sp114 = f21;
                sp118 = f20;
                sp110 = f20;
                *(float *)((char *)tmp + 0x1C) = f20;
                *(float *)((char *)tmp + 0x20) = sp114;
                *(float *)((char *)tmp + 0x24) = sp118;
                *(int *)sp100 = 0;
                func_001D4810(sp100, D_0046FC18);
                func_00262F88(*(void **)((char *)obj + 0x50), sp100);
                func_0021E620(obj, 0, tmp);
            } else {
                void *s = *(void **)((char *)obj + 0x50);
                *(unsigned long long *)((char *)s + 0x70) &= 0xBFFFFFFFull | ((unsigned long long)3 << 62); /* not right */
            }
        } else {
            func_003F9698(D_0046FC40, sp);
        }
        i++;
    } while (i < 4);

    *(int *)((char *)arg0 + 0x24) = 0;
}
