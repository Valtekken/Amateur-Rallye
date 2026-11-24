typedef struct { f32 key; u32 v; } __attribute__((packed)) E8;
extern void func_001C8C10(s32, s32, s32, u64);

void func_001C8CF0(u8 *base, u8 *end) {
    s32 n = ((s32)(end - base)) >> 3;
    if (n >= 2) {
        s32 mid = (n - 2) / 2;
        u8 *p = (u8 *)((mid << 3) + (s32)base);
        do {
            E8 tmp = *(E8 *)p;
            u64 val = *(u64 *)&tmp;
            func_001C8C10((s32)base, mid, n, val);
            if (mid == 0) break;
            p -= 8;
            mid--;
        } while (1);
    }
}
