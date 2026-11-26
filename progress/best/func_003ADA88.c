typedef struct { void *p; char _a[0xc]; s32 ret; char _b[0xc]; } S;
extern void func_003A4488(void *, s32);
extern void func_003A6B70(void *, void *);
extern void func_003AD968(void *, void *);
extern void func_003B1F18(void *);
extern void func_003B2048(void *, void *, s32);
extern void func_003A4418(s32, s32);
extern s32 D_0042FD60;
extern void *D_00487F08;
void *func_003ADA88(register void *arg0, register s32 arg1) {
    S s;
    *(void **)((char *)arg0 + 8) = &D_00487F08;
    func_003A4488(arg0, arg1);
    func_003B1F18((char *)arg0 + 4);
    s.p = arg0;
    func_003A6B70(&D_0042FD60, &s);
    func_003AD968(&s.ret, &D_0042FD60);
    *(s32 *)((char *)arg0 + 4) = s.ret;
    func_003B2048(&s.ret, (char *)arg0 + 4, 0);
    register void *r = arg0;
    func_003A4418(arg1, 2);
    return r;
}
