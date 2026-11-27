typedef void *(*VFn2)(void *, s32);
typedef void *(*VFn3)(void *, s32, s32);
typedef void (*VFnP)(void *, void *);
extern s32 func_00296530(s32, void *);
extern s32 func_00296710(void);
extern void func_002060F8(void *);
extern void *func_0017E620(void);
extern void func_001D4810(void *, void *);
extern void func_002062A8(void *, void *);
extern void func_001D2900(void *, void *);
extern void func_002062F0(void *, s32);
extern void func_001D2488(void *, void *);
extern void func_0029C838(void *, void *, void *, s32);
extern void func_00206338(void *, void *);
extern void D_002AD390(void *);
extern char D_0047BFC8[];
extern void *D_00494BB8;

typedef struct { s64 a, b; } __attribute__((packed)) Pair;
typedef struct { s32 a, b, c; f32 d; } S30;

void func_0029C570(void *arg0, void *arg1, s32 arg2)
{
    void *temp_18;
    void *temp_2;
    void *vt;
    void *r;
    char buf0[0x10];
    char sp10[0x10];
    char sp20[0x10];
    S30 sp30;
    S30 *p30;

    if (func_00296530(func_00296710(), arg1) == 0) return;

    temp_18 = *(void **)((char *)arg1 + 0x4C);
    func_002060F8(temp_18);

    temp_2 = func_0017E620();
    vt = *(void **)temp_2;
    {
        s32 adj = *(s16 *)((char *)vt + 0x30);
        VFn2 fn = *(VFn2 *)((char *)vt + 0x34);
        r = fn((char *)temp_2 + adj, *(s32 *)((char *)arg0 + 0xC));
    }
    *(s32 *)buf0 = 0;
    func_001D4810(buf0, r);
    func_002062A8(temp_18, buf0);
    *(s32 *)buf0 = 0;

    if (*(s32 *)((char *)arg0 + 0x2C) == 2) {
        if (arg2 != 0) {
            void *t2 = func_0017E620(); void *v2 = *(void **)t2;
            s32 adj = *(s16 *)((char *)v2 + 0x28); VFn3 fn = *(VFn3 *)((char *)v2 + 0x2C);
            func_001D2900(buf0, fn((char *)t2 + adj, 0x2F0, 0));
        } else {
            void *t2 = func_0017E620(); void *v2 = *(void **)t2;
            s32 adj = *(s16 *)((char *)v2 + 0x28); VFn3 fn = *(VFn3 *)((char *)v2 + 0x2C);
            func_001D2900(buf0, fn((char *)t2 + adj, 1, 8));
        }
        func_001D2900(buf0, D_0047BFC8);
        func_001D2900(buf0, D_00494BB8);
    } else {
        func_001D2900(buf0, D_00494BB8);
        func_001D2900(buf0, D_0047BFC8);
        if (arg2 != 0) {
            void *t2 = func_0017E620(); void *v2 = *(void **)t2;
            s32 adj = *(s16 *)((char *)v2 + 0x28); VFn3 fn = *(VFn3 *)((char *)v2 + 0x2C);
            func_001D2900(buf0, fn((char *)t2 + adj, 0x2F0, 0));
        } else {
            void *t2 = func_0017E620(); void *v2 = *(void **)t2;
            s32 adj = *(s16 *)((char *)v2 + 0x28); VFn3 fn = *(VFn3 *)((char *)v2 + 0x2C);
            func_001D2900(buf0, fn((char *)t2 + adj, 1, 8));
        }
    }

    func_002062F0(temp_18, 0);
    *(Pair *)sp10 = *(Pair *)((char *)temp_18 + 0x10);

    func_001D2488(sp20, buf0);
    func_0029C838(arg0, temp_18, sp20, 1);

    p30 = &sp30;
    sp30.a = 0; sp30.b = 0; sp30.c = 0; p30->d = 1.0f;
    func_00206338(temp_18, p30);
    {
        void *v3 = *(void **)temp_18; s32 adj = *(s16 *)((char *)v3 + 0x10); VFnP fn = *(VFnP *)((char *)v3 + 0x14);
        fn((char *)temp_18 + adj, *(void **)buf0);
    }
    func_002062F0(temp_18, 1);
    func_00206338(temp_18, sp10);
    func_001D2488(sp20, buf0);
    func_0029C838(arg0, temp_18, sp20, 0);
    {
        void *v3 = *(void **)temp_18; s32 adj = *(s16 *)((char *)v3 + 0x10); VFnP fn = *(VFnP *)((char *)v3 + 0x14);
        fn((char *)temp_18 + adj, *(void **)buf0);
    }
    D_002AD390(*(void **)buf0);
}
