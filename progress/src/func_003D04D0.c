extern s32 func_003CE0D0(void **, s32, s32);
void func_003D04D0(void **arg0) {
    void *obj = *arg0;
    s32 v = 1;
    if ((u32)*(s32*)((char*)obj - 8) >= 2U)
        func_003CE0D0(arg0, *(s32*)((char*)obj - 0x10), v);
    *(s32*)((char*)*arg0 - 4) = v;
}
