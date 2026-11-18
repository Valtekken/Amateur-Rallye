extern void func_001D4040(void *, const char *);
extern void *func_0017E620(void);
extern void func_001D2CD8(void *, void *);
extern char D_00446628[];
extern char D_0044D800[];
extern char D_00444E20[];
extern char D_0044DA70[];
extern void *D_002AD408(s32);
extern void *func_00297E40(void *);

void *func_0011B708(s32 *p)
{
    s32 k[4];
    func_001D4040(k, D_00446628);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D800;
    p[10] = 1;
    *(f32 *)((u8 *)p + 0x54) = 1.0f;
    p[11] = 0;
    p[13] = 0;
    p[17] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 1;
    p[9] = 1;
    p[12] = 0;
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    p[18] = 0;
    p[19] = 0;
    p[20] = 0;
    p[22] = 0;
    p[23] = 0;
    p[24] = 0;
    return p;
}

void *func_0011ADD8(void *arg0)
{
    s32 k[4];
    func_001D4040(k, D_00444E20);
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = k[0];
    *(s32 *)((u8 *)arg0 + 0x0) = -1;
    *(void **)((u8 *)arg0 + 0x8) = (void *)D_0044DA70;
    *(void **)((u8 *)arg0 + 0x10) = func_00297E40(D_002AD408(0x10));
    *(s32 *)((u8 *)arg0 + 0x14) = 1;
    return arg0;
}

void func_0011C648(void *arg0, s32 arg1)
{
    void **obj = (void **)func_0017E620();
    void *vt = *obj;
    void *(*fn)(void *, s32, s32) = *(void *(**)(void *, s32, s32))((u8 *)vt + 0x2C);
    s16 offset = *(s16 *)((u8 *)vt + 0x28);
    void *ret = fn((void *)((u8 *)obj + offset), arg1, 0);
    func_001D2CD8((u8 *)arg0 + 0x34, ret);
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
}

void func_0011C6A8(void *arg0, s32 arg1, s32 arg2)
{
    void **obj = (void **)func_0017E620();
    void *vt = *obj;
    void *(*fn)(void *, s32, s32) = *(void *(**)(void *, s32, s32))((u8 *)vt + 0x2C);
    s16 offset = *(s16 *)((u8 *)vt + 0x28);
    void *ret = fn((void *)((u8 *)obj + offset), arg1, arg2);
    func_001D2CD8((u8 *)arg0 + 0x34, ret);
    *(s32 *)((u8 *)arg0 + 0x30) = 1;
}
