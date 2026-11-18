extern s32 func_00237350(void);
extern s32 func_002373F8(void *, s32);
extern s32 func_00237558(s32, void **);
extern s32 func_00244788(void);
extern s32 func_00244DE0(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00244F00(s32, s32, s32, s32, s32);
extern u32 D_0047A5C0;

void *func_00242B10(void *arg0) {
    func_00237350();
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(u32 *)((char *)arg0 + 0x00) = D_0047A5C0;
    {
        char *p = (char *)arg0 + 0x20;
        *(s32 *)(p + 8) = 0;
        *(s32 *)(p + 4) = 0;
    }
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    return arg0;
}

void *func_00242B60(void *arg0, s32 arg1) {
    func_00237350();
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(u32 *)((char *)arg0 + 0x00) = D_0047A5C0;
    {
        char *p = (char *)arg0 + 0x20;
        *(s32 *)(p + 8) = 0;
        *(s32 *)(p + 4) = 0;
    }
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    func_002373F8(arg0, arg1);
    return arg0;
}

s32 func_00242C88(void *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        void *t = *arg1;
        return ((s32 (*)(void *, s32, void **))(*(s32 *)((char *)t + 0x1C)))(
            (void *)((char *)arg1 + *(s16 *)((char *)t + 0x18)), arg2, arg1);
    }
    if (*(s32 *)((char *)arg0 + 0x18) != 0 && *(s32 *)((char *)arg0 + 0x1C) != 0) {
        return func_00237558(arg2, arg1);
    }
    return 0;
}

s32 func_00244CF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00244788();
    if (func_00244DE0(arg0, arg0 + 0x34, arg0 + 0x48, arg1, arg2, arg3, arg4) != 0) {
        return 1;
    }
    if (func_00244DE0(arg0, arg0 + 0x54, arg0 + 0x68, arg1, arg2, arg3, arg4) != 0) {
        return 1;
    }
    return func_00244F00(arg0, arg1, arg2, arg3, arg4) != 0 ? 1 : 0;
}
