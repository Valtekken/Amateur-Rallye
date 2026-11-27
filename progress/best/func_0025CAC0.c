extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern void *func_00152D28(s32 arg);
extern void func_003F93CC(void *dst, void *src, s32 size);
extern void func_0025D988(void *arg0, s32 arg1);
extern void func_0025DD60(void *arg0, void *arg1);
extern void func_0025CA30(void *arg0);
extern void func_002B2028(void *arg);

extern struct { s32 unk_m4; s32 unk_0; } D_0040E618;

typedef struct {
    f32 *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    s32 unk8C;
    s32 unk90;
    s32 unk94;
    f32 unk98;
    f32 unk9C;
    void *unkA0;
    s32 unkA4;
} MyStruct;

void func_0025CAC0(MyStruct *arg0) {
    volatile void *sp0 = NULL;
    volatile s32 sp4 = 0;
    volatile s32 sp8 = 0;
    void *var_18 = NULL;
    s32 var_22 = 0;
    s32 var_5 = 0;
    s32 temp_19;
    s32 temp_16;
    s32 temp_3;
    s32 temp_6;
    s32 temp_16_2;
    MyStruct *temp_21 = (MyStruct *)((u8 *)arg0 + 0xA0);
    f32 *temp_2_3;
    f32 *temp_3_2;
    s32 var_5_2;
    volatile s32 pad1, pad2, pad3, pad4, pad5, pad6, pad7, pad8;

    temp_19 = ((s32)temp_21->unkA4 - (s32)arg0->unkA0) >> 2;
    sp8 = 0;
    
    if (temp_19 != 0) {
        temp_16 = temp_19 * 4;
        if (temp_16 != 0) {
            var_18 = func_002B1FC0(temp_16);
            if (var_18 == NULL) {
                var_18 = func_003D2910(temp_16);
            }
        } else if (D_0040E618.unk_0 != NULL) {
            var_18 = D_0040E618.unk_0;
            D_0040E618.unk_0 = *(void **)D_0040E618.unk_0;
        } else {
            var_18 = func_00152D28(0);
        }
    } else {
        var_18 = NULL;
    }
    
    sp0 = var_18;
    sp4 = (s32)var_18;
    sp8 = (s32)var_18 + temp_19 * 4;
    
    temp_16_2 = (s32)temp_21->unkA4 - (s32)arg0->unkA0;
    func_003F93CC(var_18, arg0->unkA0, (temp_16_2 >> 2) * 4);
    
    var_5 = 0;
    sp4 = (s32)var_18 + temp_16_2;
    
    if (temp_19 > 0) {
        do {
            temp_3 = var_5 * 4;
            var_5++;
            temp_2_3 = arg0->unk0 + temp_3;
            *temp_2_3 = -*temp_2_3;
        } while (var_5 < temp_19);
    }
    
    func_0025D988(arg0, var_5);
    
    if (((s32)temp_21->unkA4 - (s32)arg0->unkA0) >> 2) {
loop_15:
        temp_6 = (s32)temp_21->unkA4;
        temp_3 = ((((s32)temp_6 - (s32)arg0->unkA0) >> 2) * 4) + (s32)arg0->unkA0 - 4;
        temp_16_2 = temp_3 + 4;
        
        if (temp_16_2 != temp_6) {
            func_003F93CC((void *)temp_3, (void *)temp_16_2, ((s32)(temp_6 - temp_16_2) >> 2) * 4);
        }
        
        temp_21->unkA4 = (void *)((s32)temp_21->unkA4 - 4);
        func_0025DD60(arg0, (void *)((u8 *)arg0 + 0x98));
        func_0025CA30(arg0);
        func_0025DD60(arg0, (void *)((u8 *)arg0 + 0x9C));
        
        if (!((*(f32 *)((u8 *)arg0 + 0x9C) / *(f32 *)((u8 *)arg0 + 0x98)) > 1.01f)) {
            var_22 = 1;
        } else {
            var_5_2 = 0;
            if (((s32)temp_21->unkA4 - (s32)arg0->unkA0) >> 2) {
loop_22:
                temp_3 = var_5_2 * 4;
                var_5_2++;
                temp_3_2 = arg0->unk0 + temp_3;
                *temp_3_2 = -*temp_3_2;
                if (var_5_2 < (u32)(((s32)temp_21->unkA4 - (s32)arg0->unkA0) >> 2)) {
                    goto loop_22;
                }
            }
            func_0025D988(arg0, var_5_2);
        }
        
        if (var_22 == 0) {
            if ((((s32)temp_21->unkA4 - (s32)arg0->unkA0) >> 2) == 0) {
                // empty
            } else {
                goto loop_15;
            }
        }
    }
    
    temp_16 = ((s32)sp8 - (s32)sp0) >> 2;
    if (temp_16 != 0) {
        if (temp_16 * 4 != 0) {
            func_002B2028(sp0);
            return;
        }
        *(void **)sp0 = D_0040E618.unk_0;
        D_0040E618.unk_0 = sp0;
    }
}
