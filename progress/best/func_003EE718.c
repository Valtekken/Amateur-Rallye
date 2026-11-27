extern void *func_001D6BB0(void);
extern void *func_00201350(void);
extern void *func_0021F4B0(void);
extern void func_0021FEF0(s32, s32, s32);

typedef void (*Fn0)(void *);
typedef void (*Fn1f)(void *, f32);
typedef void (*Fn1)(void *, void *);
typedef void (*Fn5)(void *, s32, s32, s32, s32, s32);

void func_003EE718(f32 fparg0) {
    s32 *var_21;
    s32 temp_18;
    s32 var_20;
    s32 var_22;
    u8 **temp_19;
    u8 *vt;
    s32 sp[16]; /* locals sp0x00..0x3C */
    u8 *temp_6;
    u8 *temp_3;

    var_22 = 2;
    if (*(s32 *)((u8 *)func_00201350() + 0x10) < 2) {
        var_22 = *(s32 *)((u8 *)func_00201350() + 0x10);
    }

    /* switch(var_22): case1, case2, default */
    if (var_22 == 1) {
        sp[0x20/4] = 0x280; sp[0x30/4] = 0x1E0; sp[0x0/4] = 0; sp[0x10/4] = 0;
    } else if (var_22 == 2) {
        sp[0x24/4] = 0x280; sp[0x34/4] = 0xF0; sp[0x0/4] = 0; sp[0x10/4] = 0;
        sp[0x20/4] = 0x280; sp[0x30/4] = 0xF0; sp[0x4/4] = 0; sp[0x14/4] = 0xF0;
    } else {
        sp[0x20/4] = 0x280; sp[0x30/4] = 0x1E0; sp[0x0/4] = 0; sp[0x10/4] = 0;
    }

    var_20 = 0;
    temp_19 = *(u8 ***)func_001D6BB0();

    vt = *temp_19;
    ((Fn1f)*(void **)(vt + 0x1C))((u8 *)temp_19 + *(s16 *)(vt + 0x18), fparg0);

    var_21 = (s32 *)sp;
    if (var_22 > 0) {
        do {
            s32 *vt;
            temp_18 = var_20 * 4;
            vt = (s32 *)*temp_19;
            ((Fn0)*(void **)((u8 *)vt + 0x2C))((u8 *)temp_19 + *(s16 *)((u8 *)vt + 0x28));

            {
                u8 *vt2 = *temp_19;
                s32 off = *(s16 *)(vt2 + 0x48);
                u8 *arg1 = (u8 *)func_00201350() + temp_18;
                ((Fn1)*(void **)(vt2 + 0x4C))((u8 *)temp_19 + off, (void *)*(s32 *)arg1);
            }

            temp_6 = (u8 *)sp + temp_18;
            temp_3 = *(u8 **)((u8 *)func_00201350() + temp_18);
            *(s32 *)(temp_3 + 0x84) = *(s32 *)(temp_6 + 0x10);
            *(s32 *)(temp_3 + 0x88) = *(s32 *)(temp_6 + 0x20);
            *(s32 *)(temp_3 + 0x8C) = *(s32 *)(temp_6 + 0x30);
            *(s32 *)(temp_3 + 0x80) = *var_21;
            var_21++;

            vt = (s32 *)*temp_19;
            ((Fn5)*(void **)((u8 *)vt + 0x24))((u8 *)temp_19 + *(s16 *)((u8 *)vt + 0x20),
                    (s32)temp_6, (s32)temp_6, *(s32 *)(temp_6 + 0x10), *(s32 *)(temp_6 + 0x20), *(s32 *)(temp_6 + 0x30));

            func_0021FEF0(*(s32 *)((u8 *)func_0021F4B0() + 0x20), var_20, 0);
            var_20++;

            vt = (s32 *)*temp_19;
            ((Fn0)*(void **)((u8 *)vt + 0x44))((u8 *)temp_19 + *(s16 *)((u8 *)vt + 0x40));
        } while (var_20 < var_22);
    }

    vt = *temp_19;
    ((Fn0)*(void **)(vt + 0x2C))((u8 *)temp_19 + *(s16 *)(vt + 0x28));

    {
        u8 *vt2 = *temp_19;
        s32 off = *(s16 *)(vt2 + 0x48);
        u8 *arg1 = (u8 *)func_00201350();
        ((Fn1)*(void **)(vt2 + 0x4C))((u8 *)temp_19 + off, (void *)*(s32 *)arg1);
    }

    temp_3 = *(u8 **)func_00201350();
    *(s32 *)(temp_3 + 0x8C) = 0x1E0;
    *(s32 *)(temp_3 + 0x88) = 0x280;
    *(s32 *)(temp_3 + 0x80) = 0;
    *(s32 *)(temp_3 + 0x84) = 0;

    vt = *temp_19;
    ((Fn0)*(void **)(vt + 0x24))((u8 *)temp_19 + *(s16 *)(vt + 0x20));

    vt = *temp_19;
    ((Fn0)*(void **)(vt + 0x3C))((u8 *)temp_19 + *(s16 *)(vt + 0x38));
}
