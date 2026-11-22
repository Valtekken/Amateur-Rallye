extern s32 func_003CE988(s32, s32, s32, u32);

u32 func_003CEDD0(s32 arg0, s32 arg1) {
    u32 v = (u32)func_003CE988(arg0, arg1, 0, 0xFFFFFFFFu);
    return v >> 31;
}
