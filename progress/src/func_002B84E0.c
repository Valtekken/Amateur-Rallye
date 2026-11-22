extern s32 D_00476518[];
extern s32 D_0047FA08[];
void D_002AD390(void *);
void func_001DB118(void *);
s32 func_002B8598(void);
void func_002B8768(void *);

void func_002B84E0(void *arg0, s32 arg1) {
    void *p;
    *(void **)((char *)arg0 + 8) = &D_0047FA08;
    if (func_002B8598() != 0) {
        func_002B8768(arg0);
    }
    p = *(void **)((char *)arg0 + 0x10);
    if (p != 0) {
        D_002AD390(p);
    }
    *(void **)((char *)arg0 + 8) = &D_00476518;
    func_001DB118(arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
