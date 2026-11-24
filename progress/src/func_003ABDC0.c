extern int func_003A34D0(void *, int);
extern void func_003B0EE0(void *);
extern void func_003B1340(void *, void *);
extern int func_003B13A0(void *, void *);

typedef struct { char _a[0x10]; int ret; char _b[0xc]; } S;

int func_003ABDC0(register void *arg0, register void *arg1) {
    S s;
    register int r;
    func_003B0EE0(&s);
    func_003B1340(&s, arg1);
    s.ret = func_003B13A0(arg0, &s);
    r = s.ret;
    func_003A34D0(&s, 2);
    return r;
}
