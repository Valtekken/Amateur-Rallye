extern void *D_002AD408(s32);

void **func_001E6C88(void **arg0) {
    void *ptr = D_002AD408(12);
    *arg0 = ptr;
    ((s32 *)ptr)[1] = 0;
    ((s32 *)ptr)[2] = 0;
    ((s32 *)ptr)[0] = 0;
    return arg0;
}
