s32 func_003B1F80(s32);
s32 func_003B35F0(s32, s32);

s32 func_003B1FD0(register s32 arg0, register s32 arg1) {
    s32 val;
    val = func_003B1F80(arg0);
    func_003B35F0(val + 8, arg1);
    return val;
}

void *func_003B1F48(void *, void *);
void *func_003B3668(void *);

void *func_003B2048(register void *arg0, register void *arg1, s32 arg2) {
    func_003B1F48((void *)0, arg1);
    func_003B3668(arg1);
    func_003B1F48(arg0, (void *)0);
    return arg0;
}

extern void func_003A6BE0(void *);
extern void func_003A6C08(void *, void *);
extern void func_003AD930(void *, void *);

void *func_003B20D0(register void *arg0, register void *arg1, register void **arg2) {
    void *node = *arg2;
    void *next = *(void **)node;
    void *prev = *(void **)((u8 *)node + 4);
    *(void **)prev = next;
    *(void **)next = prev;
    func_003A6BE0((u8 *)node + 8);
    func_003A6C08(arg1, node);
    func_003AD930(arg0, next);
    return arg0;
}

u8 func_003B2428(register void *arg0) {
    return *(u8 *)((u8 *)arg0 + 8);
}
