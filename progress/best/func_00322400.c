typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;

typedef struct {
    u8 pad[0x2C];
    u8 unk2C;
    u8 unk2D;
    u8 unk2E;
    u8 unk2F;
} BufElem;

typedef struct {
    u8 pad[0x18];
    BufElem **buf_ptr;
} Arg1;

typedef struct {
    u8 pad[0x74];
    u64 *data_ptr;
    s32 data_end;
} Arg2;

void func_00322400(void *unused, Arg1 *arg1, Arg2 *arg2) {
    if (!arg2) return;
    
    s32 count = (arg2->data_end - (s32)arg2->data_ptr) >> 3;
    if (count <= 0) return;
    
    const u64 MASK = 0x0FFF00FFFFFFFFFFULL;
    const u64 OR_VAL = 0x4000000000000000ULL;
    const u32 HIGH_MASK = 0x7FFFF;
    const s32 MULT = 0x30;
    
    BufElem **buf_ptr = arg1->buf_ptr;
    
    for (s32 i = 0; i < count; i++) {
        u64 val = arg2->data_ptr[i];
        val = (val & MASK) | OR_VAL;
        
        s32 high = (s32)((val >> 16) & HIGH_MASK);
        s32 low = (s32)(val & 0xFFFF);
        s32 sum = high + low;
        
        if (high < sum) {
            s32 base = high * MULT;
            s32 inner_count = sum - high;
            
            do {
                inner_count--;
                BufElem *elem = (BufElem *)((u8 *)*buf_ptr + base);
                elem->unk2C = 0x72;
                base += MULT;
                elem->unk2F = 0xFE;
                elem->unk2D = 0x72;
                elem->unk2E = 0x72;
            } while (inner_count != 0);
        }
    }
}
