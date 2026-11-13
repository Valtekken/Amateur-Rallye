extern void func_001D4040(void *, const char *);
extern s32 func_001FF6A0(void *, void *);

s32 func_001FF618(void *arg0, void *arg1) {
    u32 sp;
    void *s0 = arg1;
    void *s1 = arg0;

    func_001D4040(&sp, "MarkerLists");
    if (*(u32 *)((char *)s0 + 0x20) == sp) {
        s0 = *(void **)s0;
        if (s0 != NULL) {
            do {
                if (func_001FF6A0(s1, s0) == 0) {
                    return 0;
                }
                s0 = *(void **)((char *)s0 + 4);
            } while (s0 != NULL);
        }
        return 1;
    }
    return 0;
}
