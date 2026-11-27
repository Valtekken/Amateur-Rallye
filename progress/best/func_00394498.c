extern s32 D_002AD408(s32);
extern void func_003A33E8(void *, s32);
extern void func_003A3460(void *, s32);
extern s32 func_003A4568(void *);
extern void *func_003A4B60(s32);
extern s32 func_003A4C60(s32);
extern s32 func_003A6F18(void *, void *, s32);
extern s32 func_003AA438(void *, void *, s32);
extern s32 func_003AA4B8(void *);
extern void func_003AA508(void *, s32, s32);
extern void func_003AA580(void *, void *);
extern void func_003B6C98(void *);
extern void func_003B6CB0(void *, s32);
extern s32 func_003B6CD8(void *, void *);

extern char D_004879A8[];
extern char D_004879B0[];
extern char D_004879B8[];

void func_00394498(void *arg0)
{
    u8 sp[0xC0];
    u8 *sp20 = sp + 0x20;
    s32 sp10;
    void *sp14;
    u8 *a0 = (u8 *)arg0;

    func_003A3460(sp, func_003A4C60((s32)(a0 + 0xC)));

    if (func_003A6F18(sp, D_004879A8, 0) != 0xFFFFFFFF) {
        void *temp_2;
        u8 *obj;
        sp10 = func_003AA438(sp, D_004879B0, 0xFFFFFFFF);
        if (sp10 != 0xFFFFFFFF) {
            func_003AA508(sp, sp10, func_003AA4B8(sp) - sp10);
        }
        func_003AA580(sp, D_004879B8);
        temp_2 = func_003A4B60(D_002AD408(0x38));
        sp14 = temp_2;
        obj = temp_2;
        {
            u8 *vt = *(u8 **)(obj + 0x8);
            u8 *temp_18 = vt + 0x48;
            s16 off = *(s16 *)(temp_18 + 0x0);
            void *temp_21 = (u8 *)*(u8 **)(obj + 0x8) + off + 0; /* obj->unk8 + off */
            s32 (*fn1)(void *, s32, s32, s32) = *(s32 (**)(void *, s32, s32, s32))(temp_18 + 0x4);
            s32 r = func_003A4568(sp);
            temp_21 = (u8 *)obj + off;
            fn1(temp_21, r, 0, 1);
        }
        {
            u8 *vt = *(u8 **)(obj + 0x8);
            u8 *temp_19 = vt + 0x40;
            s16 off = *(s16 *)(temp_19 + 0x0);
            s32 (*fn2)(void *) = *(s32 (**)(void *))(temp_19 + 0x4);
            if (fn2((u8 *)obj + off) != 0) {
                s32 sp30;
                func_003B6C98(sp20);
                sp30 = func_003B6CD8(sp20, sp14);
                *(s32 *)(*(u8 **)(a0 + 0x4) + 0x30) = sp30;
                func_003B6CB0(sp20, 2);
            }
        }
        if (sp14 != NULL) {
            u8 *vt = *(u8 **)((u8 *)sp14 + 0x8);
            u8 *temp_20 = vt + 0x8;
            s16 off = *(s16 *)(temp_20 + 0x0);
            void (*fn3)(void *, s32) = *(void (**)(void *, s32))(temp_20 + 0x4);
            fn3((u8 *)sp14 + off, 3);
        }
    }
    func_003A33E8(sp, 2);
}
