typedef struct { char pad[0xC]; s32 val; } S;

extern void func_0011E650(s32, s32, s32);
extern void func_0011DFB8(s32);
extern s32 func_0011E528(s32);
extern s32 func_0011E2B8(s32, s32);
extern void func_0011E278(s32, s32);
extern s32 func_00196E10();
extern void func_00196550(s32, s32);
extern s32 func_001E4280();
extern void func_001D4040(void *, void *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_00193B60();
extern void func_00191FD0(s32, s32);
extern char D_00445DC0[], D_00447E10[];

static inline void finish(s32 x, s32 v, S *arg0) {
    func_00191FD0(x, v);
    func_0011E278(arg0->val, 6);
}

void func_0012A450(S *arg0) {
    s32 r, t, t2;
    char sp[0x10];

    func_0011E650(arg0->val, 3, 0);
    func_0011DFB8(arg0->val);
    if (func_0011E528(arg0->val) != 0) return;
    r = func_0011E2B8(arg0->val, 1);
    switch (r) {
    case -3:
        func_00196550(func_00196E10(), -1);
        func_0011E278(arg0->val, 0x1D);
        break;
    case 1:
        t = func_001E4280();
        func_001D4040(sp, D_00445DC0);
        func_001E3EC0(t, sp, 0);
        t2 = func_001E4280();
        func_001D4040(sp, D_00447E10);
        func_001E3EC0(t2, sp, 0);
        finish(func_00193B60(), 1, arg0);
        break;
    case 2:
        t = func_001E4280();
        func_001D4040(sp, D_00445DC0);
        func_001E3EC0(t, sp, 1);
        t2 = func_001E4280();
        func_001D4040(sp, D_00447E10);
        func_001E3EC0(t2, sp, 0);
        finish(func_00193B60(), 2, arg0);
        break;
    case 3:
        t = func_001E4280();
        func_001D4040(sp, D_00445DC0);
        func_001E3EC0(t, sp, 2);
        t2 = func_001E4280();
        func_001D4040(sp, D_00447E10);
        func_001E3EC0(t2, sp, 0);
        finish(func_00193B60(), 2, arg0);
        break;
    }
}
