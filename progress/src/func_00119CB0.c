extern void func_00119E08(s32);
extern s32 func_00194738(s32), func_00194B18(s32), func_00194C40(void), func_00194CD0(s32, s32, s32), func_00194D58(s32, s32), func_00194E30(s32, s32, s32, s32), func_00196028(void), func_001965A8(s32), func_00196C10(s32, s32), func_00196E10(void);
s32 func_00119CB0(s32 arg0) {
    s32 var_16 = 0;
    s32 var_17 = func_00196C10(func_00196E10(), 0);
    if (func_00194738(func_00194C40()) != 0) var_16 = func_00196C10(func_00196E10(), 1);
    if (var_16 > 0) var_17 = (var_16 < var_17) ? var_16 : var_17;
    if ((u32)(var_17 - 1) < 3U) {
        s32 t19 = func_001965A8(func_00196E10());
        s32 t18 = func_00194B18(func_00194C40());
        s32 t16 = func_00196028();
        s32 t2 = func_00194D58(t16, func_00194E30(func_00196028(), t19, t18, -1));
        if ((var_17 < t2) || (t2 == 0)) {
            s32 t16b = func_00196028();
            func_00194CD0(t16b, func_00194E30(func_00196028(), t19, t18, -1), var_17);
        }
        if (var_17 == 1) func_00119E08(arg0);
    }
    return (var_17 ^ 1) == 0;
}
