typedef struct { u32 w[3]; } S12;
extern void func_003A4AB8(S12 *, S12 *);

S12 *func_003B4478(register S12 *a, register S12 *b, register S12 *out, register s32 x, register s32 y) {
    volatile s32 n = b - a;
    while (n > 0) {
        func_003A4AB8(out, a);
        a++;
        out++;
        n--;
    }
    return out;
}
