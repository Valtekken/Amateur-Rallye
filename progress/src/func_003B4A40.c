typedef struct { s32 x[2]; } Pair;

s32 func_003B4A40(register Pair *a, register Pair *b, register Pair *out, register s32 arg3, register s32 arg4) {
    volatile s32 n = b - a;
    while (n > 0) {
        func_003A3170(out, a);
        a++;
        out++;
        n--;
    }
    return (s32)out;
}
