s32 func_003DB410(u32);

s64 func_003DBC50(void *arg0, s32 *arg1) {
    u32 *base = (u32 *)((char *)arg0 + 0x14);
    s32 count = *(s32 *)((char *)arg0 + 0x10);
    u32 *end_ptr = base + count;
    u32 word0 = *--end_ptr;
    s32 bitpos = func_003DB410(word0);
    *arg1 = 0x20 - bitpos;
    
    u32 word1;
    u32 upper, lower;
    
    if (bitpos < 0xB) {
        word1=0;
        s32 shift = 0xB - bitpos;
        upper = (word0 >> shift) | 0x3FF00000;
        if (base < end_ptr) {
            word1 = end_ptr[-1];
        }
        s32 shift2 = bitpos + 0x15;
        lower = (word0 << shift2) | (word1 >> shift);
    } else {
        word1=0;
        if (base < end_ptr) {
            end_ptr = end_ptr - 1;
            word1 = *end_ptr;
        }
        s32 shift = bitpos - 0xB;
        if (shift != 0) {
            u32 word2 = 0;
            if (base < end_ptr) {
                word2 = end_ptr[-1];
            }
            upper = (word0 << shift) | ((word1 >> -shift) | 0x3FF00000);
            lower = (word1 << shift) | (word2 >> -shift);
        } else {
            upper = word0 | 0x3FF00000;
            lower = word1;
        }
    }
    
    return ((u64)upper << 32) | lower;
}
