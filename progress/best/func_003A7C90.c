typedef struct {
    s16 offset;
    s32 (*callback)(void *, s32);
} CallbackEntry;

typedef struct {
    CallbackEntry *entry;
} Interface;

s32 func_003A7C90(void *arg0, s32 arg1) {
    Interface *iface = *(Interface **)((char *)arg0 + 8);
    CallbackEntry *entry = (CallbackEntry *)((char *)iface + 0x80);
    
    void *addr = (char *)arg0 + entry->offset;
    s32 result = 0;
    
    s32 ret = entry->callback(addr, arg1);
    result = (result != 0) | (ret != 0);
    
    ret = entry->callback(addr, arg1 + 4);
    result = (result != 0) | (ret != 0);
    
    ret = entry->callback(addr, arg1 + 8);
    result = (result != 0) | (ret != 0);
    
    return result;
}
