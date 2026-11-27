extern void func_0012AC98(void *, s8);
extern void func_00154058(void *, void *, void *);
extern void func_00154398(void **, void *, s8 *);
extern void func_001548B0(void **, void *, void **, u8 *);

#define P(o) ((void *)((u8 *)sp + (o)))
#define U8(o) (*(u8 *)P(o))
#define S8(o) (*(s8 *)P(o))
#define U16(o) (*(u16 *)P(o))
#define F32(o) (*(f32 *)P(o))
#define PTR(o) (*(void **)P(o))

void func_0012BC70(void *arg0, s8 arg1) {
    u64 sp[0x12];
    void *list;
    void *cur;
    void *end;
    void *tbl;
    s32 flag;
    s32 diff;
    f32 *src;
    f32 *dst;

    func_0012AC98(sp, (S8(0x20) = arg1));

    list = (char *)arg0 + 0x10;
    cur = *(void **)((char *)list + 0x04);
    end = *(void **)((char *)list + 0x08);
    if (cur != end) {
        if (cur != 0) {
            *(u8 *)cur = U8(0x00);
            *(f32 *)((char *)cur + 0x04) = F32(0x04);
            *(s32 *)((char *)cur + 0x08) = *(s32 *)P(0x08);
            *(f32 *)((char *)cur + 0x0C) = F32(0x0C);
            src = (f32 *)P(0x0C);
            dst = (f32 *)((char *)cur + 0x0C);
            dst[1] = src[1];
            dst[2] = src[2];
            *(f32 *)((char *)cur + 0x18) = F32(0x18);
        }
        *(void **)((char *)list + 0x04) = (char *)*(void **)((char *)list + 0x04) + 0x1C;
    } else {
        func_00154058(list, cur, sp);
    }

    tbl = (char *)arg0 + 0x4C;
    func_00154398((void **)P(0x30), tbl, (s8 *)P(0x20));
    *(s32 *)P(0x40) = *(s32 *)tbl;
    flag = 0;
    if (PTR(0x30) == *(void **)tbl || *(s8 *)((char *)PTR(0x30) + 0x10) > S8(0x20)) {
        flag = 1;
    }
    if (flag != 0) {
        PTR(0x60) = PTR(0x30);
        PTR(0x80) = PTR(0x30);
        U8(0x70) = (u8)S8(0x20);
        U16(0x72) = 0;
        func_001548B0((void **)P(0x50), tbl, (void **)P(0x80), (u8 *)P(0x70));
        PTR(0x30) = PTR(0x50);
    }

    diff = (s32)*(void **)((char *)arg0 + 0x14) - (s32)*(void **)((char *)arg0 + 0x10);
    *(s16 *)((char *)PTR(0x30) + 0x12) = (s16)((((s32)(diff * 0xB6DB6DB7)) >> 2) - 1);
}
