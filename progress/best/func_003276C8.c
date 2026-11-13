extern void *func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct { void *unk0; s32 unk4; void *unk8; } Elem;

/* ============ func_003276C8 ============ */
void func_003276C8(void *obj) {
    Elem *end = *(Elem **)((char *)obj + 4);
    Elem *cur = *(Elem **)((char *)obj + 0);
    s32 total = (s32)((char *)end - (char *)cur);
    if ((u32)cur < (u32)end) {
        do {
            s32 q = (s32)(u32)cur->unk8;
            void *p = cur->unk0;
            s32 n = (s32)((u32)q - (u32)p) >> 2;
            if (n != 0) {
                u32 sz = (u32)n << 2;
                if (sz != 0) {
                    func_002B2028(p);
                } else {
                    *(void **)p = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)p;
                }
            }
            cur += 1;
        } while ((u32)cur < (u32)end);
    }
    Elem *e = *(Elem **)((char *)obj + 4);
    s32 c = *(s32 *)((char *)obj + 0x2C);
    *(Elem **)((char *)obj + 4) = (Elem *)((char *)e - total);
    *(s32 *)((char *)obj + 0x2C) = c + 1;
}

/* ============ func_00326C10 ============ */
typedef struct __attribute__((packed)) { u64 v; } PU64;

void *func_00326C10(void *src, void *end, void *dst) {
    char *s = (char *)src;
    char *d = (char *)dst;
    if (s != end) {
        do {
            s += 0x20;
            if (d != NULL) {
                *(PU64 *)(d + 0x00) = *(const PU64 *)(s + 0x00);
                *(PU64 *)(d + 0x08) = *(const PU64 *)(s + 0x08);
                *(PU64 *)(d + 0x10) = *(const PU64 *)(s + 0x10);
                *(PU64 *)(d + 0x18) = *(const PU64 *)(s + 0x18);
            }
            s += 0x20;
            d += 0x20;
        } while (s != end);
    }
    return d;
}
