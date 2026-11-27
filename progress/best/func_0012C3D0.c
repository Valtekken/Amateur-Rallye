extern void func_001537E8(void *, s32, s32);
extern void func_00154398(void **, void *, s8 *);
extern void func_001548B0(void **, void *, void **, u8 *);
extern void func_0012ADB0(void *, void *, void *, void *, f32);
extern void func_001550F8(void **, u32, s8);
extern void func_001D4040(void *, char *);
extern void func_001E3D10(s32, void *, s32);
extern char D_004477F0[];

#define P(o) ((void *)((char *)sp + (o)))
#define U8(o) (*(u8 *)P(o))
#define U16(o) (*(u16 *)P(o))
#define F32(o) (*(f32 *)P(o))
#define PTR(o) (*(void **)P(o))

void func_0012C3D0(void *arg0) {
    u64 sp[0xC];
    char *p = *(char **)((char *)arg0 + 0x40);
    s32 *hdr = (s32 *)(p - 0x10);
    s32 cnt = hdr[0];
    char *tbl;
    s32 n;
    char *elem;
    s32 cond;
    char *base;
    char *pp;
    s32 h;

    if (cnt == 0) return;
    n = cnt - 1;
    if ((u32)hdr[2] >= 2)
        func_001537E8((char *)arg0 + 0x40, cnt, 1);
    tbl = (char *)arg0 + 0x4C;
    *(s32 *)(*(char **)((char *)arg0 + 0x40) - 4) = 1;
    elem = *(char **)((char *)arg0 + 0x40) + n;

    func_00154398((void **)P(0x0), tbl, (s8 *)elem);
    PTR(0x10) = *(void **)tbl;
    cond = 0;
    if (PTR(0x0) == PTR(0x10) || *(s8 *)((char *)PTR(0x0) + 0x10) > *(s8 *)elem)
        cond = 1;
    if (cond) {
        PTR(0x30) = PTR(0x0);
        U8(0x40) = (u8)*(s8 *)elem;
        PTR(0x50) = PTR(0x0);
        U16(0x42) = 0;
        func_001548B0((void **)P(0x20), tbl, (void **)P(0x50), (u8 *)P(0x40));
        PTR(0x0) = PTR(0x20);
    }
    base = *(char **)((char *)arg0 + 0x10) + *(s16 *)((char *)PTR(0x0) + 0x12) * 28;
    F32(0x0) = *(f32 *)(base + 0xC);
    F32(0x4) = *(f32 *)(base + 0x10);
    F32(0x8) = *(f32 *)(base + 0x14);
    pp = (char *)arg0 + 0x40;
    func_0012ADB0((char *)*(void **)((char *)arg0 + 0x34) + (*(u32 *)(*(char **)pp - 0x10) - 1) * 32, sp, base, *(void **)((char *)arg0 + 0x34), *(f32 *)(base + 0x18));
    func_001550F8((void **)pp, *(u32 *)(*(char **)pp - 0x10) - 1, 0);
    h = func_001E4280();
    func_001D4040(sp, D_004477F0);
    func_001E3D10(h, sp, 1);
}
