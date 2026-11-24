s32 func_002F8C98(void *arg0, s32 *arg1) {
    s32 *arr = *(s32 **)((u8 *)arg0 + 0);
    s32 *base = *(s32 **)((u8 *)arg0 + 0x24);
    s32 *elem = (s32 *)((u8 *)arr + *arg1 * 4);
    s32 **pp = (s32 **)((u8 *)base + *elem * 0x12C);
    s32 *p = *pp;
    s32 ret;
    if (p == 0) ret = 0; else ret = p[2];
    return ret;
}
