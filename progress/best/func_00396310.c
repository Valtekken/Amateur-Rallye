extern s32 *func_002AFEB8(s32, void *);
extern s32 func_003A3910(s32);

void func_00396310(register s32 arg0, register s32 arg1) {
    register s32 *t;
    register s32 *q;
    register s32 *p = func_002AFEB8(4, arg0);
    q = p;
    if (p) {
        *(t = p) = func_003A3910(arg1);
        q = t;
    }
}
