extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

extern void func_003A5BC8(void *, f32, f32, f32);

void *func_003AD088(register char *arg0) {
    func_003A5BC8(arg0, 0.0f, 0.0f, 0.0f);
    func_003A5BC8(arg0 + 0xC, 0.0f, 0.0f, 0.0f);
    *(s32 *)(arg0 + 0x18) = -1;
    return arg0;
}

extern void func_003AA878(void *);
extern void func_003B2DF0(void *, void *);
extern void func_003AA8E8(void *, s32);
extern void func_003A3660(void *);
extern void func_003B1120(void *, void *);
extern void func_003A3730(void *, s32);

void *func_003AD108(register char *arg0) {
    char a[16];
    char b[16];
    register char *p;

    func_003AA878(a);
    func_003B2DF0(arg0, a);
    func_003AA8E8(a, 2);

    p = arg0 + 0xC;
    func_003A3660(b);
    func_003B1120(p, b);
    func_003A3730(b, 2);

    return arg0;
}

void func_003AD1B8(register f32 *a, register f32 *b, register f32 *c) {
    c[0] = a[0] - b[0];
    c[1] = a[1] - b[1];
    c[2] = a[2] - b[2];
}
