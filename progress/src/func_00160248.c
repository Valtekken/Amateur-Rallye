/* identical to func_0015F810 (matched), with its names changed by decompdecomp */
extern void func_001D4040(void *, const char *);
extern char D_0044EDA0[];
extern char D_00474188[];

void *func_00160248(void *p) {
    s32 k[4];
    func_001D4040(k, D_0044EDA0);
    ((s32 *)p)[1] = k[0];
    ((s32 *)p)[0] = -1;
    ((s32 *)p)[2] = (s32)D_00474188;
    ((f32 *)p)[5] = 80.0f;
    ((f32 *)p)[6] = 40.0f;
    ((f32 *)p)[7] = 1.0f;
    ((s32 *)p)[4] = 0;
    ((s32 *)p)[3] = 0;
    return p;
}

extern char D_00448028[];
extern char D_0044D428[];

void *func_001239A8(s32 *p) {
    s32 k[4];
    func_001D4040(k, D_00448028);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D428;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    return p;
}

extern char D_00447D48[];
extern char D_0044D4A8[];

void *func_001222F0(s32 *p) {
    s32 k[4];
    func_001D4040(k, D_00447D48);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D4A8;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    return p;
}

extern s32 func_00396860(s32, s32, s32);

s32 func_00396918(register s32 a, register s32 b, register s32 c) {
    return func_00396860(a, b, c);
}
