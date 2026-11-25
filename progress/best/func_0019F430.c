extern const char D_004722F0[];
extern char D_00473998[];
extern void func_001D4040(void *, const char *);

void *func_0019F430(void *arg0) {
    u32 key[4];
    func_001D4040(key, D_004722F0);
    
    u8 *p = (u8 *)arg0;
    s32 m1 = -1;
    u32 k = key[0];
    void *vt = (void *)D_00473998;
    
    f32 f20 = 20.0f;
    f32 f15 = 1.5f;
    f32 f05 = 0.5f;
    f32 fm02 = -0.2f;
    f32 f025 = 0.25f;
    f32 f075 = 0.75f;
    
    // Store 20.0f to three locations first
    *(f32 *)(p + 0x2C) = 20.0f;
    *(f32 *)(p + 0x24) = 20.0f;
    *(f32 *)(p + 0x28) = 20.0f;
    
    *(s32 *)(p + 0x4) = k;
    *(void **)(p + 0x8) = vt;
    
    *(f32 *)(p + 0xC) = 0.5f;
    *(f32 *)(p + 0x14) = -0.2f;
    *(f32 *)(p + 0x18) = 0.25f;
    *(f32 *)(p + 0x1C) = 0.75f;
    *(f32 *)(p + 0x20) = 1.5f;
    
    *(s32 *)(p + 0x3C) = -1;
    *(s32 *)(p + 0x0) = -1;
    *(f32 *)(p + 0x10) = 1.5f;
    *(s32 *)(p + 0x30) = -1;
    *(s32 *)(p + 0x34) = -1;
    *(s32 *)(p + 0x38) = -1;
    
    *(s32 *)(p + 0x40) = 0;
    *(s32 *)(p + 0x44) = 0;
    *(s32 *)(p + 0x48) = 0;
    *(s32 *)(p + 0x4C) = 0;
    *(s32 *)(p + 0x50) = 0;
    *(s32 *)(p + 0x54) = 0;
    
    return arg0;
}
