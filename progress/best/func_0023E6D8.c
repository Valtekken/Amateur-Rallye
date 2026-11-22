void func_0023E6D8(void *arg0, void *arg1, void *arg2) {
    f32 d[3];
    void *obj = *(void **)((char *)arg0 + 0x4C);
    f32 *t = (f32 *)((char *)obj + 0x11C);
    d[0] = *(f32 *)arg1 - t[0];
    d[2] = *(f32 *)((char *)arg1 + 8) - t[2];
    d[1] = *(f32 *)((char *)arg1 + 4) - t[1];
    f32 *p = (f32 *)((char *)arg0 + 0x6C);
    p[0] += d[0];
    p[1] += d[1];
    p[2] += d[2];

    t = (f32 *)((char *)obj + 0x128);
    d[0] = *(f32 *)arg2 - t[0];
    d[2] = *(f32 *)((char *)arg2 + 8) - t[2];
    d[1] = *(f32 *)((char *)arg2 + 4) - t[1];
    p = (f32 *)((char *)arg0 + 0x84);
    p[0] += d[0];
    p[1] += d[1];
    p[2] += d[2];
}
