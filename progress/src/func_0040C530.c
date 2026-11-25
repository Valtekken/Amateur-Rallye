extern s64 func_0040C660(f32);

s64 func_0040C530(f32 x) {
    if (x < 0.0f) {
        s64 v = func_0040C660(-x);
        return -v;
    }
    return func_0040C660(x);
}
