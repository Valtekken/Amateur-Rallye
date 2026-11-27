typedef struct { u32 *data; void *allocation; int capacity, count, tag; } Buf;
extern int D_0043C000;
extern void *D_002AD5A8(int);
extern void D_002AD530(void *);
extern void func_003F931C(void *, void *, int);
extern char D_1CA0[];

typedef struct Obj {
    u8 pad[0x14];
    Buf *buf;
} Obj;

void func_0031BC68(Obj *arg0, u64 arg1) {
    Buf *p = arg0->buf;
    int n = p->count;

    if (p->capacity - n < 0x10) {
        unsigned want = n + 0x30;
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

    p->data[p->count++] = 0x10000003;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0x01000404;
    p->data[p->count++] = 0x6C028000;

    *(u64 *)(p->data + p->count) = ((u64)0x8000 << 45) | 1;
    p->count += 2;
    *(u64 *)(p->data + p->count) = 0xE;
    p->count += 2;
    *(u64 *)(p->data + p->count) = arg1;
    p->count += 2;
    *(u64 *)(p->data + p->count) = 0x14;
    p->count += 2;

    p->data[p->count++] = ((u32)D_1CA0 >> 3) | 0x14000000;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
}
