/* identical to func_003A9140 (matched), with its names changed by decompdecomp */
s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003AF670(void *);
void func_003AF768(void *, void *, void *);
void func_003AF7E8(void *, s32);

void *func_003A9010(register void *arg0) {
    char tmp[0x10];
    char sp = 0;
    register void *tp = tmp;
    func_003AF670(tp);
    func_003AF768(arg0, &sp, tp);
    func_003AF7E8(tp, 2);
    return arg0;
}

s32 func_003ACD28(s32, s32);

s32 func_003A90D0(register s32 arg0, register s32 arg1, register s32 arg2) {
    return func_003ACD28(arg1, arg2);
}

s32 *func_003AD930(register s32 *arg0, register s32 arg1) {
    *arg0 = arg1;
    return arg0;
}
