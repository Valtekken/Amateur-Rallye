/* func_003DD130 - double to string conversion */
extern s64 func_002ABEC8(s64, s64);
extern s64 func_002ABF20(s64, s64);
extern s64 func_002ABF88(s64, s64);
extern s64 func_002AC230(s64, s64);
extern s32 func_002AC4B0(s64, s64);
extern s64 func_002AC500(s32, s32);
extern s32 func_002AC5B8(s64);
extern s8 *func_003DB098(void *);
extern s8 *func_003DB0C0(s32);
extern void func_003DB120(s8 *);
extern void func_003DB148(s8 *, s8 *);
extern s8 *func_003DB190(s8 *, s32);
extern s8 *func_003DB208(s8 *, s32, s32);
extern s32 func_003DB410(s32);
extern s8 *func_003DB558(s8 *, s32);
extern s8 *func_003DB590(s8 *, s8 *, s8 *);
extern s8 *func_003DB7C8(s8 *, s32);
extern s8 *func_003DB840(s8 *, s32);
extern s32 func_003DB9C0(s8 *, s8 *);
extern s8 *func_003DBA28(s8 *, s8 *, s8 *);
extern s8 *func_003DBD80(s8 *, s64, s32 *, s32 *);
extern s32 func_003DCF18(s8 *, s8 *);

extern s8 *D_0043A988;
extern s64 D_00489670;
extern s64 D_00489728;
extern s64 D_00489748;
extern s8 D_00489850[];
extern s8 D_00489860[];
extern s8 D_00489868[];
extern s64 D_00489870;
extern s64 D_00489878;
extern s64 D_00489880;
extern s32 D_0049D240;

s8 *func_003DD130(s64 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 *arg4, s8 **arg5) {
    s32 sp140;
    s32 sp144;
    u32 sp148 = arg1;
    s32 sp14C = arg2;
    s32 *sp150 = arg3;
    s8 **sp154 = arg5;
    s32 sp158;
    s32 sp15C;
    s32 sp160;
    s32 sp164;
    s32 sp168;
    s32 sp16C;
    s32 sp170;
    s32 sp174;
    s32 sp178;
    s32 sp17C;
    s32 sp180;
    s32 sp184;
    s8 *sp188;
    s8 *sp18C;
    s8 *sp190;
    s8 *sp194;
    s64 sp198;
    s8 *sp1A0;
    s32 sp1A4;
    s64 var_20 = arg0;
    s8 *var_21;
    s8 *var_2;
    s8 *var_23;
    s32 var_30;
    s32 var_22;
    s8 *var_17;
    s32 var_18;
    s32 var_19;
    s8 *var_16_ptr;
    s64 temp_2_3;
    s64 temp_16;
    s64 temp_2_4;
    s8 *temp_2;
    s8 *temp_2_2;
    u32 dummy_stack[120];  // Force stack frame ~0x250
    
    (void)dummy_stack;
    
    sp188 = func_003DB098((void*)&sp140);
    temp_2 = func_003DB098((void*)&sp140 + 0x40);
    sp190 = 0;
    temp_2_2 = func_003DB098((void*)&sp140 + 0x100);
    sp194 = 0;
    sp18C = temp_2_2;
    
    var_21 = D_0043A988;
    if (var_21 != 0) {
        *(u32*)(var_21 + 0xC) = 0;
        *(u32*)(var_21 + 0x4) = D_0049D240;
        *(u32*)(var_21 + 0x8) = (1 << D_0049D240);
    }
    
    if ((var_20 >> 32) >= 0) {
        *arg4 = 0;
    } else {
        *arg4 = 1;
        var_20 = (var_20 & 0xFFFF000000000000ULL) | (((var_20 >> 32) & 0x7FFFFFFF) << 32);
    }
    
    if (((var_20 >> 32) & 0x7FF00000) == 0x7FF00000) {
        *sp150 = 0x270F;
        if (((var_20 << 32) >> 32) == 0) {
            if (!((var_20 >> 32) & 0xFFFFF)) {
                var_21 = D_00489850;
                if (sp154 != 0) {
                    var_2 = D_00489850 + 8;
                    goto block_17;
                }
            } else {
                goto block_12;
            }
        } else {
block_12:
            var_21 = D_00489860;
            if (sp154 != 0) {
                *sp154 = D_00489860 + 3;
            }
        }
block_18:
        return var_21;
    }
    
    if (func_002AC4B0(var_20, 0) == 0) {
        *sp150 = 1;
        var_21 = D_00489868;
        if (sp154 != 0) {
            var_2 = D_00489868 + 1;
block_17:
            *sp154 = var_2;
        }
        return var_21;
    }
    
    var_19 = ((u64)var_20 >> 52) & 0x7FF;
    var_23 = func_003DBD80((void*)&sp140, var_20, &sp140, &sp144);
    
    if (var_19 != 0) {
        var_19 = var_19 - 0x3FF;
        sp184 = 0;
        sp198 = (var_20 & 0xFFFF000000000000ULL) | ((((var_20 >> 32) & 0xFFFFF) | 0x3FF00000) << 32);
    } else {
        var_30 = sp144 + sp140;
        var_19 = var_30 + 0x432;
        if (var_19 >= 0x21) {
            var_30 += 0x412;
            var_18 = ((var_20 >> 32) << -var_19) | ((u32)((var_20 << 32) >> 32) >> var_30);
        } else {
            var_18 = ((u32)((var_20 << 32) >> 32) << -var_19);
        }
        temp_2_3 = func_002AC500(var_18, var_30);
        sp198 = temp_2_3;
        if (var_18 < 0) {
            sp198 = func_002ABEC8(temp_2_3, (s64)0x83E0 << 47);
        }
        var_19 = var_19 - 0x433;
        sp184 = 1;
        sp198 = (sp198 & 0xFFFF000000000000ULL) | (((sp198 >> 32) + 0xFE100000) << 32);
    }
    
    temp_16 = func_002ABEC8(func_002ABF88(func_002ABF20(sp198, (s64)0xFFE0 << 46), D_00489870), D_00489878);
    temp_2_4 = func_002ABEC8(temp_16, func_002ABF88(func_002AC500(var_19, 0), D_00489880));
    var_22 = func_002AC5B8(temp_2_4);
    if (func_002AC4B0(temp_2_4, 0) < 0) {
        var_22 = (func_002AC4B0(temp_2_4, func_002AC500(var_22, 0)) != 0) ? (var_22 - 1) : var_22;
    }
    sp170 = 1;
    if ((u32)var_22 < 0x17) {
        sp170 = 0;
        var_22 = (func_002AC4B0(var_20, *(s64*)((var_22 * 8) + (u32)&D_00489670)) <= -1) ? (var_22 - 1) : var_22;
    }
    
    return 0;
}
