typedef struct {
    u32 begin;
    u32 end;
    u32 cap;
} Vector;

typedef struct {
    void *vt;
    u8 pad[0x10];
    Vector vec1;
    Vector vec2;
} MyClass;

extern void func_002B2028(u32 ptr, void *vec);
extern void D_002AD390(void *self);
extern u32 D_0040E618[];
extern void *D_00472F70;
extern void *D_004731A0;

void func_001BA930(MyClass *self, s32 arg1) {
    u32 n;
    u32 size;
    u32 begin;
    u32 cur;
    u32 end;
    u32 cap;

    self->vt = D_00472F70;

    // Process vec2 at self+0x20
    cur = *(u32 *)((u8 *)self + 0x20) + 0x14;
    end = *(u32 *)((u8 *)self + 0x24);
    if (cur < end) {
        do {
            cur += 0x14;
        } while (cur < end);
    }

    begin = *(u32 *)((u8 *)self + 0x20);
    cap = *(u32 *)((u8 *)self + 0x28);
    n = ((s32)(cap - begin) * (s32)0xCCCCCCCD) >> 2;
    if (n != 0) {
        size = n * 0x14;
        if (size != 0) {
            func_002B2028(begin, (void *)((u8 *)self + 0x20));
        } else {
            *(u32 *)begin = *(u32 *)((u8 *)D_0040E618 - 4);
            *(u32 *)((u8 *)D_0040E618 - 4) = begin;
        }
    }

    self->vt = D_004731A0;

    // Process vec1 at self+0x14
    cur = *(u32 *)((u8 *)self + 0x14) + 4;
    end = *(u32 *)((u8 *)self + 0x18);
    if (cur < end) {
        do {
            cur += 4;
        } while (cur < end);
    }

    begin = *(u32 *)((u8 *)self + 0x14);
    cap = *(u32 *)((u8 *)self + 0x1C);
    n = (cap - begin) >> 2;
    if (n != 0) {
        size = n << 2;
        if (size != 0) {
            func_002B2028(begin, (void *)((u8 *)self + 0x14));
        } else {
            *(u32 *)begin = *(u32 *)((u8 *)D_0040E618 - 4);
            *(u32 *)((u8 *)D_0040E618 - 4) = begin;
        }
    }

    if (arg1 & 1) {
        D_002AD390(self);
    }
}
