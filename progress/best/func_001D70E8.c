void func_001D70E8(void *arg0, s32 arg1, s32 arg2) {
    s32 begin = *(s32 *)((char *)arg0 + 0);
    s32 end = *(s32 *)((char *)arg0 + 4);
    u32 len = (u32)(end - begin);
    u32 need = len + (u32)arg2;
    u8 flag = 0;

    if (need < len) {
        s32 newend = begin + (s32)need;
        func_003F93CC(newend, end, 0);
        *(s32 *)((char *)arg0 + 4) = *(s32 *)((char *)arg0 + 4) - (end - newend);
    } else {
        func_001D9080(arg0, end, (s32)(need - len), &flag);
    }
    func_003F931C(*(s32 *)((char *)arg0 + 0) + (s32)len, arg1, arg2);
}
