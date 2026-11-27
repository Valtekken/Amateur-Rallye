extern void func_002C6528(void *, void *, s32, void *);
extern void **func_002DDA20(void *);
extern void *func_00303038(void *, void *);
extern s32 func_002E3630(s32, void *);

typedef struct { u8 *f0; u8 *f4; u8 *f8; } Vec8;
typedef struct { s32 unk0; s32 unk4; } El8;

typedef struct {
    /* 0x00 */ u8 pad0[0x14];
    /* 0x14 */ Vec8 vec;
    /* 0x20 */ s32 unk20;
} Arg17;

s32 func_002E4158(s32 arg0, void *arg1)
{
    s32 sp0;
    s32 sp4;
    void *var_3 = NULL;
    s32 temp_5;
    Arg17 *temp_17;
    void *temp_2;
    Vec8 *temp_4;
    u8 *a4;
    u32 temp_6;
    u8 *temp_5_2;
    s32 temp_2_2;
    u8 *temp_3;
    u32 var_3_2;
    El8 *temp_16;
    s32 var_2;

    temp_17 = *(Arg17 **)func_002DDA20(arg0);
    temp_2 = *(void **)((u8 *)arg1 + 0x50);
    temp_5 = *(s32 *)((u8 *)temp_2 + 0xC);
    a4 = (u8 *)temp_2 + 0xC;
    if (temp_5 != 0) {
        temp_4 = &temp_17->vec;
        temp_2_2 = (s32)(temp_4->f4 - temp_4->f0) >> 3;
        if (temp_5 >= temp_2_2) {
            sp0 = 0;
            sp4 = 0;
            temp_6 = (u32)(temp_5 + 0x20) & ~0x1F;
            temp_5_2 = temp_4->f4;
            temp_2_2 = (s32)(temp_5_2 - temp_4->f0) >> 3;
            if (temp_6 < (u32)temp_2_2) {
                temp_3 = (temp_6 << 3) + temp_4->f0;
                if (temp_3 < temp_5_2) {
                    var_3_2 = (u32)(temp_3 + 8);
                    do {
                        var_3_2 += 8;
                    } while (var_3_2 < (u32)temp_5_2);
                }
                temp_4->f4 = temp_5_2 - (temp_5_2 - temp_3);
            } else {
                func_002C6528(temp_4, temp_5_2, (s32)temp_6 - temp_2_2, &sp0);
            }
        }
        temp_16 = (El8 *)(temp_4->f0 + (temp_5 << 3));
        if (temp_16->unk4 != temp_17->unk20) {
            temp_16->unk0 = (s32)func_00303038(temp_17, a4);
            temp_16->unk4 = temp_17->unk20;
        }
        var_3 = (void *)temp_16->unk0;
    }
    var_2 = 0;
    if (var_3 != NULL) {
        if (*(s32 *)((u8 *)var_3 + 0x34) != 0) {
            return func_002E3630(arg0, arg1);
        }
    }
    return var_2;
}
