s32 GsGetIMR_2();
void GsPutIMR_2(s32);

s32 func_003C86D0(s32 arg0) {
    s32 old = GsGetIMR_2();
    GsPutIMR_2(arg0);
    return old;
}

s32 func_003C8B68(u32 a) {
    return GsGetIMR_2(a);
}

void func_003C8710(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u64 t = *(u64 *)((u8 *)arg0 + 0x30);
    u32 v1 = (u32)(t >> 16) & 0x7FF;
    u32 v2 = (u32)(t >> 48) & 0x7FF;
    s64 x = (s64)(s16)arg2 - (s64)((v2 + 1) >> 1);
    s64 y = (s64)(s16)arg1 - (s64)((v1 + 1) >> 1);
    u64 res;
    if ((s16)arg3) {
        res = ((u64)((u32)((x << 4) + 8)) << 32) | (u64)(u32)(y << 4);
    } else {
        res = ((u64)(u32)(x << 4) << 32) | (u64)(u32)y;
    }
    *(u64 *)((u8 *)arg0 + 0x20) = res;
}

void *func_003C7880(void);
s64 func_00403370(void);
s64 func_00403400(void);

s64 func_003C7B00(void) {
    void *p = func_003C7880();
    if (*(s32 *)((u8 *)p + 8) != 0) {
        s64 r = func_00403400();
        s32 bit = (s32)(r >> 13) & 1;
        if (*(s16 *)p == 1)
            return (s64)(s32)bit;
    } else {
        func_00403370();
        if (*(s16 *)p == 1)
            return (s64)(s32)(((s64)*(u64 *)0x12001000 >> 13) & 1);
    }
    return 1;
}
