extern void *func_0017E620(void);
extern void func_001D2CD8(void *, void *);

void func_00298FF0(void *arg0, s32 arg1) {
    void **obj = (void **)func_0017E620();
    void *vt = *obj;
    void *(*fn)(void *, s32, s32) = *(void *(**)(void *, s32, s32))((u8 *)vt + 0x2C);
    s16 offset = *(s16 *)((u8 *)vt + 0x28);
    void *ret = fn((void *)((u8 *)obj + offset), arg1, 0);
    func_001D2CD8((u8 *)arg0 + 0x4C, ret);
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
}
