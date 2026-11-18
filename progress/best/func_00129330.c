extern s32 func_001E4280(void);
extern void func_00129268(void);
extern void func_001D2458(void*, const char*);
extern void func_001E3FE0(s32, void*, void*);
extern void D_002AD390(void*);
extern void **func_0017E620(void);
extern char D_004486D8[], D_00448BF8[];

static inline char *vmsg(s32 arg2){
    void **obj = (void**)func_0017E620();
    void *vt = *obj;
    char *(*fn)(void*,s32,s32) = *(char *(**)(void*,s32,s32))((char*)vt+0x2C);
    return fn((char*)obj + *(s16*)((char*)vt+0x28), 0x2D0, arg2);
}

void func_00129330(void) {
    s32 sp0[4], sp10[4], sp20[4];
    s32 k;
    char *str;
    void *sp10p, *sp20p;
    func_00129268();
    k = func_001E4280();
    func_001D2458(sp0, D_004486D8);
    sp10p = sp10;
    str = vmsg(2);
    func_001D2458(sp10p, str);
    func_001E3FE0(k, sp0, sp10);
    D_002AD390((void*)sp10[0]);
    D_002AD390((void*)sp0[0]);
    k = func_001E4280();
    func_001D2458(sp0, D_00448BF8);
    sp20p = sp20;
    str = vmsg(5);
    func_001D2458(sp20p, str);
    func_001E3FE0(k, sp0, sp20);
    D_002AD390((void*)sp20[0]);
    D_002AD390((void*)sp0[0]);
}
