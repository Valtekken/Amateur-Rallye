extern u32 func_003CEA50(void*, s32, u32, u32);
extern s32 func_003FA9B8(s32);

s32 func_003CEE48(s32 arg0, s32 arg1) {
    s32 s1 = arg0;
    s32 s0 = arg1;
    s32 v0 = func_003FA9B8(s1);
    u32 result = func_003CEA50((void*)s0, s1, 0, v0);
    return result != 0;
}
