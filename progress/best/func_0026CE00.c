void func_0026CE00(void **arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    s32 var_9 = arg1;
    s32 var_12 = (var_9 - 1) >> 1;
    
    if (arg2 < var_9) {
        void *temp_14 = (u8 *)arg4 + 0xC0;
        
    loop_2:
        s32 temp_2_2 = var_12 * 4;
        void *temp_3 = *(void **)((u8 *)arg3 + 0x50);
        f32 temp_f1 = *(f32 *)((u8 *)arg4 + 0xC0);
        void *temp_5 = (u8 *)temp_3 + 0x50;
        void *temp_4 = *(void **)((u8 *)arg0 + temp_2_2);
        s32 var_15 = 0;
        void *temp_2_3 = *(void **)((u8 *)temp_4 + 0x50);
        f32 temp_f2 = *(f32 *)((u8 *)temp_14 + 4);
        f32 temp_f5 = temp_f1 - *(f32 *)((u8 *)temp_3 + 0x50);
        void *temp_3_2 = (u8 *)temp_2_3 + 0x50;
        f32 temp_f1_2 = temp_f1 - *(f32 *)((u8 *)temp_2_3 + 0x50);
        f32 temp_f4 = temp_f2 - *(f32 *)((u8 *)temp_3_2 + 4);
        f32 temp_f2_2 = temp_f2 - *(f32 *)((u8 *)temp_5 + 4);
        f32 temp_f0 = *(f32 *)((u8 *)temp_14 + 8);
        s8 temp_10 = *(s8 *)((u8 *)temp_4 + 0x48);
        f32 temp_f3 = temp_f0 - *(f32 *)((u8 *)temp_5 + 8);
        s8 temp_3_3 = *(s8 *)((u8 *)arg3 + 0x48);
        f32 temp_f0_2 = temp_f0 - *(f32 *)((u8 *)temp_3_2 + 8);
        
        if (temp_3_3 < temp_10) {
            var_15 = 1;
        } else if (temp_10 == temp_3_3) {
            f32 dist1 = temp_f5 * temp_f5 + temp_f2_2 * temp_f2_2 + temp_f3 * temp_f3;
            f32 dist2 = temp_f1_2 * temp_f1_2 + temp_f4 * temp_f4 + temp_f0_2 * temp_f0_2;
            if (dist1 < dist2) {
                var_15 = 1;
            }
        }
        
        s32 temp_4_2 = var_9 * 4;
        if (var_15 != 0) {
            var_9 = var_12;
            s32 temp_2_4 = var_9 - 1;
            *(void **)((u8 *)arg0 + temp_4_2) = *(void **)((u8 *)arg0 + temp_2_2);
            var_12 = (temp_2_4) >> 1;
            if (arg2 < var_9) {
                goto loop_2;
            }
        }
    }
    *(void **)((u8 *)arg0 + var_9 * 4) = arg3;
}
