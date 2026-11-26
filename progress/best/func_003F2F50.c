extern s32 func_003F5B60(f32 *, f32);
extern f32 func_003F6078(f32, f32);
extern f32 func_003F6B20(s32, f32, f32);

f32 func_003F2F50(f32 x) {
    f32 y[2];
    union { f32 f; s32 i; } ux;
    s32 mode;
    ux.f = x;
    if ((ux.i & 0x7fffffff) <= 0x3F490FD8) {
        return func_003F6078(x, 0.0f);
    }
    if ((ux.i & 0x7fffffff) > 0x7F7FFFFF) {
        return x - x;
    }
    mode = func_003F5B60(y, x) & 3;
    switch (mode) {
    case 0:
        return func_003F6078(y[0], y[1]);
    case 1:
        return -func_003F6B20(1, y[0], y[1]);
    case 2:
        return -func_003F6078(y[0], y[1]);
    default:
        return func_003F6B20(1, y[0], y[1]);
    }
}
