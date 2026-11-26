extern s64 func_003DBC50(s32 *, s32 *);
extern s64 func_002AC230(s64, s64);

s64 func_003DBEF0(s32 *a, s32 *b) {
    s32 z[2];
    s64 r = func_003DBC50(a, &z[0]);
    s64 s = func_003DBC50(b, &z[1]);
    s32 n = (z[0] - z[1]) + ((a[4] - b[4]) << 5);
    if (n > 0) {
        s32 h = (s32)(r >> 32) + (n << 20);
        r = (r & 0xFFFFFFFFLL) | ((s64)h << 32);
    } else {
        s32 h = (s32)(s >> 32) - (n << 20);
        s = (s & 0xFFFFFFFFLL) | ((s64)h << 32);
    }
    return func_002AC230(r, s);
}
