void func_0014FA50(void *arg0, s32 lo, s32 hi, s32 val, f32 f) {
    s32 i = hi;
    if (lo < i) {
        u8 *p;
        do {
            p = *(u8 **)((char *)arg0 + 0x2C) + i * 8;
            i--;
            *(u8 *)(p + 4) = val;
            *(f32 *)p = f;
        } while (lo < i);
    }
}
