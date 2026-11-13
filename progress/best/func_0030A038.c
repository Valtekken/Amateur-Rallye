u64 *func_0030A038(u64 *arg0, u64 *arg1, u64 *arg2) {
    s32 n = (s32)((u32)arg1 - (u32)arg0) >> 3;
    u64 *base = arg0;
    if (n > 0) {
        u64 key = *arg2;
        while (n > 0) {
            s32 mid = n >> 1;
            u64 *ptr = base + mid;
            if (*ptr < key) {
                base = ptr + 1;
                n = n - mid - 1;
            } else {
                n = mid;
            }
        }
    }
    return base;
}
