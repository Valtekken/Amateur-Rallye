extern void **func_0015E848(void);
extern void func_002A1188(s32);
extern s32 func_002A1700(void);

void func_003ED9A0(void) {
    void **vtable = func_0015E848();
    void *obj = *vtable;
    s16 offset = *(s16 *)((char *)obj + 0x40);
    void (*func)(void *) = *(void (**)(void *))((char *)obj + 0x44);
    func((char *)vtable + offset);
    func_002A1188(func_002A1700());
}
