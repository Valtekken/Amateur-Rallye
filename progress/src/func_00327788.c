extern void *func_002B2028(void *);
extern u32 D_0040E618[];
extern int D_004854F0;
extern void func_00327D08(void *);

typedef struct { void *unk0; s32 unk4; void *unk8; } Elem;

/* ============ func_003276C8 ============ */
void func_003276C8(void *obj) {
    Elem *cur = *(Elem **)((char *)obj + 0);
    Elem *end = *(Elem **)((char *)obj + 4);
    s32 total = (s32)((char *)end - (char *)cur);
    Elem *top;
    Elem *e;
    s32 c;
    if ((u32)cur < (u32)end) {
        top = cur;
        do {
            s32 q = (s32)(u32)top->unk8;
            void *p = top->unk0;
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
            top += 1;
        } while ((u32)top < (u32)end);
    }
    e = *(Elem **)((char *)obj + 4);
    c = *(s32 *)((char *)obj + 0x2C);
    *(Elem **)((char *)obj + 4) = (Elem *)((char *)e - total);
    *(s32 *)((char *)obj + 0x2C) = c + 1;
}

/* ============ func_00327788 ============ */
void *func_00327788(void *arg0, int arg1, int arg2) {
    char *p = (char *)arg0;
    char *q = p + 0x20;
    *(int *)(p + 0xC) = arg1;
    *(void **)(p + 4) = &D_004854F0;
    *(int *)(p + 0x18) = 0x7FFFFFFF;
    *(int *)(p + 0) = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x20) = 0;
    *(int *)(q + 4) = 0;
    *(int *)(q + 8) = 0;
    *(int *)(q + 0xC) = 0;
    *(int *)(p + 0x38) = arg2;
    func_00327D08(arg0);
    return arg0;
}

/* ============ func_003277F8 ============ */
void *func_003277F8(void *arg0, int arg1, int arg2, int arg3) {
    char *p = (char *)arg0;
    char *q = p + 0x20;
    *(int *)(p + 0xC) = arg1;
    *(void **)(p + 4) = &D_004854F0;
    *(int *)(p + 0x18) = 0x7FFFFFFF;
    *(int *)(p + 0) = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x20) = 0;
    *(int *)(q + 4) = 0;
    *(int *)(q + 8) = 0;
    *(int *)(q + 0xC) = 0;
    *(int *)(p + 0x38) = arg3;
    func_00327D08(arg0);
    return arg0;
}

/* ============ func_00326C10 ============ */
struct U64 { u64 v; };

void *func_00326C10(void *src, void *end, void *dst) {
    char *s = (char *)src;
    char *d = (char *)dst;
    if (s != end) {
        do {
            s += 0x20;
            if (d != NULL) {
                (*(U64 *)(d + 0x00)).v = (*(const U64 *)(s + 0x00)).v;
                (*(U64 *)(d + 0x08)).v = (*(const U64 *)(s + 0x08)).v;
                (*(U64 *)(d + 0x10)).v = (*(const U64 *)(s + 0x10)).v;
                (*(U64 *)(d + 0x18)).v = (*(const U64 *)(s + 0x18)).v;
            }
            s += 0x20;
            d += 0x20;
        } while (s != end);
    }
    return d;
}
