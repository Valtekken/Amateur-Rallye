typedef struct {
    s16 offset;
    s32 (*func)(void*, s32*);
} CallbackEntry;

s32 func_003A7F10(void *arg0, f32 *arg1) {
    s32 sp0 = 0;
    s32 sp4;
    void *ptr = *(void**)((u8*)arg0 + 0x8);
    CallbackEntry *entry = (CallbackEntry*)((u8*)ptr + 0x90);
    sp4 = entry->func((u8*)arg0 + entry->offset, &sp0);
    
    arg1[0] = (f32)((sp0 >> 24) & 0xFF) / 255.0f;
    arg1[1] = (f32)((sp0 >> 16) & 0xFF) / 255.0f;
    arg1[2] = (f32)((sp0 >> 8) & 0xFF) / 255.0f;
    arg1[3] = (f32)(sp0 & 0xFF) / 255.0f;
    
    return sp4;
}
