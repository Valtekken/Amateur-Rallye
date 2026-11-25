typedef struct {
    f32 x, y, z;
} Vec3;

typedef struct {
    Vec3 *data;
} SourceElement;

typedef struct {
    SourceElement **base;
    SourceElement **end;
} SourceArray;

typedef struct {
    u8 pad[0x20];
    Vec3 vec;
} DestElement;

typedef struct {
    DestElement *base;
    DestElement *end;
} DestArray;

void func_00370868(SourceArray *src, DestArray *dst, f32 scale) {
    s32 count = (s32)((u32)src->end - (u32)src->base) >> 2;
    f32 fval;
    
    if (count >= 0) {
        fval = (f32)count * scale;
    } else {
        u32 temp = (count & 1) | (u32)src->base;
        fval = 2.0f * (f32)temp * scale;
    }
    
    s32 index = (s32)fval;
    
    if (index < 0) return;
    
    s32 count2 = (s32)((u32)src->end - (u32)src->base) >> 2;
    if ((u32)index >= (u32)count2) return;
    
    SourceElement *elem = src->base[index];
    if (dst->base == dst->end) return;
    
    Vec3 *src_cur = elem->data;
    char *dst_counter = (char *)dst->base;
    char *dst_store = (char *)dst->base + 0x20;
    
    while (dst_counter != (char *)dst->end) {
        f32 x = src_cur->x;
        f32 y = src_cur->y;
        f32 z = src_cur->z;
        src_cur++;
        
        *(f32 *)(dst_store + 0) = x;
        *(f32 *)(dst_store + 4) = y;
        *(f32 *)(dst_store + 8) = z;
        
        dst_counter += 0x30;
        dst_store += 0x30;
    }
}
