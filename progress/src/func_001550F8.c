extern void func_00154E78(void **obj, u32 pos, u32 count, u32 n, s8 ch);

void func_001550F8(void **arg0, u32 arg1, s8 arg2) {
    u32 len = *(u32 *)((char *)*arg0 - 0x10);
    if (len < arg1) {
        func_00154E78(arg0, len, 0, arg1 - len, arg2);
    } else {
        func_00154E78(arg0, arg1, 0xFFFFFFFFu, 0, 0);
    }
}
