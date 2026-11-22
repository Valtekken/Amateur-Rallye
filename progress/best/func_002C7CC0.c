extern u8 D_0049ABC0[64];

typedef struct {
    u8 pad0[0x30];
    u64 flags;      // 0x30
    f32 f38;        // 0x38
    f32 f3C;        // 0x3C
    f32 f40;        // 0x40
    f32 f44;        // 0x44
    u8 pad48[0x10]; // 0x48-0x57
    f32 f58;        // 0x58
    f32 f5C;        // 0x5C
    f32 f60;        // 0x60
    f32 f64;        // 0x64
    f32 f68;        // 0x68
    f32 f6C;        // 0x6C
    f32 f70;        // 0x70
    f32 f74;        // 0x74
    u8 pad78[0x10]; // 0x78-0x87
    u64 unk88;      // 0x88
    u64 unk90;      // 0x90
} SomeStruct;

s32 func_002C7CC0(SomeStruct* arg0) {
    u64 flags = arg0->flags;
    u64 mask18 = 0x8000ULL << 18;
    u16 v0 = *(u16*)&arg0->flags;
    u16 v1 = *(u16*)((u8*)&arg0->flags + 2);
    
    if ((flags & mask18) != 0) {
        arg0->unk88 = v0;
        arg0->unk90 = v1;
    } else {
        arg0->unk88 = 0;
        arg0->unk90 = 0;
    }
    
    flags = arg0->flags;
    u64 mask19 = 0x8000ULL << 19;
    
    if (flags & mask19) {
        f32 scale = 0.0078125f;
        f32 one = 1.0f;
        arg0->f38 = (f32)D_0049ABC0[6] * scale - one;
        arg0->f3C = (f32)D_0049ABC0[7] * scale - one;
        arg0->f40 = (f32)D_0049ABC0[4] * scale - one;
        arg0->f44 = (f32)D_0049ABC0[5] * scale - one;
    }
    
    flags = arg0->flags;
    u64 mask17 = 0x8000ULL << 17;
    
    if (flags & mask17) {
        f32 scale = 0.00390625f;
        arg0->f58 = (f32)D_0049ABC0[0xE] * scale;
        arg0->f5C = (f32)D_0049ABC0[0xF] * scale;
        arg0->f60 = (f32)D_0049ABC0[0xC] * scale;
        arg0->f64 = (f32)D_0049ABC0[0xD] * scale;
        arg0->f68 = (f32)D_0049ABC0[0x10] * scale;
        arg0->f6C = (f32)D_0049ABC0[0x12] * scale;
        arg0->f70 = (f32)D_0049ABC0[0x11] * scale;
        arg0->f74 = (f32)D_0049ABC0[0x13] * scale;
    }
    
    return 1;
}
