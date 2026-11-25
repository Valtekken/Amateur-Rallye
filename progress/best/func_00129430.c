extern void D_002AD390(void *);
extern void func_00127A60(void *);
extern void *func_0017E620(void);
extern volatile unsigned char func_001D2458(void *, const char *);
extern void func_001E3FE0(s32, void *, void *);
extern s32 func_00129268(void);
extern s32 func_001E4280(void);
extern char D_004486D8[];
extern char D_00448BF8[];

void func_00129430(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    s32 sp20[4];
    s32 k;
    void **obj;
    void *vtable;
    char *(*fn)(void *, s32, s32);
    void *sp10p;
    void *sp20p;
    char *str;

    func_00129268();
    k = func_001E4280();
    func_001D2458(sp0, D_004486D8);
    sp10p = sp10;
    obj = (void **)func_0017E620();
    vtable = *obj;
    fn = *(char *(**)(void *, s32, s32))((u8 *)vtable + 0x2C);
    str = fn((u8 *)obj + *(s16 *)((u8 *)vtable + 0x28), 0x2D0, 0);
    func_001D2458(sp10p, str);
    func_001E3FE0(k, sp0, sp10);
    D_002AD390((void *)sp10[0]);
    D_002AD390((void *)sp0[0]);
    k = func_001E4280();
    func_001D2458(sp0, D_00448BF8);
    sp20p = sp20;
    obj = (void **)func_0017E620();
    vtable = *obj;
    fn = *(char *(**)(void *, s32, s32))((u8 *)vtable + 0x2C);
    str = fn((u8 *)obj + *(s16 *)((u8 *)vtable + 0x28), 0x2D0, 5);
    func_001D2458(sp20p, str);
    func_001E3FE0(k, sp0, sp20);
    D_002AD390((void *)sp20[0]);
    D_002AD390((void *)sp0[0]);
}
