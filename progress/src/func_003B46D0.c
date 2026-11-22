typedef struct { u32 w[6]; } S24;

extern void func_003A5DC8(S24 *, S24 *);

S24 *func_003B46D0(register S24 *start, register S24 *end, register S24 *out, register s32 arg3, register s32 arg4) {
    volatile s32 n = end - start;
    while (n > 0) {
        func_003A5DC8(out, start);
        start++;
        out++;
        n--;
    }
    return out;
}
