typedef struct Vec4 {
    u32* b;
    u32* e;
    u32* c;
} Vec4;

extern u32 D_0040E618[];
extern void func_002B2028(void*);
extern void D_002AD390(void*);
extern void* D_00473088;
extern void* D_004731A0;

void func_001B6248(void* obj, s32 flags) {
    u32* begin = *(u32**)((u8*)obj + 0x8);
    u32* end = *(u32**)((u8*)obj + 0xC);
    
    *(void**)obj = D_00473088;
    
    for (; begin < end; begin++) {
    }
    
    u32* cap_start = *(u32**)((u8*)obj + 0x8);
    u32* cap_end = *(u32**)((u8*)obj + 0x10);
    s32 n = (cap_end - cap_start) >> 2;
    
    if (n != 0) {
        if (n * 4 != 0) {
            func_002B2028(cap_start);
        } else {
            *cap_start = D_0040E618[-1];
            D_0040E618[-1] = (u32)cap_start;
        }
    }
    
    *(void**)obj = D_004731A0;
    if (flags & 1) {
        D_002AD390(obj);
    }
}
