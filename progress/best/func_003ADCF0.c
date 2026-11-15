typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

extern s32 *func_003AD930(s32 *, s32);
s32 *func_003ADCF0(register s32 *arg0, register s32 **arg1) {
    func_003AD930(arg0, **arg1);
    return arg0;
}

s32 func_003ADD50(register s32 *arg0, register s32 *arg1) {
    return *arg0 != *arg1;
}

void **func_003ADE18(register void ***arg0) {
    *arg0 = **arg0;
    return (void **)arg0;
}
