/* Formats time value as MM:SS:CC or --:--:-- if negative */
extern s32 func_001D29D0(void *buf, const char *fmt, ...);
extern void func_001D2488(s32, void *);
extern void D_002AD390(s32);
extern char D_00476028[13];
extern char D_00476038[15];

s32 func_001D56E0(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 minutes;
    s32 total_seconds;
    s32 hours;
    s32 seconds;
    s32 centiseconds;
    s32 var_30;
    f32 fval;

    sp0 = 0;
    if (arg1 < 0) {
        func_001D29D0(&sp0, D_00476028);
        func_001D2488(arg0, &sp0);
        D_002AD390(sp0);
    } else {
        minutes = arg1 / 1800;
        fval = (f32)arg1;
        fval = fval * (10.0f / 3.0f);
        centiseconds = (s32)fval;
        total_seconds = arg1 / 30;
        hours = minutes / 60;
        minutes = minutes % 60;
        var_30 = centiseconds % 100;
        seconds = total_seconds % 60;
        func_001D29D0(&sp0, D_00476038, minutes, seconds, var_30, total_seconds, hours);
        func_001D2488(arg0, &sp0);
        D_002AD390(sp0);
    }
    return arg0;
}
