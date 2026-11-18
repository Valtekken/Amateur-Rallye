extern s32 func_001E4280(void);
extern s32 func_001E38C8(s32, s32);
extern s32 func_001E3650(s32, s32);
s32 func_0014EE30(void *arg0, s32 arg1) {
    s32 idx = arg1;
    s32 off;
    if (idx < 0 || (off = idx * 4, func_001E38C8(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x5C) + off) == 0))
        return -1;
    return func_001E3650(func_001E4280(), *(s32 *)((u8 *)arg0 + 0x5C) + off);
}

extern s32 func_00194D58(s32, s32);
extern s32 func_00195B58(s32, s32);
extern s32 func_00196028(void);
s32 func_0013BE18(void) {
    s32 ok = 1;
    s32 i = 0;
    s32 ret;
    do {
        s32 r = func_00194D58(func_00196028(), i);
        i++;
        if (r ^ 1) ok = 0;
    } while (i < 0x6D);
    i = 0;
    if (ok || (func_00195B58(func_00196028(), 0) != 0) || (func_00195B58(func_00196028(), 6) != 0)) {
        i = 1;
    }
    ret = i;
    return ret;
}
