typedef struct { f32 key; u32 v; } __attribute__((packed)) E8;
extern void func_001C8CF0(void *, void *, s32, s32);
extern void func_001C8C10(s32, s32, s32, u64);
extern void func_001C8D88(void *, void *);

void func_001C8E50(E8 *base, E8 *start, E8 *end, s32 depth) {
    E8 tmp;
    E8 val8;
    E8 *q;
    E8 *p;
    s32 off = (s32)((u8 *)start - (u8 *)base);
    s32 cond;
    func_001C8CF0(base, start, 0, 0);
    if ((u32)start < (u32)end) {
        p = start;
        q = base;
        for (;;) {
            cond = 1;
            if (!(*(f32 *)q < *(f32 *)p)) cond = 0;
            if (cond != 0) {
                tmp = *p;
                val8 = tmp;
                *p = *q;
                func_001C8C10((s32)base, 0, off >> 3, *(u64 *)&val8);
            }
            p++;
            if (!((u32)p < (u32)end)) break;
        }
    }
    func_001C8D88(base, start);
}
