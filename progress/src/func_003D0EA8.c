extern void func_003CE0D0(void **arg0, s32 arg1, u32 arg2);
extern void *func_003CD828(void **arg0);

typedef struct {
    u8 _pad0[8];
    s32 count;
    s32 flag;
} S_D_00436208;
extern S_D_00436208 D_00436208;

void func_003D0520(void **arg0) {
    void *temp = *arg0;
    if ((u32)(*(s32 *)((char *)temp - 8)) < 2U)
        return;
    func_003CE0D0(arg0, *(s32 *)((char *)temp - 0x10), 1);
}

void **func_003D0D30(void **arg0, void **arg1) {
    void *p = *arg1;
    void *q = (char *)p - 0x10;
    void *r;
    if (*(s32 *)((char *)q + 0xC) != 0) {
        r = func_003CD828((void **)q);
    } else {
        (*(s32 *)((char *)q + 0x8))++;
        r = p;
    }
    *arg0 = r;
    return arg0;
}

void **func_003D0D88(void **arg0) {
    void *r;
    if (D_00436208.flag != 0) {
        r = func_003CD828((void *)&D_00436208);
    } else {
        D_00436208.count++;
        r = (char *)&D_00436208 + 0x10;
    }
    *arg0 = r;
    return arg0;
}

void *func_003D0EA8(void *arg0) {
    if (*(s32 *)((char *)arg0 + 0xC) != 0)
        return func_003CD828((void **)arg0);
    (*(s32 *)((char *)arg0 + 0x8))++;
    return (char *)arg0 + 0x10;
}
