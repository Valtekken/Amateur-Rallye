/* identical to func_001E6C88 (matched), with its names changed by decompdecomp */
extern void *D_002AD408(s32);

void **func_001FC6B0(void **arg0) {
    volatile char pad[0x10];
    void *p = D_002AD408(12);
    *arg0 = p;
    ((s32 *)p)[1] = 0;
    ((s32 *)p)[2] = 0;
    ((s32 *)p)[0] = 0;
    return arg0;
}
