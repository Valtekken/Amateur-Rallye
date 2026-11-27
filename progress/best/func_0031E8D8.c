typedef struct { u32 *data; void *allocation; int capacity, count, tag; } Buf;
extern int D_0043C000;
extern void *D_002AD5A8(int);
extern void D_002AD530(void *);
extern void func_003F931C(void *, void *, int);
extern char D_1B98[];

typedef struct Obj {
    u8 pad[0x14];
    Buf *buf;
} Obj;

void func_0031E8D8(Obj *arg0, void *arg1, s32 arg2) {
    Buf *p = arg0->buf;
    s32 nq = arg2 >> 4;
    s32 need = (nq + 2) * 4;

    if (p->capacity - p->count < need) {
        unsigned want = p->count + need + 0x20;
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

    p->data[p->count++] = nq | 0x10000000;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0x01000404;
    p->data[p->count++] = (nq << 16) | 0x6C008000;

    func_003F931C(p->data + p->count, arg1, nq * 16);
    p->count += nq * 4;

    p->data[p->count++] = 0x10000000;
    p->data[p->count++] = 0;
    p->data[p->count++] = 0;
    p->data[p->count++] = ((u32)D_1B98 >> 3) | 0x14000000;
}
