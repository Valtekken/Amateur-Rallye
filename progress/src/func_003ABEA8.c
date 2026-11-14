void *func_003AB7F8(register void *arg0) {
    (*(s32 *)((s8 *)arg0 + 4))++;
    return arg0;
}

void *func_003A3268(void *);
void func_003A3390(void *);
s32 func_003AB660(void *);

s32 *func_003ABCC8(register s32 *arg0, register s32 *arg1) {
    if (arg1 != arg0) {
        func_003A3390(func_003A3268(arg0));
        *arg0 = func_003AB660(func_003A3268(arg1));
    }
    return arg0;
}

int func_003A34D0(void *, int);
void func_003B0EE0(void *);
void func_003B1340(void *, void *);
int func_003B13A0(void *, void *);

typedef struct { char _a[0x10]; int ret; char _b[0x0c]; } S_003ABDC0;

int func_003ABDC0(register void *arg0, register void *arg1) {
    S_003ABDC0 s;
    func_003B0EE0(&s);
    func_003B1340(&s, arg1);
    s.ret = func_003B13A0(arg0, &s);
    func_003A34D0(&s, 2);
    return s.ret;
}

int func_003B1780(void *, void *);

int func_003ABEA8(register void *arg0, register void *arg1) {
    return func_003B1780(arg0, arg1);
}
