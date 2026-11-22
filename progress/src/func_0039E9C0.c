/* identical to func_003B4478 (matched), with its names changed by decompdecomp */
typedef struct { u32 w[3]; } S12;
extern void func_003AA2E8(S12 *, S12 *);

S12 *func_0039E9C0(register S12 *a, register S12 *b, register S12 *out, register s32 x, register s32 y) {
    volatile s32 n = b - a;
    while (n > 0) {
        func_003AA2E8(out, a);
        a++;
        out++;
        n--;
    }
    return out;
}
