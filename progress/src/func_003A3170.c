s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    register s32 t = arg1 + 0xC;
    func_00219DA8(arg0 + 0xC, t);
    return arg0;
}

extern char D_0040E658[20];
s32 func_003AB660(void *);

s32 *func_003A3210(register s32 *arg0) {
    *arg0 = func_003AB660(D_0040E658);
    return arg0;
}

void *func_003ABCC8(void *, void *);

void *func_003A3170(register void *arg0, register void *arg1) {
    func_003ABCC8(arg0, arg1);
    register s32 v1 = *(s32 *)((char *)arg1 + 4);
    *(s32 *)((char *)arg0 + 4) = v1;
    return arg0;
}

f32 func_003F3E80(f32);

f32 func_003A3120(register f32 arg0) {
    register f32 f20 = arg0;
    return func_003F3E80(f20);
}
