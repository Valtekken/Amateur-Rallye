typedef struct { u32 *data; void *allocation; int capacity, count, tag; } Buf;
extern int D_0043C000;
extern void *D_002AD5A8(int);
extern void D_002AD530(void *);
extern void func_003F931C(void *, void *, int);
extern char D_1D38[];

typedef struct Obj {
    u8 pad[0x14];
    Buf *buf;
} Obj;

void func_0031B660(Obj *arg0, u32 arg1) {
    Buf *p = arg0->buf;
    int n = p->count;

    if (p->capacity - n < 0xC) {
        unsigned want = n + 0x2C;
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

    p->data[p->count++] = 0x10000002;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0x01000404;
    p->data[p->count++] = 0x6C018000;
    p->data[p->count++] = arg1;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = ((u32)D_1D38 >> 3) | 0x14000000;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
}
