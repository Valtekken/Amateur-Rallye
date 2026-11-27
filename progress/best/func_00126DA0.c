extern s32 func_00126828(void *, s32);
extern void func_001D1AD8(void *);
extern void func_001D4040(void *, void *);
extern void *func_001DF720(void *, s32, s32);
extern void func_001E3918(s32, s32);
extern s32 func_001E4280(void);
extern void func_001E4338(s32, s32);
extern void func_001E4428(void *, s32);
extern s32 func_001E6050(s32 *, s32, void *, s32);
extern void func_002B2028(s32);
extern s32 func_002B2360(s32, s32, s32);
extern s32 func_002B29D8(s32, s32, s32, s32 *, s32);
extern s32 func_002B4740(void);
extern void func_003F9698(void *, ...);

extern u8 D_00447808[];
extern u8 D_004488B0[];
extern u8 D_004488C0[];
extern u8 D_004488E0[];
extern u8 D_00448910[];
extern u8 D_00448958[];
extern u8 D_00448990[];
extern u8 D_004489D8[];
extern u8 D_00448A18[];

typedef struct {
    u8 pad0[0x14];
    s32 unk14;   /* 0x14 */
    u8 pad18[0x8];
    s32 unk20;   /* 0x20 */
    u8 pad24[0x78 - 0x24];
    s32 unk78[13]; /* 0x78 */
    u8 padAC0;     /* placeholder */
    s32 unkAC[13]; /* 0xAC */
} S_func_00126DA0_arg0;

typedef struct {
    s32 unk0;
    u8 pad4[0xC];
    void *unk10;
} Obj;

void func_00126DA0(S_func_00126DA0_arg0 *arg0) {
    s32 sp80;
    char sp64[0x10];
    char sp[0x40];
    char sp90[0x10];
    char spA0[0x10];
    s32 i;
    s32 *arr78 = arg0->unk78;
    s32 *arrAC = arg0->unkAC;
    s32 j;

    /* unk78 array at +0x78, unkAC at +0xAC: 13 entries each */
    for (i = 12; i >= 0; i--) {
        arr78[i] = 0;
        arrAC[i] = 0;
    }

    arg0->unk14 = func_00126828((void *)arg0, func_002B29D8(func_002B4740(), 0, 0, arr78, 0));
    arg0->unk20 = 1;
    func_003F9698(D_004488B0, func_002B2360(func_002B4740(), 0, 0));
    for (j = 0; j < 13; j++) {
        func_003F9698(D_004488C0, j, arr78[j]);
    }

    func_001D1AD8(sp64);
    sp80 = 0;
    func_003F9698(D_004488E0);

    {
        Obj *obj = (Obj *)func_001DF720(sp, arg0->unk78[0], arg0->unkAC[0]);
        s32 res;
        if (obj != NULL) {
            func_003F9698(D_00448958);
            func_001D4040(sp90, D_00447808);
            res = func_001E6050(&sp80, obj->unk0, sp90, 1);
            if (res == 0) {
                func_003F9698(D_00448990);
            } else {
                func_003F9698(D_004489D8);
                func_001E3918(func_001E4280(), res);
                func_001E4338(res, 3);
            }
            {
                void **vt = *(void ***)((u8 *)obj + 0x10);
                ((void (*)(void *, s32))*(void **)((u8 *)vt + 0xC))((u8 *)obj + *(s16 *)((u8 *)vt + 0x8), 3);
            }
        } else {
            func_003F9698(D_00448910);
        }
        func_003F9698(D_00448A18);
    }

    {
        Obj *obj = (Obj *)func_001DF720(sp, *(s32 *)((u8 *)arg0 + 0x7C), *(s32 *)((u8 *)arg0 + 0xB0));
        s32 res;
        if (obj == NULL) {
            func_003F9698(D_00448910);
        } else {
            func_003F9698(D_00448958);
            func_001D4040(sp90, D_00447808);
            res = func_001E6050(&sp80, obj->unk0, sp90, 1);
            if (res == 0) {
                func_003F9698(D_00448990);
            } else {
                func_001E4428(spA0, res);
                func_003F9698(D_004489D8);
                func_001E3918(func_001E4280(), res);
                func_001E4338(res, 3);
            }
            {
                void **vt = *(void ***)((u8 *)obj + 0x10);
                ((void (*)(void *, s32))*(void **)((u8 *)vt + 0xC))((u8 *)obj + *(s16 *)((u8 *)vt + 0x8), 3);
            }
        }
    }

    for (i = 12; i >= 0; i--) {
        func_002B2028(arr78[i]);
    }
}
