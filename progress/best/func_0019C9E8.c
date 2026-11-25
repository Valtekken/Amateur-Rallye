typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
} CameraFixedEntry;

extern const char D_00471FC8[];
extern void func_003F9698(const char *, void *, void *, s32);

void func_0019C9E8(void *arg0, void *arg1, u32 arg2, f32 *arg3) {
    s32 *base = *(s32 **)((u8 *)arg0 + 0x34);
    s32 *end = *(s32 **)((u8 *)arg0 + 0x38);
    s32 diff = end - base;
    
    s32 magic = (s32)0xB6DB6DB7;
    s32 product = diff * magic;
    s32 count = product >> 2;
    
    if (arg2 < (u32)count) {
        u32 offset = arg2 * 0x1C;
        void *arg1_ptr = arg1;
        s32 val00 = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_00;
        
        *(s32 *)((u8 *)arg1_ptr + 0x28) = 1;
        *(s32 *)((u8 *)arg1_ptr + 0x0C) = val00;
        *(f32 *)((u8 *)arg1_ptr + 0x14) = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_04;
        *(f32 *)((u8 *)arg1_ptr + 0x18) = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_08;
        *(f32 *)((u8 *)arg1_ptr + 0x1C) = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_0C;
        *(s32 *)((u8 *)arg1_ptr + 0x20) = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_10;
        *(s32 *)((u8 *)arg1_ptr + 0x24) = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_14;
        *arg3 = ((CameraFixedEntry *)((u8 *)*(s32 **)((u8 *)arg0 + 0x34) + offset))->unk_18;
        return;
    }
    
    func_003F9698(D_00471FC8, arg1, arg0, *base);
}
