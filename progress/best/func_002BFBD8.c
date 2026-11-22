typedef struct { u32 p; } __attribute__((packed)) Ptr;
extern s32 func_002BFD98(s32), func_003FA580(s32, void *), func_003F9698(char *, u32, u32, s32);
extern char D_00480F50[];

void *func_002BFBD8(void *arg0, s32 arg1) {
    void *ret, *node;
    u32 h = func_002BFD98(arg1);
    char *table = *(char **)((char *)arg0 + 0x18);
    u32 size = (u16)(((s64)(u8)table[1] << 8) | (u8)table[0]);
    u32 hash = h & (size - 1);
    ret = NULL;
    if (hash < size) {
        node = ((Ptr *)(table + 4 + hash * 4))->p;
        while (node != NULL) {
            if (func_003FA580(arg1, (char *)node + 0x18) == 0) {
                ret = node;
                break;
            }
            node = ((Ptr *)((char *)node + 0x10))->p;
        }
    } else {
        func_003F9698(D_00480F50, hash, size, arg1);
    }
    return ret;
}
