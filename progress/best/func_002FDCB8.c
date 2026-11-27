extern void func_002C6528(void *, void *, s32, void *);
extern void *func_00303038(void *, void *);

typedef struct { u8 *f0; u8 *f4; u8 *f8; } Vec8;
typedef struct { s32 unk0; s32 unk4; } El8;

typedef struct {
    /* 0x00 */ u8 pad0[0x14];
    /* 0x14 */ Vec8 vec;
    /* 0x20 */ s32 unk20;
} Arg0;

s32 func_002FDCB8(Arg0 *arg0, s32 *arg1)
{
    s32 sp0;
    s32 sp4;
    El8 *var_2 = NULL;
    s32 temp_3;
    Vec8 *temp_4;
    u8 *temp_7;
    u32 temp_6;
    u8 *temp_5;
    s32 temp_2;
    u8 *temp_3_2;
    u32 var_3_2;
    El8 *temp_16;
    s32 var_3;

    temp_3 = *arg1;
    if (temp_3 != 0) {
        temp_4 = &arg0->vec;
        temp_7 = temp_4->f0;
        temp_2 = (s32)(temp_4->f4 - temp_7) >> 3;
        if (temp_3 < temp_2) {
            goto skip;
        }
        sp0 = 0;
        sp4 = 0;
        temp_6 = (u32)(temp_3 + 0x20) & ~0x1F;
        temp_5 = temp_4->f4;
        temp_2 = (s32)(temp_5 - temp_7) >> 3;
        if (temp_6 < (u32)temp_2) {
            temp_3_2 = (temp_6 << 3) + temp_7;
            if (temp_3_2 < temp_5) {
                var_3_2 = (u32)(temp_3_2 + 8);
                do {
                    var_3_2 += 8;
                } while (var_3_2 < (u32)temp_5);
            }
            temp_4->f4 = temp_5 - (temp_5 - temp_3_2);
        } else {
            func_002C6528(temp_4, temp_5, (s32)temp_6 - temp_2, &sp0);
        }
    skip:
        temp_16 = (El8 *)(temp_4->f0 + (temp_3 << 3));
        if (temp_16->unk4 != arg0->unk20) {
            temp_16->unk0 = (s32)func_00303038(arg0, arg1);
            temp_16->unk4 = arg0->unk20;
        }
        var_2 = temp_16;
    }
    var_3 = 0;
    if (var_2 != NULL) {
        var_3 = *(s32 *)((u8 *)var_2->unk0 + 0x20);
    }
    return var_3;
}
