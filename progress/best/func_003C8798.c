void func_003C8798(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    u64 v = *(u64 *)((char *)arg0 + 0x30);
    s32 lo = (s32)((v >> 16) & 0x7FF);
    s32 hi = (s32)((v >> 48) & 0x7FF);
    s64 b = (s64)arg2 - (s64)(((u64)(s64)(hi + 1)) >> 1);
    s64 a = (s64)arg1 - (s64)(((u64)(s64)(lo + 1)) >> 1);
    s64 r;
    if (arg3 != 0) r = ((b << 4) + 8) << 32;
    else r = b << 36;
    *(s64 *)((char *)arg0 + 0x20) = (a << 4) | r;
}
