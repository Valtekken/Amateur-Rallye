extern void *func_001E22E8(void *, void *, void *);
extern void *func_001D4010(void *);
extern void func_001D2CD8(s32 *, s32);
extern void func_001D2488(s32 *, s32 *);
extern void func_001EAE78(void *, s32, void *);
extern void D_002AD390(s32);

typedef struct { s32 a; s32 b; } Locals;

void *func_001E16B8(void *arg0, void *arg1, s32 flag) {
    Locals l;
    s32 v = flag;
    s32 *p;
    s32 *q;
    void *r;
    s32 fres;

    r = func_001E22E8(arg0, arg1, (void *)((char *)arg0 + 0xC));
    if (v != 0) {
        fres = (s32)func_001D4010((char *)arg0 + 0x40);
    } else {
        fres = (s32)func_001D4010((char *)arg0 + 0x10);
    }
    v = (s32)((char *)r + 0x14);
    l.a = *(s32 *)((char *)arg0 + 0x48);
    arg0 = &l.b;
    l.b = 0;
    func_001D2CD8(arg0, fres);
    p = (s32 *)v;
    q = (s32 *)p[1];
    if (p[1] != p[2]) {
        if (q != 0) {
            *q = l.a;
            func_001D2488(q + 1, arg0);
        }
        p[1] = p[1] + 8;
    } else {
        func_001EAE78(p, (s32)q, &l.a);
    }
    D_002AD390(l.b);
    return r;
}
