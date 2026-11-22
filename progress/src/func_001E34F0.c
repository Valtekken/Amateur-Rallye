extern s32 *func_001E4150(void *, s32 *);

void func_001E34F0(void *arg0, s32 *arg1, s32 arg2) {
    s32 *p = (s32 *)func_001E4150(arg0, arg1);
    p[3] = (p[3] & ~4) | ((arg2 & 1) << 2);
}
