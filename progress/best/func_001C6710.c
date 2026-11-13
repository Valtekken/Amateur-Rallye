extern s32 func_001C6700(void);

void func_001C6710(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u32 *p = *(u32 **)((u8 *)arg0 + 4);
    *(u8 *)(p + func_001C6700()) = *arg3;
}
