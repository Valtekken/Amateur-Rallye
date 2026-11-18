u64 *func_0030A038(u64 *base, u64 *end, u64 *key) {
    s32 n = (s32)((u32)end - (u32)base) >> 3;
    s32 t = n;
    if (t > 0) {
        u64 k = *key;
        while (t > 0) {
            s32 mid = t >> 1;
            u64 *p = base + mid;
            if (*p < k) { base = p + 1; n = t - mid - 1; }
            else n = mid;
            t = n;
        }
    }
    return base;
}
