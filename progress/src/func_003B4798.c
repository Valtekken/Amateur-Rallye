/* identical to func_003A0A20 (matched), with its names changed by decompdecomp */
typedef struct { u32 w[7]; } Elem28;

extern void func_003A5CC0(Elem28 *, Elem28 *);

Elem28 *func_003B4798(register Elem28 *start, register Elem28 *end, register Elem28 *dest, register s32 arg3, register s32 arg4) {
    volatile s32 n = end - start;
    while (n > 0) {
        func_003A5CC0(dest, start);
        start++;
        dest++;
        n--;
    }
    return dest;
}
