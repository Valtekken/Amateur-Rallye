extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern void func_001E2C78(void *, const char *, s32);
extern char D_0044BC38[];
extern char D_0044BF40[];
extern char D_0044C000[];
extern char D_0044C010[];
extern char D_0044C020[];
extern char D_0044C030[];
extern char D_0044DD18[];

void *func_00146868(void *arg0) {
    char key[0x20];
    char writer[0x10];
    void *obj;
    void *p;
    s32 v;

    obj = D_002AD408(0x24);
    func_001D4040(key, D_0044BF40);
    v = *(s32 *)key;
    p = (char *)obj + 0x14;
    *(void **)((char *)obj + 0x10) = D_0044DD18;
    *(s32 *)((char *)obj + 8) = 0;
    *(s32 *)((char *)obj + 0xC) = 0;
    *(s32 *)((char *)obj + 4) = 0;
    *(s32 *)obj = 0;
    *(s32 *)((char *)obj + 0x14) = 0;
    *(s32 *)((char *)p + 4) = 0;
    *(s32 *)((char *)p + 8) = 0;
    *(s32 *)((char *)obj + 0x20) = v;
    func_001E2460(writer, obj);
    func_001E2C78(writer, D_0044BC38, *(s32 *)((char *)arg0 + 0xC));
    func_001E2C08(writer, D_0044C000, *(f32 *)((char *)arg0 + 0x80));
    func_001E2C08(writer, D_0044C010, *(f32 *)((char *)arg0 + 0x7C));
    func_001E2C08(writer, D_0044C020, *(f32 *)((char *)arg0 + 0x84));
    func_001E2C08(writer, D_0044C030, *(f32 *)((char *)arg0 + 0x88));
    return obj;
}
