extern s32 func_001F0308(char *, char *);
extern s32 func_001F03A8(char *, char *);

s32 func_001F0508(char *arg0, char *arg1) {
    s32 r;
    r = func_001F03A8(arg0, arg1);
    r = (r != 0) & (func_001F0308(arg0, arg1 + 0xC) != 0);
    r &= (func_001F03A8(arg0, arg1 + 0x10) != 0);
    r &= (func_001F03A8(arg0, arg1 + 0x1C) != 0);
    return r & (func_001F03A8(arg0, arg1 + 0x28) != 0);
}
