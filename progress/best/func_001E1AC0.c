extern void *func_001E22E8(void *, void *, void *);
extern s32 func_002AD350(f32);
extern void func_003FA310(char *, char *, ...);
extern void func_001D2CD8(s32 *, s32);
extern void func_001D2488(s32 *, s32 *);
extern void func_001EAE78(void *, s32, void *);
extern void D_002AD390(s32);
extern char D_00476AD8[];

void *func_001E1AC0(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    s32 sp4;
    volatile s32 pad1;
    volatile s32 pad2;
    void *ret;
    s32 *p;
    s32 *q;
    s32 *var_21;
    f32 *var_19;
    s32 counter;

    var_21 = (s32 *)((char *)arg0 + 0x28);
    var_19 = (f32 *)arg2;
    counter = 3;
    ret = func_001E22E8(arg0, arg1, (char *)arg0 + 0x20);

    do {
        func_003FA310((char *)arg0 + 0x5c, D_00476AD8,
            func_002AD350(var_19[0]),
            func_002AD350(var_19[1]),
            func_002AD350(var_19[2]),
            func_002AD350(var_19[3]));
        sp4 = 0;
        sp0 = *var_21;
        func_001D2CD8(&sp4, (s32)((char *)arg0 + 0x5c));
        p = (s32 *)((char *)ret + 0x14);
        q = (s32 *)p[1];
        if (p[1] != p[2]) {
            if (q != 0) {
                *q = sp0;
                func_001D2488(q + 1, &sp4);
            }
            p[1] += 8;
        } else {
            func_001EAE78(p, (s32)q, &sp0);
        }
        D_002AD390(sp4);
        var_21 += 1;
        var_19 += 4;
        counter -= 1;
    } while (counter >= 0);

    return ret;
}
