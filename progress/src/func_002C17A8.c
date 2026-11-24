extern s32 func_002BEE48(s32, s32);

s32 func_002C17A8(void *arg0) {
    *(volatile s32 *)((char *)arg0 + 0x14) = *(volatile s32 *)((char *)arg0 + 0x14) + 1;
    func_002BEE48(*(s32 *)((char *)arg0 + 0x10), 1);
    return 0;
}
