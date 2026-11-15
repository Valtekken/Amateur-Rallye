extern s32 func_0039DBC8(s32 arg0, s32 arg1);

s32 func_0039DC48(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 src = arg0;
    s32 end = arg1;
    s32 dst = arg2;
    s8 sentinel = arg3;

    while (src != end) {
        func_0039DBC8(dst, src);
        src += 0xC;
        dst += 0xC;
    }
    return dst;
}
