extern s32 D_002AD408(int);
extern s32 func_0034E698(int, void *);
extern s32 func_00357E70(void *, f32, f32, f32);
extern void func_003581E8(void *, s32);
extern s32 D_0042DD2C;

void func_003375A0(void *arg0, void *arg1) {
    void *p, *q;
    p = *(void **)((char *)arg1 + 0x2C);
    if (p != 0) {
        if (D_0042DD2C == 0)
            D_0042DD2C = func_0034E698(D_002AD408(0x106C), arg1);
        q = *(void **)((char *)arg0 + 0x34);
        func_00357E70(D_0042DD2C, *(f32 *)((char *)q + 0xC0), *(f32 *)((char *)q + 0xC8), 60.0f);
        func_003581E8(D_0042DD2C, *(s32 *)((char *)arg0 + 0x404));
    }
}

extern void func_001577C8(void *, void *, void **);

void func_00337638(void *arg0, void *arg1) {
    void *local, *begin, *end, *p;
    s32 count, i;
    local = arg1;
    begin = *(void **)arg0;
    end = *(void **)((char *)arg0 + 4);
    count = (s32)((char *)end - (char *)begin) >> 2;
    if (count != 0) {
        i = 0;
        p = begin;
        while ((u32)i < (u32)count) {
            if (*(void **)p == arg1)
                return;
            i++;
            p = (void *)((char *)p + 4);
        }
    }
    end = *(void **)((char *)arg0 + 4);
    if (end != *(void **)((char *)arg0 + 8)) {
        if (end != 0)
            *(void **)end = arg1;
        *(void **)((char *)arg0 + 4) = (void *)((char *)end + 4);
    } else {
        func_001577C8(arg0, end, &local);
    }
}

extern void func_00337A98(void *, void *);
extern void *func_003F93CC(void *, void *, u32);

void func_003303C0(void *arg0) {
    void *begin, *end, *p;
    begin = *(void **)((char *)arg0 + 0x20);
    end = *(void **)((char *)arg0 + 0x24);
    while (begin != end) {
        func_00337A98(arg0, *(void **)begin);
        begin = (void *)((char *)begin + 4);
    }
    begin = *(void **)((char *)arg0 + 0x20);
    end = *(void **)((char *)arg0 + 0x24);
    func_003F93CC(begin, end, 0);
    *(void **)((char *)arg0 + 0x24) = begin;
}

extern void func_00342D00(void *, s32, void *);

void func_0032FF90(void *arg0, void *arg1) {
    char *p0 = (char *)arg0;
    char *p1 = (char *)arg1;
    *(s32 *)(p0 + 0x430) = *(s32 *)(p1 + 0);
    *(s32 *)(p0 + 0x434) = *(s32 *)(p1 + 4);
    *(f32 *)(p0 + 0x440) = *(f32 *)(p1 + 0x10);
    *(f32 *)(p0 + 0x444) = *(f32 *)(p1 + 0x14);
    *(f32 *)(p0 + 0x448) = *(f32 *)(p1 + 0x18);
    *(f32 *)(p0 + 0x44C) = *(f32 *)(p1 + 0x1C);
    *(f32 *)(p0 + 0x450) = *(f32 *)(p1 + 0x20);
    *(f32 *)(p0 + 0x454) = *(f32 *)(p1 + 0x24);
    *(f32 *)(p0 + 0x458) = *(f32 *)(p1 + 0x28);
    *(f32 *)(p0 + 0x45C) = *(f32 *)(p1 + 0x2C);
    *(f32 *)(p0 + 0x454) = 0.25f;
    *(f32 *)(p0 + 0x458) = 512.0f;
    func_00342D00(*(void **)(p0 + 0x30), *(s32 *)(p0 + 0x434), p0 + 0x440);
}
