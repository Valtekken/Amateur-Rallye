void *func_00383F28(void *arg0, void *arg1, u64 *arg2) {
    s32 n = ((s32)((u8 *)arg1 - (u8 *)arg0)) >> 3;
    void *base = arg0;
    u64 target;
    s32 half;

    if (n <= 0) goto done;
    target = *arg2;
    half = n >> 1;
    do {
        u64 *mid = (u64 *)((u8 *)base + (half << 3));
        if (*mid < target) {
            base = (u8 *)mid + 8;
            n = (n - half) - 1;
        } else {
            n = half;
        }
        half = n >> 1;
    } while (n > 0);
done:
    return base;
}
