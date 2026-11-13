extern void *D_002AD408(s32);
extern void func_001D4040(void *, void *);
extern void func_001E2460(void *, void *, u32);
extern void func_001E2B98(void *, void *, s32);
extern void func_001E2E38(void *, void *, void *);
extern void func_001E2C08(void *, void *, f32);
extern char D_0047B640[];
extern char D_0047B630[];
extern char D_0047B638[];
extern char D_0047B4A8[];
extern u32 D_0044DD18[];

struct Obj {
    s32 f0, f4, f8, fC;
    u32 *f10;
    s32 f14, f18, f1C, f20;
};

struct Arg0 {
    char pad[0x10];
    f32 f10;
    s32 s14;
    void *p18;
};

void *func_0028F4C8(void *arg0) {
    struct Obj *obj;
    char local0[0x20];
    char local2[0x10];
    struct Arg0 *a = (struct Arg0 *)arg0;
    u32 h;

    obj = D_002AD408(0x24);
    func_001D4040(local0, D_0047B640);
    h = *(u32 *)local0;
    obj->f8 = 0;
    obj->f10 = (u32 *)D_0044DD18;
    obj->fC = 0;
    obj->f4 = 0;
    obj->f0 = 0;
    obj->f14 = 0;
    obj->f1C = 0;
    obj->f18 = 0;
    obj->f20 = h;
    func_001E2460(local2, obj, h);
    func_001E2B98(local2, D_0047B630, a->s14);
    func_001E2E38(local2, D_0047B638, &a->p18);
    func_001E2C08(local2, D_0047B4A8, a->f10);
    return obj;
}
