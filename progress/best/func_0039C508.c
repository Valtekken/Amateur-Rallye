extern s32 *func_0039C298(s32);
extern s32 *func_0039C2D0(s32);
extern s32 func_0039C4A0(s32);
extern s32 *func_003A8F68(s32 *);
extern s32 func_003A90D0(s32 *, s32, s32);
extern void func_003A9140(s32, s32);

s32 func_0039C508(register s32 arg0, register s32 *arg1, s32 arg2) {
    register void *q, *t, *p;
    s32 sp4;
    s32 sp8;
    sp4 = *arg1;
    sp8 = *func_003A8F68(arg1);
    while (sp8 != 0) {
        p = (char *)arg1 + 8;
        if (func_003A90D0(p, func_0039C4A0(sp8), arg2) == 0) {
            sp4 = sp8;
            q = func_0039C2D0(sp8);
            sp8 = *(s32 *)q;
        } else {
            t = func_0039C298(sp8);
            sp8 = *(s32 *)t;
        }
    }
    func_003A9140(arg0, sp4);
    return arg0;
}
