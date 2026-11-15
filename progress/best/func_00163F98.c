extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, f32);

extern const char D_0044DD18[];
extern const char D_0044F108[];
extern const char D_0044F150[];
extern const char D_0044F168[];
extern const char D_0044F180[];
extern const char D_0044F190[];
extern const char D_0044F1A8[];
extern const char D_0044F1C0[];

void *func_00163F98(void *arg0)
{
    s32 key[8];
    char writer[0x10];
    void *obj;
    s32 v;

    obj = D_002AD408(0x24);
    func_001D4040(key, D_0044F108);
    v = key[0];

    *(s32 *)((char *)obj + 0x08) = 0;
    *(void **)((char *)obj + 0x10) = (void *)D_0044DD18;
    *(s32 *)((char *)obj + 0x0C) = 0;
    *(s32 *)((char *)obj + 0x04) = 0;
    *(s32 *)obj = 0;
    *(s32 *)((char *)obj + 0x14) = 0;
    *(s32 *)((char *)obj + 0x1C) = 0;
    *(s32 *)((char *)obj + 0x18) = 0;

    func_001E2460(writer, obj);
    *(s32 *)((char *)obj + 0x20) = v;

    func_001E2C08(writer, D_0044F150, *(f32 *)((char *)arg0 + 0x1C));
    func_001E2C08(writer, D_0044F168, *(f32 *)((char *)arg0 + 0x18));
    func_001E2C08(writer, D_0044F180, *(f32 *)((char *)arg0 + 0x20));
    func_001E2C08(writer, D_0044F190, *(f32 *)((char *)arg0 + 0x28));
    func_001E2C08(writer, D_0044F1A8, *(f32 *)((char *)arg0 + 0x24));
    func_001E2C08(writer, D_0044F1C0, *(f32 *)((char *)arg0 + 0x2C));

    return obj;
}
