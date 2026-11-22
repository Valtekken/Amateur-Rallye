extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern void D_0044DD18;
extern char D_0047B728[];
extern char D_0047B740[];
extern char D_0047B750[];
extern char D_0047B760[];
extern char D_0047B768[];

void *func_002910E8(void *arg0) {
    s32 sp0;
    s32 pad1;
    s32 pad2;
    s32 pad3;
    s32 pad4;
    s32 pad5;
    s32 pad6;
    s32 pad7;
    s32 pad8;
    char buf[0x20];
    void *obj;
    s32 v;
    s32 *p14;
    s32 *p_obj;

    obj = D_002AD408(0x24);
    func_001D4040(&sp0, D_0047B728);
    v = sp0;
    p14 = (s32 *)((u8 *)obj + 0x14);
    p_obj = (s32 *)obj;
    
    p_obj[2] = 0;
    *(void **)((u8 *)p_obj + 0x10) = &D_0044DD18;
    p_obj[3] = 0;
    p_obj[1] = 0;
    p_obj[0] = 0;
    p14[0] = 0;
    p14[2] = 0;
    p14[1] = 0;
    p_obj[8] = v;
    func_001E2460(buf, obj, v);
    func_001E2C08(buf, D_0047B740, *(f32 *)((u8 *)arg0 + 0xC));
    func_001E2C08(buf, D_0047B750, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(buf, D_0047B760, *(f32 *)((u8 *)arg0 + 0x20));
    func_001E2C08(buf, D_0047B768, *(f32 *)((u8 *)arg0 + 0x48));
    return obj;
}
