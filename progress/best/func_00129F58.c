extern void func_001D1AD8(void *);
extern void func_001D4040(void *, const char *);
extern void *func_001DF720(void *, s32, s32);
extern void func_001E3918(s32, s32);
extern s32 func_001E4280(void);
extern void func_001E4338(s32, s32);
extern s32 func_001E6050(s32 *, s32, void *, s32);
extern void func_002B2028(s32);
extern s32 func_002B2360(s32, s32, s32);
extern void func_002B29D8(s32, s32, s32, s32 *, s32);
extern s32 func_002B4740(void);
extern void func_003F9698(const char *, ...);

extern char D_00447808[];
extern char D_004488B0[];
extern char D_004488C0[];
extern char D_004488E0[];
extern char D_00448910[];
extern char D_00448958[];
extern char D_00448990[];
extern char D_004489D8[];
extern char D_00448A18[];

void func_00129F58(u8 *arg0)
{
    s32 *temp_20 = (s32 *)(arg0 + 0x10);
    s32 sp80;
    u8 sp[0x10];
    u8 sp64[0x1C];
    u8 sp90[0x10];
    s32 sp0[4];
    s32 var_17;
    s32 *var_18;
    s32 *var_16;
    s32 temp_16;
    s32 temp_2_2;
    void *temp_2;
    void *temp_2_4;

    /* zero arg0+0x10[13] and arg0+0x44[13] */
    {
        s32 *p = temp_20;
        s32 *q = (s32 *)(arg0 + 0x44);
        var_17 = 0xC;
        do {
            p[0] = 0;
            var_17 -= 1;
            q[0] = 0;
            p += 1;
            q += 1;
        } while (var_17 >= 0);
    }

    func_002B29D8(func_002B4740(), *(s32 *)(arg0 + 0x80), 0, temp_20, 0);

    var_17 = 0;
    var_18 = temp_20;
    func_003F9698(D_004488B0, func_002B2360(func_002B4740(), *(s32 *)(arg0 + 0x80), 0));
    do {
        s32 temp_5 = var_17;
        var_17 += 1;
        func_003F9698(D_004488C0, temp_5, *var_18);
        var_18 += 1;
    } while (var_17 < 0xD);

    func_001D1AD8(sp64);
    sp80 = 0;
    func_003F9698(D_004488E0);

    temp_2 = func_001DF720(sp, *(s32 *)(arg0 + 0x10), *(s32 *)(arg0 + 0x44));
    if (temp_2 != NULL) {
        func_003F9698(D_00448958);
        temp_16 = *(s32 *)temp_2;
        func_001D4040(sp90, D_00447808);
        temp_2_2 = func_001E6050(&sp80, temp_16, sp90, 1);
        if (temp_2_2 == 0) {
            func_003F9698(D_00448990);
        } else {
            func_003F9698(D_004489D8);
            func_001E3918(func_001E4280(), temp_2_2);
            func_001E4338(temp_2_2, 3);
        }
        if (temp_2 != NULL) {
            u8 *t = *(u8 **)((u8 *)temp_2 + 0x10);
            s16 off = *(s16 *)(t + 0x8);
            void (*fn)(void *, s32) = *(void (**)(void *, s32))(t + 0xC);
            fn((u8 *)temp_2 + off, 3);
        }
    } else {
        func_003F9698(D_00448910);
    }

    func_003F9698(D_00448A18);

    temp_2_4 = func_001DF720(sp, *(s32 *)(arg0 + 0x14), *(s32 *)(arg0 + 0x48));
    if (temp_2_4 == NULL) {
        func_003F9698(D_00448910);
    } else {
        func_003F9698(D_00448958);
        temp_16 = *(s32 *)temp_2_4;
        func_001D4040(sp90, D_00447808);
        temp_2_2 = func_001E6050(&sp80, temp_16, sp90, 1);
        if (temp_2_2 == 0) {
            func_003F9698(D_00448990);
        } else {
            func_003F9698(D_004489D8);
            func_001E3918(func_001E4280(), temp_2_2);
            func_001E4338(temp_2_2, 3);
        }
        if (temp_2_4 != NULL) {
            u8 *t = *(u8 **)((u8 *)temp_2_4 + 0x10);
            s16 off = *(s16 *)(t + 0x8);
            void (*fn)(void *, s32) = *(void (**)(void *, s32))(t + 0xC);
            fn((u8 *)temp_2_4 + off, 3);
        }
    }

    var_16 = temp_20;
    var_17 = 0xC;
    do {
        s32 temp_4 = *var_16;
        var_17 -= 1;
        var_16 += 1;
        func_002B2028(temp_4);
    } while (var_17 >= 0);
}
