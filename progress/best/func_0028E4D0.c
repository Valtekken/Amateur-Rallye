extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2F18(void *, const char *, void *);
extern char D_0044DD18[];
extern char D_0047B538[];
extern char D_0047B2C8[];
extern char D_0047B550[];
extern char D_0047B558[];
extern char D_0047B560[];
extern char D_0047B568[];
extern char D_0047B570[];
extern char D_0047B578[];
extern char D_0047B580[];
extern char D_0047B588[];
extern char D_0047B590[];
extern char D_0047B5A0[];
extern char D_0047B5B0[];
extern char D_0047B5C0[];
extern char D_0047B4A8[];
extern char D_0047B4B0[];
extern char D_0047B4C0[];
extern char D_0047B4D0[];
extern char D_0047AF40[];
extern char D_0047B4F8[];
extern char D_0047B508[];
extern char D_0047B518[];

typedef struct { u32 a, b; struct { u32 begin, end; } list; void *vt; u32 v[3]; u32 key; } Obj;

void *func_0028E4D0(void *arg0)
{
    u32 key[4]; u32 pad[4]; u32 reg[4];
    Obj *p = (Obj *)D_002AD408(0x24);
    char *o = (char *)arg0;

    func_001D4040(key, D_0047B538);
    { u32 k = key[0];
      p->a = 0; p->b = 0; p->list.begin = 0; p->list.end = 0; p->vt = D_0044DD18;
      p->v[0] = 0; p->v[1] = 0; p->v[2] = 0; p->key = k; }

    func_001E2460(reg, p);
    func_001E2C08(reg, D_0047B2C8, *(f32 *)(o + 0x34));
    func_001E2C08(reg, D_0047B550, *(f32 *)(o + 0x38));
    func_001E2B98(reg, D_0047B558, *(s32 *)(o + 0x14));
    func_001E2B98(reg, D_0047B560, *(s32 *)(o + 0x18));
    func_001E2B98(reg, D_0047B568, *(s32 *)(o + 0x1C));
    func_001E2C08(reg, D_0047B570, *(f32 *)(o + 0x3C));
    func_001E2C08(reg, D_0047B578, *(f32 *)(o + 0x40));
    func_001E2C08(reg, D_0047B580, *(f32 *)(o + 0x44));
    func_001E2C08(reg, D_0047B588, *(f32 *)(o + 0x48));
    func_001E2C08(reg, D_0047B590, *(f32 *)(o + 0x4C));
    func_001E2C08(reg, D_0047B5A0, *(f32 *)(o + 0x50));
    func_001E2C08(reg, D_0047B5B0, *(f32 *)(o + 0x54));
    func_001E2C08(reg, D_0047B5C0, *(f32 *)(o + 0x58));
    func_001E2C08(reg, D_0047B4A8, *(f32 *)(o + 0x24));
    func_001E2C08(reg, D_0047B4B0, *(f32 *)(o + 0x28));
    func_001E2C08(reg, D_0047B4C0, *(f32 *)(o + 0x2C));
    func_001E2C08(reg, D_0047B4D0, *(f32 *)(o + 0x30));
    func_001E2F18(reg, D_0047AF40, o + 0x74);
    func_001E2F18(reg, D_0047B4F8, o + 0x80);
    func_001E2F18(reg, D_0047B508, o + 0xA4);
    func_001E2F18(reg, D_0047B518, o + 0xB0);

    return p;
}
