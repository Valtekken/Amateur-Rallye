void func_003B5980(void *arg0, s32 arg1, void *arg2) {
    void *struct_ptr = *(void **)((u8 *)arg2 + 0x8);
    void (*func)(void) = *(void **)((u8 *)struct_ptr + 0x94);
    func();
}
