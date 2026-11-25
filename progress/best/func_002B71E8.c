extern s32 func_00407A18(s32, s32, void *);
extern s32 D_00428898;

s32 func_002B71E8(s32 a, s32 b) {
    s32 i = 0, r = 1, x = r, j;
    s32 *pd = &D_00428898;
    s32 one = 1;
    goto test;
wait:
    if (*pd != 0) {
        for (j = 1; j < 10000; j++) {
            if (D_00428898 == 0) break;
        }
    }
test:
    if (x == 0) return r;
    if (func_00407A18(b, 1, &x)) {
        i++;
        x = one;
        if (i >= 11) { r = 0; x = one; return r; }
    } else i = 0;
    goto wait;
}
