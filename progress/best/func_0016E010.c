extern void *func_002015D8(void);
extern int func_0021E9C0(int, void *);
extern int func_0021F4B0(void);
extern void func_003F93CC(void *, void *, int);

void func_0016E010(char *arg0) {
    int i;
    char *vec;
    char *elem;
    char *end;
    char *p;
    void **obj;
    char *v;

    vec = arg0 + 8;
    if (((*(char **)(vec + 4) - *(char **)vec) >> 2) != 0) {
        i = 0;
        do {
            elem = *(char **)(*(char **)vec + i * 4);
            if (*(int *)(elem + 0x20) == 0) {
                *(int *)(elem + 0x20) = func_0021E9C0(func_0021F4B0(), elem + 0x1C);
                if (*(int *)(elem + 0x20) == 0) {
                    p = *(char **)vec + i * 4;
                    end = *(char **)(vec + 4);
                    if (p + 4 != end) {
                        func_003F93CC(p, p + 4, ((end - (p + 4)) >> 2) * 4);
                    }
                    *(char **)(vec + 4) -= 4;
                }
            }
            i++;
        } while ((u32)i < (u32)((*(char **)(vec + 4) - *(char **)vec) >> 2));
    }

    vec = arg0 + 0x2C;
    if (((*(char **)(vec + 4) - *(char **)vec) >> 2) != 0) {
        i = 0;
        do {
            elem = *(char **)(*(char **)vec + i * 4);
            if (*(int *)(elem + 0x1D4) == 0) {
                *(int *)(elem + 0x1D4) = func_0021E9C0(func_0021F4B0(), elem + 0x1D0);
                if (*(int *)(elem + 0x1D4) == 0) {
                    p = *(char **)vec + i * 4;
                    end = *(char **)(vec + 4);
                    if (p + 4 != end) {
                        func_003F93CC(p, p + 4, ((end - (p + 4)) >> 2) * 4);
                    }
                    *(char **)(vec + 4) -= 4;
                }
            }
            i++;
        } while ((u32)i < (u32)((*(char **)(vec + 4) - *(char **)vec) >> 2));
    }

    obj = *(void ***)((char *)func_002015D8() + 8);
    if (obj != 0) {
        v = (char *)obj[0];
        ((void (*)(char *))*(int *)(v + 0x1C))((char *)obj + *(short *)(v + 0x18));
    }
}
