extern void *func_001E22E8(void *, void *, void *);
extern s32 func_002AD350(f32);
extern void func_003FA310(char *, char *, ...);
extern void func_001D2CD8(s32 *, s32);
extern void func_001D2488(s32 *, s32 *);
extern void func_001EAE78(void *, s32, void *);
extern void D_002AD390(s32);
extern char D_00476AF0[];

typedef struct { s32 a; s32 b; } Locals;

void *func_001E1F88(char *arg0, void *arg1, f32 *arg2) {
    Locals l;
    s32 *p, *q;
    void *ret;
    s32 r1, r2;
    char *fmt;

    ret = func_001E22E8(arg0, arg1, (void *)((s32)arg0 + 0x54));
    fmt = D_00476AF0;
    r1 = func_002AD350(arg2[0]);
    r2 = func_002AD350(arg2[1]);
    func_003FA310(arg0 + 0x5C, fmt, r1, r2);
    l.b = 0;
    l.a = *(s32 *)(arg0 + 0x48);
    func_001D2CD8(&l.b, (s32)(arg0 + 0x5C));
    p = (s32 *)((char *)ret + 0x14);
    q = (s32 *)p[1];
    if (p[1] != p[2]) {
        if (q != 0) {
            *q = l.a;
            func_001D2488(q + 1, &l.b);
        }
        p[1] = p[1] + 8;
    } else {
        func_001EAE78(p, (s32)q, &l.a);
    }
    D_002AD390(l.b);
    return ret;
}
