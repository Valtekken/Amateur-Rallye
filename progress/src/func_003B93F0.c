void func_003B93F0(void **arg0, s32 arg1) {
    void *obj = *arg0;
    if (obj != 0) {
        do {
            void *vt = *(void **)((u8 *)obj + 0x10);
            s16 off = *(s16 *)((u8 *)vt + 0x58);
            void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0x5C);
            fn((u8 *)obj + off, arg1);
            obj = *(void **)((u8 *)obj + 4);
        } while (obj != 0);
    }
}
