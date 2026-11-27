extern void *D_002AD408(s32);
extern void D_002AD390(s32);
extern s32 func_0011DA70(void *, s32);
extern s32 func_00297500(void);
extern void func_00297398(s32, s32);
extern void **func_0017E620(void);
extern void func_001D2458(void *, s32);
extern void func_001D2488(s32, void *);
extern void func_001535C8(void *, s32, void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E4040(s32, void *, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_0013DE48(void *);
extern void func_001E3D10(s32, void *, s32);
extern char D_0044B368[];
extern char D_0044B3A0[];
extern char D_004457E0[];

void func_0013D9F8(u8 *arg0)
{
    u8 *temp_2;
    s32 sp;
    s32 temp_16;

    *(s32 *)(arg0 + 0xC) = func_0011DA70(D_002AD408(0x10), 7);
    func_00297398(func_00297500(), 1);

    temp_2 = (u8 *)D_002AD408(0xC);
    *(s32 *)(temp_2 + 0x0) = 0;
    *(s32 *)(temp_2 + 0x4) = 0;
    *(s32 *)(temp_2 + 0x8) = 0;

    /* block 1: K=0xD */
    {
        void **obj = func_0017E620();
        void *vt = *obj;
        s32 (*fn)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))((u8 *)vt + 0x2C);
        s16 offset = *(s16 *)((u8 *)vt + 0x28);
        func_001D2458(&sp, fn((u8 *)obj + offset, 7, 0xD));
        if (*(s32 *)(temp_2 + 4) != *(s32 *)(temp_2 + 8)) {
            if (*(s32 *)(temp_2 + 4) != 0) {
                func_001D2488(*(s32 *)(temp_2 + 4), &sp);
            }
            *(s32 *)(temp_2 + 4) = *(s32 *)(temp_2 + 4) + 4;
        } else {
            func_001535C8(temp_2, *(s32 *)(temp_2 + 4), &sp);
        }
        D_002AD390(sp);
    }

    /* block 2: K=1 */
    {
        void **obj = func_0017E620();
        void *vt = *obj;
        s32 (*fn)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))((u8 *)vt + 0x2C);
        s16 offset = *(s16 *)((u8 *)vt + 0x28);
        func_001D2458(&sp, fn((u8 *)obj + offset, 7, 1));
        if (*(s32 *)(temp_2 + 4) != *(s32 *)(temp_2 + 8)) {
            if (*(s32 *)(temp_2 + 4) != 0) {
                func_001D2488(*(s32 *)(temp_2 + 4), &sp);
            }
            *(s32 *)(temp_2 + 4) = *(s32 *)(temp_2 + 4) + 4;
        } else {
            func_001535C8(temp_2, *(s32 *)(temp_2 + 4), &sp);
        }
        D_002AD390(sp);
    }

    /* block 3: K=2 */
    {
        void **obj = func_0017E620();
        void *vt = *obj;
        s32 (*fn)(void *, s32, s32) = *(s32 (**)(void *, s32, s32))((u8 *)vt + 0x2C);
        s16 offset = *(s16 *)((u8 *)vt + 0x28);
        func_001D2458(&sp, fn((u8 *)obj + offset, 7, 2));
        if (*(s32 *)(temp_2 + 4) != *(s32 *)(temp_2 + 8)) {
            if (*(s32 *)(temp_2 + 4) != 0) {
                func_001D2488(*(s32 *)(temp_2 + 4), &sp);
            }
            *(s32 *)(temp_2 + 4) = *(s32 *)(temp_2 + 4) + 4;
        } else {
            func_001535C8(temp_2, *(s32 *)(temp_2 + 4), &sp);
        }
        D_002AD390(sp);
    }

    temp_16 = func_001E4280();
    func_001D4040(&sp, D_0044B368);
    func_001E4040(temp_16, &sp, temp_2);

    temp_16 = func_001E4280();
    func_001D4040(&sp, D_0044B3A0);
    func_001E3EC0(temp_16, &sp, 1);

    func_0013DE48(arg0);

    temp_16 = func_001E4280();
    func_001D4040(&sp, D_004457E0);
    func_001E3D10(temp_16, &sp, 1);
}
