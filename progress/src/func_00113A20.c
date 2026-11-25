extern void *D_002AD408(int);
extern void func_001D4040(void *, char *);
extern void func_001D4810(void *, void *);
extern void func_001E3D10(s32, void *, int);
extern void *func_00297E40(void *);
extern void func_00297E58(void *, int, int, int, int);
extern void func_00114568(void *);
extern void *func_0017E620(void);
extern void func_001136A8(void *, void *);
extern void func_001139B8(void *, void *);
extern void *func_001138C0(char *);

extern char D_00445D80[];
extern char D_004448F8[];
extern char D_00445D98[];
extern char D_00444D28[];
extern char D_00446628[];
extern char D_004466F8[];

void func_00113A20(void *arg0, void *arg1) {
    int sp[4];
    void *tmp;

    *(void **)((char *)arg0 + 0x78) = arg1;

    func_001D4040(sp, D_00445D80);
    *(int *)((char *)arg0 + 0x48) = sp[0];
    func_001D4040(sp, D_004448F8);
    *(int *)((char *)arg0 + 0x4C) = sp[0];
    func_001D4040(sp, D_00445D98);
    *(int *)((char *)arg0 + 0x50) = sp[0];
    func_001D4040(sp, D_00444D28);
    *(int *)((char *)arg0 + 0x54) = sp[0];
    func_001D4040(sp, D_00446628);
    *(int *)((char *)arg0 + 0x58) = sp[0];

    func_001E3D10(func_001E4280(), (char *)arg0 + 0x5C, 0);

    tmp = func_00297E40(D_002AD408(0x10));
    *(void **)((char *)arg0 + 0x38) = tmp;
    func_00297E58(tmp, *(int *)((char *)arg0 + 0x10), 0, *(int *)((char *)arg0 + 0x14), 0);

    func_00114568(arg0);

    {
        void **obj = (void **)func_0017E620();
        char *v = (char *)*obj;
        void *(*fn)(void *, int) = *(void *(**)(void *, int))(v + 0x34);
        short off = *(short *)(v + 0x30);
        void *res = fn((char *)obj + off, *(int *)((char *)arg0 + 0x20));
        func_001D4810((char *)arg0 + 0x70, res);
    }

    func_001136A8(arg0, (char *)*(void **)((char *)arg1 + 0x4C) + 0x50);
    func_001139B8(arg0, (char *)*(void **)((char *)arg1 + 0x4C) + 0x50);

    *(void **)((char *)arg0 + 0x84) = func_001138C0(D_004466F8);
    *(int *)((char *)arg0 + 0x28) = func_001E3650(func_001E4280(), (s32)(char *)arg0 + 0x40);
}
