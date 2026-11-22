extern void *func_0017E620(void);
extern s32 func_001D4810(s32, s32);
extern s32 func_0011DA70(void *, s32);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_00297398(s32, s32);
extern void func_003F9698(char *, char *, s32);
extern void func_003F94D0(void *, s32, s32);
extern void func_00153BA8(void *, s32, s32, void *);
extern void func_00122248(void *);
extern s32 func_00110430(void);
extern void func_00110238(s32, s32);
extern void *D_002AD408(s32);
extern char D_00447C20[];
extern char D_00447C80[];

typedef s32 (*VFn)(void *, s32);

struct VSub {
    char pad[0x30];
    s16 adj;
    s16 pad2;
    VFn fn;
};

void func_001217D8(void *arg0) {
    void **h1, **h2;
    struct VSub *s1, *s2;
    VFn f1, f2;
    s32 r1, r2;
    char buf[8];
    s32 *vec;
    s32 lim;
    s32 begin, end, n, newend, p;

    h1 = (void **)func_0017E620();
    s1 = (struct VSub *)*h1;
    f1 = s1->fn;
    r1 = f1((char *)h1 + s1->adj, 2);
    func_001D4810((s32)((char *)arg0 + 0x20), r1);

    h2 = (void **)func_0017E620();
    s2 = (struct VSub *)*h2;
    f2 = s2->fn;
    r2 = f2((char *)h2 + s2->adj, 2);
    func_001D4810((s32)((char *)arg0 + 0x24), r2);

    *(s32 *)((char *)arg0 + 0xC) = func_0011DA70(D_002AD408(0x10), 0x2C);
    if (func_002971B0(func_00297500()) == -1) {
        func_00297398(func_00297500(), -1);
    }

    vec = (s32 *)((char *)arg0 + 0x10);
    lim = 0x14;
    func_003F9698(D_00447C20, D_00447C80, 0x83);
    func_003F94D0(buf, 0, 8);

    end = vec[1];
    begin = vec[0];
    n = (end - begin) >> 3;
    if ((u32)n > (u32)lim) {
        newend = begin + 0xA0;
        p = end - newend;
        if ((u32)newend < (u32)end) {
            do { newend += 8; } while ((u32)newend < (u32)end);
        }
        vec[1] = end - p;
    } else {
        func_00153BA8(vec, end, lim - n, buf);
    }

    func_00122248(arg0);
    func_00110238(func_00110430(), 0x29);
}
