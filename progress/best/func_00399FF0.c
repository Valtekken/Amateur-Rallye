extern s32 func_00395068(s32);
extern s32 func_003950D8(s32, s32);
extern s32 func_002C5160(s32, s32, s32, s32);
extern s32 func_002AFEB8(s32, s32);
extern s32 func_003A3EB0(s32);

void *func_00395138(s32 arg0) {
    s32 t1 = func_00395068(arg0 + 1);
    s32 t2 = func_003950D8(0x10, t1);
    return (void*)t1;
}

s32 func_003978C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002C5160(arg0, arg1, arg2, arg3);
    return 0;
}

s32 func_00399FF0(s32 arg0, s32 arg1) {
    func_002AFEB8(8, arg0);
    return 0;
}

s32 func_0039A5A8(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_003A3EB0(arg0 * 8);
}
