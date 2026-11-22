/* identical to func_003B4A40 (matched), with its names changed by decompdecomp */
typedef struct { s32 x[2]; } Pair;

s32 func_00398830(register Pair *a, register Pair *b, register Pair *out, register s32 arg3, register s32 arg4) {
    volatile s32 n = b - a;
    while (n > 0) {
        func_003A6370(out, a);
        a++;
        out++;
        n--;
    }
    return (s32)out;
}
