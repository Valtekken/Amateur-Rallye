extern void *D_002AD408(s32);
extern void *func_0021E290(void *);
extern void *func_00205BF8(void *);
extern void func_0021E540(void *, void *);
extern void func_00205EA0(void *);
extern void func_001D4810(void *, const char *, s32);
extern void func_002062A8(void *, void *);
extern void func_001525D8(void *, void *, s32);
extern void func_00206338(void *, void *);
extern void func_002063A0(void *, void *, f32);
extern void func_00205CE0(void *, s32);
extern void func_001D4040(void *, const char *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, s32, s32);
extern char D_0044E8C0[];
extern char D_0044E8E0[];

typedef struct Vec4 { f32 x, y, z, w; } Vec4;

void func_0015D5B0(void) {
    u8 *self;
    u8 *obj;
    u8 *sub;
    Vec4 sp;
    f32 *vec;
    s64 *field70;

    self = (u8 *)func_0021E290(D_002AD408(0x7C));
    obj = (u8 *)func_00205BF8(D_002AD408(0x90));
    func_0021E540(self, obj);
    func_00205EA0(obj);
    sp.x = 0; sp.y = 0; sp.z = 0; sp.w = 0;
    func_001D4810(&sp, D_0044E8C0, 0);
    func_002062A8(obj, &sp);
    func_001525D8(obj + 0x20, obj + 0x20, 0x3F800000);
    sub = obj + 0x50;
    *(f32 *)(obj + 0x50) = 0.0f;
    *(f32 *)(sub + 0x4) = 0.0f;
    *(f32 *)(sub + 0x8) = 0.0f;
    *(f32 *)(sub + 0xC) = 1.0f;
    *(f32 *)(obj + 0x10) = 1.0f;
    *(f32 *)(obj + 0x14) = 1.0f;
    *(f32 *)(obj + 0x18) = 1.0f;
    *(f32 *)(obj + 0x1C) = 1.0f;
    *(s32 *)(obj + 0x64) = 1;
    *(s32 *)(obj + 0x88) = *(s32 *)(obj + 0x88) + 2;
    sp.x = 1.0f; sp.y = 1.0f; sp.z = 1.0f; sp.w = 1.0f;
    func_00206338(obj, &sp);
    sp.x = 192.0f; sp.y = 192.0f; sp.z = 0.0f; sp.w = 0.0f;
    func_002063A0(obj, &sp, 192.0f);
    func_00205CE0(obj, 0);
    vec = *(f32 **)(self + 0x50) + 0xC; /* +0x30 */
    vec = *(f32 **)(self + 0x50);
    /* obj at self+0x50, +0x30 region */
    {
        u8 *q = *(u8 **)(self + 0x50);
        *(f32 *)(q + 0x30) = 0.0f;
        *(f32 *)(q + 0x34) = 1.0f;
        *(f32 *)(q + 0x38) = 0.0f;
        *(f32 *)(q + 0x3C) = 0.0f;
    }
    field70 = (s64 *)(*(u8 **)(self + 0x50) + 0x70);
    *field70 = (*field70 & (s64)(0xBFFFFFFF * 4 | 3)) | ((s64)0x8000 << 17);
    func_001D4040(&sp, D_0044E8E0);
    func_0021E748(self, &sp);
    {
        u8 *q = *(u8 **)(self + 0x50);
        u8 *r = q + 0x50;
        *(f32 *)(q + 0x50) = 0.0f;
        *(f32 *)(r + 0x4) = 0.0f;
        *(f32 *)(r + 0x8) = 0.0f;
        *(f32 *)(r + 0xC) = 1.0f;
    }
    func_0021E740(self, 1, 0);
}
