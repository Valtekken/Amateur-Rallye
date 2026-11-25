extern s32 func_001B1E70(s32);

void func_001B2E60(void *arg1, void *arg0, s32 arg2) {
    func_001B1E70((s32)((char *)arg0 + 0xA4));
    if (arg2 || *(s32 *)((char *)arg0 + 0xCC)) {
        *(s32 *)((char *)arg1 + 0xD0) = 1;
    }
}
