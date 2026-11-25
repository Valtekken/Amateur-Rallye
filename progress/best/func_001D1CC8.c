typedef struct {
    s32 f0;
    u8 *p;
    u8 *end;
} SCtx;

extern void func_001D1F58(void *);

s32 func_001D1CC8(SCtx *arg0, u8 *arg1, s32 arg2) {
    s32 ret = 0;
    s32 count = arg2;
    u8 *src = arg0->p;
    u8 *dst = arg1;
    u8 c;

    if (src >= arg0->end) goto r0;
    c = *src;
    if ((u32)(c - 0x61) < 0x1A) goto b5;
    if ((u32)(c - 0x41) < 0x1A) goto b10;
    count--;
    if ((s8)c == 0x5F) goto b11;
    return 0;
b5:
    goto b10;
b6:
    c = *src;
    if ((u32)(c - 0x61) < 0x1A) goto b10;
    if ((u32)(c - 0x41) < 0x1A) goto b11x;
    if ((s8)c == 0x5F) goto b10;
    if ((u32)(c - 0x30) >= 0xA) goto b13;
    goto b10;
b11x:
    count--;
    goto b11;
b10:
    count--;
b11:
    src++;
    if (count <= 0) return 0;
    *dst = c;
    dst++;
    if (src < arg0->end) goto b6;
b13:
    *dst = 0;
    arg0->p = src;
    func_001D1F58(arg0);
    ret = 1;
r0:
    return ret;
}
