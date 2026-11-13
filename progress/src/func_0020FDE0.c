typedef struct { f32 x; f32 y; f32 z; } Vec3;

extern s32 func_0039FD98(s32, s32, s32);
extern s32 func_003A0AE8(s32, s32, s32);
extern s32 func_003A4130(s32, s32, s32);

Vec3 *func_0020FDE0(Vec3 *arg0, s32 arg1, Vec3 *arg2) {
    Vec3 *p = arg0;
    if (arg1 != 0) {
        do {
            arg1--;
            if (p != NULL) {
                p->x = arg2->x;
                p->y = arg2->y;
                p->z = arg2->z;
            }
            p++;
        } while (arg1 != 0);
    }
    return p;
}

s32 func_0039FE18(register s32 a, register s32 b, register s32 c) {
    return func_0039FD98(a, b, c);
}

s32 func_003A0B68(register s32 a, register s32 b, register s32 c) {
    return func_003A0AE8(a, b, c);
}

s32 func_003A0E38(register s32 a, register s32 b, register s32 c) {
    return func_003A4130(a, b, c);
}
