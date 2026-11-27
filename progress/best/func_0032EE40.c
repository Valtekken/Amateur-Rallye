typedef struct Vec2 { f32 x, y; } Vec2;
typedef struct Packed24 { s64 a, b, c; } __attribute__((packed)) Packed24;

typedef struct Packed24Vec {
    Packed24 *begin;   /* +0 */
    Packed24 *end;     /* +4 */
    Packed24 *cap;     /* +8 */
} Packed24Vec;

extern void func_002C51B8(void *, void *, void *);
extern void func_002C54D8(void *, void *, void *, void *, s32);
extern void func_001565D0(void *, void *, void *);

void func_0032EE40(void *arg0, Vec2 *arg1, Vec2 *arg2) {
    u8 *x = *(u8 **)((u8 *)arg0 + 0x468);
    s32 temp_2;
    s32 temp_2_2;
    Packed24Vec *temp_4;
    Packed24 *temp_5;
    u8 *temp_4_2;
    u8 *temp_7;
    u8 *temp_8;
    u8 *temp_4_4;
    u8 *temp_4_5;
    u8 *temp_4_6;
    u8 *temp_4_7;
    u8 *temp_5_2;
    u8 *temp_5_3;
    u8 *temp_5_4;
    u8 *temp_7_v;
    u8 *var_7;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_4_3;
    u32 temp_4_8;
    u32 var_3;
    u32 var_4;
    u8 *temp_16_2;

    /* ---- first capacity check on vector at +0x20 (Vec2) ---- */
    temp_2 = (s32)(*(u8 **)(x + 0x24) - *(u8 **)(x + 0x20)) >> 3;
    if (temp_2 >= *(s32 *)(x + 0x40)) {
        *(s32 *)(x + 0x3C) = temp_2;
        temp_4 = (Packed24Vec *)(x + 8);
        temp_5 = temp_4->end;
        if ((u8 *)temp_5 != (u8 *)temp_4->cap) {
            if (temp_5 != NULL) {
                *temp_5 = *(Packed24 *)(x + 0x2C);
            }
            temp_4->end = (Packed24 *)((u8 *)temp_4->end + 0x18);
        } else {
            func_002C51B8(temp_4, temp_5, x + 0x2C);
        }
        temp_4_2 = x + 0x14;
        func_002C54D8(temp_4_2, *(u8 **)(temp_4_2 + 4), *(u8 **)(x + 0x20), *(u8 **)(x + 0x24), 0);
    }

    /* ---- clear vector at +0x20 (reset end=begin) ---- */
    temp_7 = x + 0x20;
    temp_4_3 = *(u32 *)(temp_7 + 4);
    temp_3 = *(u32 *)(x + 0x20);
    temp_8 = x + 0x14;
    if (temp_3 < temp_4_3) {
        var_3 = temp_3 + 8;
        do {
            var_3 += 8;
        } while (var_3 < temp_4_3);
    }
    *(u32 *)(temp_7 + 4) = temp_4_3 - (temp_4_3 - temp_3);
    *(s32 *)(x + 0x34) = 1;
    *(s32 *)(x + 0x30) = *(s32 *)(x + 0x0);
    *(s32 *)(x + 0x40) = 2;
    *(s32 *)(x + 0x38) = (s32)(*(u8 **)(temp_8 + 4) - *(u8 **)(x + 0x14)) >> 3;
    *(f32 *)(x + 0x2C) = *(f32 *)(x + 0x4);

    /* ---- push arg1 into vector at +0x20 of arg0->unk468 ---- */
    temp_4_4 = *(u8 **)((u8 *)arg0 + 0x468) + 0x20;
    temp_5_2 = *(u8 **)(temp_4_4 + 4);
    if (temp_5_2 != *(u8 **)(temp_4_4 + 8)) {
        if (temp_5_2 != NULL) {
            *(f32 *)(temp_5_2 + 0) = arg1->x;
            *(f32 *)(temp_5_2 + 4) = arg1->y;
        }
        *(u8 **)(temp_4_4 + 4) = *(u8 **)(temp_4_4 + 4) + 8;
    } else {
        func_001565D0(temp_4_4, temp_5_2, arg1);
    }

    /* ---- push arg2 ---- */
    temp_4_5 = *(u8 **)((u8 *)arg0 + 0x468) + 0x20;
    temp_5_3 = *(u8 **)(temp_4_5 + 4);
    if (temp_5_3 != *(u8 **)(temp_4_5 + 8)) {
        if (temp_5_3 != NULL) {
            *(f32 *)(temp_5_3 + 0) = arg2->x;
            *(f32 *)(temp_5_3 + 4) = arg2->y;
        }
        *(u8 **)(temp_4_5 + 4) = *(u8 **)(temp_4_5 + 4) + 8;
    } else {
        func_001565D0(temp_4_5, temp_5_3, arg2);
    }

    /* ---- second capacity check on +0x20 vec (of arg0->unk468 reloaded) ---- */
    temp_16_2 = *(u8 **)((u8 *)arg0 + 0x468);
    temp_2_2 = (s32)(*(u8 **)(temp_16_2 + 0x24) - *(u8 **)(temp_16_2 + 0x20)) >> 3;
    var_7 = temp_16_2 + 0x20;
    if (temp_2_2 >= *(s32 *)(temp_16_2 + 0x40)) {
        *(s32 *)(temp_16_2 + 0x3C) = temp_2_2;
        temp_4_6 = temp_16_2 + 8;
        temp_5_4 = *(u8 **)(temp_4_6 + 4);
        if (temp_5_4 != *(u8 **)(temp_4_6 + 8)) {
            if (temp_5_4 != NULL) {
                *(Packed24 *)temp_5_4 = *(Packed24 *)(temp_16_2 + 0x2C);
            }
            *(u8 **)(temp_4_6 + 4) = *(u8 **)(temp_4_6 + 4) + 0x18;
        } else {
            func_002C51B8(temp_4_6, temp_5_4, temp_16_2 + 0x2C);
        }
        temp_4_7 = temp_16_2 + 0x14;
        func_002C54D8(temp_4_7, *(u8 **)(temp_4_7 + 4), *(u8 **)(temp_16_2 + 0x20), *(u8 **)(temp_16_2 + 0x24), 0);
        var_7 = temp_16_2 + 0x20;
    }

    /* ---- clear vector at +0x20 again ---- */
    temp_3_2 = *(u32 *)(var_7 + 4);
    temp_4_8 = *(u32 *)(temp_16_2 + 0x20);
    if (temp_4_8 < temp_3_2) {
        var_4 = temp_4_8 + 8;
        do {
            var_4 += 8;
        } while (var_4 < temp_3_2);
    }
    *(u32 *)(var_7 + 4) = temp_3_2 - (temp_3_2 - temp_4_8);
    (void)temp_7_v;
}
