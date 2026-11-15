/* identical to func_003958D8 (matched), with its names changed by decompdecomp */
typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

extern s32 func_003A9098(void *, void *);

void *func_0039CBE0(register void *arg0, register void *arg1) {
    func_003A9098(arg0, arg1);
    *(s32 *)((char *)arg0 + 4) = *(s32 *)((char *)arg1 + 4);
    return arg0;
}

extern s32 func_003A3268(s32 *);
extern s32 func_003A3390(s32);
extern s32 func_003A31D8(s32);

void func_00395460(register s32 *arg0, register s32 arg1) {
    func_003A3390(func_003A3268(arg0));
    *arg0 = func_003A31D8(arg1);
}

s32 func_00395328(register u32 a0, register u32 a1) {
    return (((a0 < 0x10) ? 0x10 : a0) << 1) < a1;
}
