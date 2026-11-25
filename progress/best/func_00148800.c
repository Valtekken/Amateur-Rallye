extern const char D_0044C040[];
extern char D_0044CAC0[];
extern void func_001D4040(void *, const char *);
extern void func_0029B050(void *);

void *func_00148800(void *arg0)
{
    u32 k[4];
    func_001D4040(k, D_0044C040);

    u8 *p = (u8 *)arg0;
    s32 result = k[0];
    void *vtable = (void *)D_0044CAC0;
    s32 m1 = -1;

    *(s32 *)p = m1;
    *(s32 *)(p + 0x0C) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(s32 *)(p + 0x14) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x04) = result;
    *(void **)(p + 0x08) = vtable;

    func_0029B050(p + 0x1C);

    {
        u8 *p94 = p + 0x94;
        *(f32 *)p94 = 320.0f;
        *(f32 *)(p94 + 0x04) = 455.0f;
        *(s32 *)(p94 + 0x08) = 0;
    }
    {
        u8 *pA0 = p + 0xA0;
        *(f32 *)pA0 = 320.0f;
        *(f32 *)(pA0 + 0x04) = 480.0f;
        *(s32 *)(pA0 + 0x08) = 0;
    }
    {
        u8 *pAC = p + 0xAC;
        *(f32 *)pAC = 1.0f;
        *(f32 *)(pAC + 0x04) = 1.0f;
        *(f32 *)(pAC + 0x08) = 1.0f;
        *(s32 *)(pAC + 0x0C) = 0;
    }

    *(s32 *)(p + 0xBC) = m1;
    *(f32 *)(p + 0xCC) = 0.03333333f;
    *(s32 *)(p + 0xC4) = 0;
    *(s32 *)(p + 0xC8) = 0;
    *(s32 *)(p + 0xD0) = 0;
    *(s32 *)(p + 0x14) = 0;
    *(s32 *)(p + 0x18) = 0;

    return arg0;
}
