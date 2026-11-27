typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
} Struct_28;

typedef struct {
    u32 pad0[7];       // 0x00-0x1B
    s32 unk1C;         // 0x1C
    s32 unk20;         // 0x20
    u32 pad1;          // 0x24
    s32 unk28;         // 0x28
    Struct_28 *unk2C;  // 0x2C
} MainStruct;

void func_0022F728(MainStruct *main) {
    union {
        struct {
            f32 sp0, sp4, sp8;
            s32 spC;
        };
        u64 pad[2];
    } local;
    s32 var_18 = 0;
    s32 var_19 = 0;
    s32 loop_count;
    s32 temp_17;
    Struct_28 *temp_4;

    loop_count = (s32)(((u32)main->unk20 - (u32)main->unk1C) * 0xEEEEEEEFu) >> 2;
    
    if (loop_count <= 0) {
        return;
    }

    do {
        temp_17 = main->unk1C + var_19 * 0x3C;
        
        // First item at offset 0x18
        func_00233040(&local.sp0, temp_17 + 0x18);
        if (func_0022F920(main, &local.sp0)) {
            local.spC = var_18;
            temp_4 = (Struct_28 *)((u8 *)main + 0x28);
            if (temp_4->unk4 != temp_4->unk8) {
                void *ptr = temp_4->unk4;
                if (ptr != NULL) {
                    *(f32 *)ptr = local.sp0;
                    *(f32 *)((u8 *)ptr + 0x4) = local.sp4;
                    *(f32 *)((u8 *)ptr + 0x8) = local.sp8;
                    *(s32 *)((u8 *)ptr + 0xC) = local.spC;
                }
                temp_4->unk4 = (void *)((u8 *)temp_4->unk4 + 0x10);
            } else {
                func_00272630(temp_4, temp_4->unk4, &local.sp0);
            }
            func_00231928(temp_17, main->unk28 + var_18 * 0x10);
            var_18++;
        } else {
            func_00231928(temp_17, func_0022FA48(main, &local.sp0));
        }
        
        func_00233068(&local.sp0, 2);
        
        // Second item at offset 0x24
        func_00233040(&local.sp0, temp_17 + 0x24);
        if (func_0022F920(main, &local.sp0)) {
            local.spC = var_18;
            temp_4 = (Struct_28 *)((u8 *)main + 0x28);
            if (temp_4->unk4 != temp_4->unk8) {
                void *ptr = temp_4->unk4;
                if (ptr != NULL) {
                    *(f32 *)ptr = local.sp0;
                    *(f32 *)((u8 *)ptr + 0x4) = local.sp4;
                    *(f32 *)((u8 *)ptr + 0x8) = local.sp8;
                    *(s32 *)((u8 *)ptr + 0xC) = local.spC;
                }
                temp_4->unk4 = (void *)((u8 *)temp_4->unk4 + 0x10);
            } else {
                func_00272630(temp_4, temp_4->unk4, &local.sp0);
            }
            func_00231928(temp_17, main->unk28 + var_18 * 0x10);
            var_18++;
        } else {
            func_00231928(temp_17, func_0022FA48(main, &local.sp0));
        }
        
        func_00233068(&local.sp0, 2);
        
        var_19++;
    } while (var_19 < loop_count);
}
