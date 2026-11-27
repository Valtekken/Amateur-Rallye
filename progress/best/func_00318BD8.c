typedef struct { u32 *data; void *allocation; int capacity, count, tag; } Buf;
extern int D_0043C000;
extern void *D_002AD5A8(int);
extern void D_002AD530(void *);
extern void func_003F931C(void *, void *, int);
extern char D_1B98[];

void func_00318BD8(Buf *p, u32 arg1, s32 arg2) {
    s32 idx = arg2 * 4;
    int n;

    p->data[idx] = arg1 | 0x10000000;
    p->data[idx + 1] = 0;
    p->data[idx + 2] = 0x01000404;
    p->data[idx + 3] = (arg1 << 16) | 0x6C008000;
    ((u64 *)p->data)[arg2 * 2 + 2] = (u64)(s32)(arg1 - 1) | ((u64)0x8532 << 45);
    ((u64 *)p->data)[arg2 * 2 + 3] = 0xE;

    n = p->count;
    if (p->capacity - n < 4) {
        unsigned want = n + 36;
        int shift = 0, size, capacity;
        void *raw;
        u32 *aligned;
        D_0043C000 = p->tag;
        while ((unsigned)(1 << shift) < want) shift++;
        size = 1 << shift;
        capacity = size - 32;
        raw = D_002AD5A8(size * 4);
        aligned = (u32 *)(((u32)raw + 127) & ~127);
        if (p->count > 0) func_003F931C(aligned, p->data, p->count * 4);
        if (p->allocation) D_002AD530(p->allocation);
        p->allocation = raw;
        p->data = aligned;
        p->capacity = capacity;
        D_0043C000 = 0;
    }

    p->data[p->count++] = 0x10000000;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = ((u32)D_1B98 >> 3) | 0x14000000;
}
