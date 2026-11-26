extern s32 func_003F5B60(f32 *, f32);
extern f32 func_003F6078(f32, f32);
extern f32 func_003F6B20(f32, f32, s32);
f32 func_003F3140(f32 x) {
    f32 y[2];
    s32 n;
    s32 ix;
    union { f32 f; s32 i; } u;
    u.f = x;
    ix = u.i & 0x7FFFFFFF;
    if (ix <= 0x3F490FD8) return func_003F6B20(x, 0.0f, 0);
    if (ix > 0x7F7FFFFF) return x - x;
    n = func_003F5B60(y, x);
    switch (n & 3) {
    case 0: return func_003F6B20(y[0], y[1], 1);
    case 1: return func_003F6078(y[0], y[1]);
    case 2: return -func_003F6B20(y[0], y[1], 1);
    default: return -func_003F6078(y[0], y[1]);
    }
}
