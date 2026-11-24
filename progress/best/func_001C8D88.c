typedef struct { f32 key; u32 v; } __attribute__((packed)) E8;
extern void func_001C8C10(s32, s32, s32, u64);

void func_001C8D88(u8 *base, u8 *end) {
    E8 tmp;
    E8 val8;
    u8 *base2 = base;
    u8 *p = end;
    u8 *q = end;
    s32 bytes;
    if ((((s32)(end - base)) >> 3) < 2) return;
    bytes = (s32)(end - base);
    p -= 8;
    do {
        bytes -= 8;
        tmp = *(E8 *)p;
        q -= 8;
        val8 = tmp;
        *(E8 *)p = *(E8 *)base;
        func_001C8C10((s32)base2, 0, bytes >> 3, *(u64 *)&val8);
        p -= 8;
    } while (((s32)(q - base)) >> 3 >= 2);
}
