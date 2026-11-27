extern void D_002AD390(void *);
extern void func_00127A60(void *);
extern void *func_0017E620(void);
extern volatile unsigned char func_001D2458(void *, const char *);
extern void func_001E3FE0(s32, void *, void *);
extern char D_004486D8[];
extern s32 func_001E4280(void);
void func_001286E8(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    s32 temp;
    void **obj;
    void *vtable;
    char *(*fn)(void *, s32, s32);
    void *sp10p;
    char *str;

    func_00127A60(arg0);
    ((s32 *)arg0)[0x38 / 4] = 0;
    ((s32 *)arg0)[0x30 / 4] = 1;
    ((s32 *)arg0)[0x28 / 4] = 1;
    temp = func_001E4280();
    func_001D2458(sp0, D_004486D8);
    sp10p = sp10;
    obj = (void **)func_0017E620();
    vtable = *obj;
    fn = *(char *(**)(void *, s32, s32))((u8 *)vtable + 0x2C);
    str = fn((u8 *)obj + *(s16 *)((u8 *)vtable + 0x28), 0x2D2, 2);
    func_001D2458(sp10p, str);
    func_001E3FE0(temp, sp0, sp10);
    D_002AD390((void *)sp10[0]);
    D_002AD390((void *)sp0[0]);
}
