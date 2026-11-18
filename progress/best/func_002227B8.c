void func_00222B10(void);

void *func_002227B8(void *arg0) {
    volatile s32 tmp = 0;
    (void)tmp;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    func_00222B10();
    return arg0;
}
