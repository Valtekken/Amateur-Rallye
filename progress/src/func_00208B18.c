void func_00208B18(void *arg0, s32 arg1, s32 arg2) {
    void *vt = *(void **)((char *)arg0 + 0x10);
    void (*fn)(void *, s32, s32) = *(void **)((char *)vt + 0x1C);
    fn((char *)arg0 + *(s16 *)((char *)vt + 0x18), arg1, arg2);
}
