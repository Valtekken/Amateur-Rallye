extern int func_001C5A70(void *, void *, float *);
extern void func_0023EDD0(void *);
extern void func_0023F370(void *, int);
extern void func_0023F7D8(void *);
extern int func_00240858(void *, void *);
extern void func_00251B28(void *);
extern void func_00251B30(void *, int);
extern int func_00251B58(void *, void *, void *, void *, void *);
extern void func_003F93CC(void *, void *, int);

int func_0024FB08(void *arg0, void *arg1, void *arg2, void *arg3) {
    char sp[0xB0];
    void *s0 = arg1;
    void *s2 = arg3;
    int count;
    int i;

    *(void **)(sp + 0xA0) = arg2;
    func_0023F7D8(arg0);
    *(int *)(sp + 0xA4) = 0;
    func_00251B28(sp);
    func_0023EDD0(sp + 0x10);
    func_0023EDD0(sp + 0x50);

    if (func_00240858(s0, *(void **)(sp + 0xA0)) != 0) {
        char *s3 = sp + 0x28;
        char *s4 = sp + 0x1C;
        char *s5 = sp + 0x68;
        char *s7 = sp + 0x5C;
        if (func_00251B58(sp, *(void **)(sp + 0xA0), s0, sp + 0x10, sp + 0x50) != 0) {
            count = (*(int *)(s3 + 4) - *(int *)s3) >> 2;
            for (i = 0; i < count; i++) {
                void *obj = *(void **)(*(int *)(sp + 0x28) + i * 4);
                if (*(int *)((char *)obj + 0x18) == *(int *)((char *)*(void **)(sp + 0xA0) + 0x10)) {
                    void *node = *(void **)obj;
                    void *inner = *(void **)node;
                    if (inner != node) {
                        do {
                            float *pt = *(float **)((char *)*(void **)((char *)inner + 8) + 0xC);
                            float f2 = pt[0];
                            float f0 = pt[2];
                            float f1 = pt[1];
                            void *dst = *(void **)((char *)s2 + 4);
                            void *endp = *(void **)((char *)s2 + 8);
                            *(float *)(sp + 0x98) = f0;
                            *(float *)(sp + 0x94) = f1;
                            *(float *)(sp + 0x90) = f2;
                            if (dst != endp) {
                                if (dst != 0) {
                                    *(float *)dst = f2;
                                    *(float *)((char *)dst + 4) = *(float *)(sp + 0x94);
                                    *(float *)((char *)dst + 8) = *(float *)(sp + 0x98);
                                }
                                *(int *)((char *)s2 + 4) = *(int *)((char *)s2 + 4) + 0xC;
                            } else {
                                func_001C5A70(s2, dst, (float *)(sp + 0x90));
                            }
                            inner = *(void **)inner;
                        } while (inner != *(void **)obj);
                    }
                    *(int *)(sp + 0xA4) = 1;
                }
            }
        }
    }

    {
        void *b, *e;
        char *s3 = sp + 0x28;
        char *s4 = sp + 0x1C;
        char *s5 = sp + 0x68;
        char *s7 = sp + 0x5C;

        b = *(void **)(sp + 0x28); e = *(void **)(s3 + 4);
        func_003F93CC(b, e, 0);
        *(int *)(s3 + 4) = *(int *)(s3 + 4) - ((int)e - (int)b);

        b = *(void **)(sp + 0x10); e = *(void **)(sp + 0x14);
        func_003F93CC(b, e, 0);
        *(int *)(sp + 0x14) = *(int *)(sp + 0x14) - ((int)e - (int)b);

        b = *(void **)(sp + 0x1C); e = *(void **)(s4 + 4);
        func_003F93CC(b, e, 0);
        *(int *)(s4 + 4) = *(int *)(s4 + 4) - ((int)e - (int)b);

        b = *(void **)(sp + 0x68); e = *(void **)(s5 + 4);
        func_003F93CC(b, e, 0);
        *(int *)(s5 + 4) = *(int *)(s5 + 4) - ((int)e - (int)b);

        b = *(void **)(sp + 0x50); e = *(void **)(sp + 0x54);
        func_003F93CC(b, e, 0);
        *(int *)(sp + 0x54) = *(int *)(sp + 0x54) - ((int)e - (int)b);

        b = *(void **)(sp + 0x5C); e = *(void **)(s7 + 4);
        func_003F93CC(b, e, 0);
        *(int *)(s7 + 4) = *(int *)(s7 + 4) - ((int)e - (int)b);
    }

    func_0023F370(sp + 0x50, 2);
    func_0023F370(sp + 0x10, 2);
    func_00251B30(sp, 2);
    return *(int *)(sp + 0xA4);
}
