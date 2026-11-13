void func_003C8710(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u64 t = *(u64 *)((u8 *)arg0 + 0x30);
    s64 v1 = (s64)(s32)((t >> 16) & 0x7FF);
    s64 v2 = (s64)(s32)((t >> 48) & 0x7FF);
    s64 a1 = (s64)(s16)arg1;
    s64 a2 = (s64)(s16)arg2;
    s64 x = a2 - (s64)((u64)(v2 + 1) >> 1);
    s64 y = a1 - (s64)((u64)(v1 + 1) >> 1);
    u64 res = (u64)(y << 4) | (((u64)((x << 4) + ((s16)arg3 ? 8 : 0))) << 32);
    *(u64 *)((u8 *)arg0 + 0x20) = res;
}

void *func_003C7880(void);
s64 func_00403370(void);
s64 func_00403400(void);

s64 func_003C7B00(void) {
    void *p = func_003C7880();
    if (!*(s32 *)((u8 *)p + 8)) {
        func_00403370();
        if (*(s16 *)p == 1)
            return (s64)(s32)(((u64)*(u64 *)0x12001000 >> 13) & 1);
    } else {
        s64 result = func_00403400();
        if (*(s16 *)p == 1)
            return (s64)(s32)((result >> 13) & 1);
    }
    return 1;
}
