extern void func_001D6AD8(void);
void func_001D6A68(void *arg0) {
    void **slot;
    func_001D6AD8();
    slot = *(void ***)arg0;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32))*(void **)((char *)obj + 0xC))((char *)slot + *(s16 *)((char *)obj + 8), 3);
    }
    slot = *(void ***)((char *)arg0 + 4);
    *(void ***)arg0 = NULL;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32))*(void **)((char *)obj + 0xC))((char *)slot + *(s16 *)((char *)obj + 8), 3);
    }
    *(void ***)((char *)arg0 + 4) = NULL;
}
