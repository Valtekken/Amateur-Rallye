extern void func_001ED858(void *, void *, void *);
extern s32 func_001EA038(void *, void *);
extern void func_001ED8C0(void *, void *, void *);
extern void func_001EDDD8(void *, void *, void *, void *);

typedef struct { s32 v[4]; } S16;

s32 func_001E9E18(s32 *arg0, s32 *arg1) {
    S16 sp0, sp10, sp20, sp30, sp40, sp50, sp60, sp70;
    s32 var18, var4;
    func_001ED858(&sp0, arg0, arg1);
    sp10.v[0] = *arg0;
    if ((s32 *)sp0.v[0] != (s32 *)sp10.v[0]) {
        var18 = ((s32 *)sp0.v[0])[5];
    } else {
        var18 = func_001EA038(arg0, arg1);
        func_001ED8C0(&sp20, arg0, arg1);
        sp30.v[0] = *arg0;
        var4 = 0;
        if (((s32 *)sp20.v[0] == (s32 *)*arg0) || (*arg1 < ((s32 *)sp20.v[0])[4])) {
            var4 = 1;
        }
        if (var4 != 0) {
            sp60.v[0] = *arg1;
            sp50.v[0] = sp20.v[0];
            sp70.v[0] = sp20.v[0];
            sp60.v[1] = 0;
            func_001EDDD8(&sp40, arg0, &sp70, &sp60);
            sp20.v[0] = sp40.v[0];
        }
        ((s32 *)sp20.v[0])[5] = var18;
    }
    return var18;
}
