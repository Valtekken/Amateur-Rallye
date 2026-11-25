extern volatile unsigned char func_001D2458(void *, const char *);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(void *);
extern void *func_0017E620(void);
extern void func_00127A60(void *);
extern char D_00444878[];
extern char D_004486D8[];
extern char D_004486F8[];

void func_001284B8(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    s32 sp20[4];
    void *sp10p = sp10;
    s32 k;
    void *obj;
    void *vtable;
    char *(*fn)(void *, s32, s32);
    char *str;

    func_00127A60(arg0);
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
    *(s32 *)((u8 *)arg0 + 0x40) = 1;
    k = func_001E4280();
    *(s32 *)((u8 *)arg0 + 0x34) = k;
    func_001D2458(sp0, D_004486D8);
    func_001D2458(sp10, D_00444878);
    func_001E3FE0(k, sp0, sp10);
    D_002AD390((void *)sp10[0]);
    D_002AD390((void *)sp0[0]);
    k = func_001E4280();
    func_001D2458(sp0, D_004486F8);
    obj = func_0017E620();
    vtable = *(void **)obj;
    fn = *(char *(**)(void *, s32, s32))((u8 *)vtable + 0x2C);
    str = fn((u8 *)obj + *(s16 *)((u8 *)vtable + 0x28), 0x2D6, 3);
    func_001D2458(sp20, str);
    func_001E3FE0(k, sp0, sp20);
    D_002AD390((void *)sp20[0]);
    D_002AD390((void *)sp0[0]);
}
