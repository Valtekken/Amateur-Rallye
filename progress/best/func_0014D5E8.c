/* func_0014D5E8: with volatile stack adjustment */
extern f32 func_003F3978(f32, u32);
extern s32 func_003FA9B8(s32);

void func_0014D5E8(void *arg0, void *arg1) {
    s32 *p0 = (s32 *)arg0;
    s32 *p1 = (s32 *)arg1;
    
    if (p1 == NULL || p1[0xC] == 0) {
        return;
    }
    
    if (p0[0xC] > 0x32) {
        return;
    }
    
    f32 sp4 = (f32)p0[0xC] / 50.0f;
    f32 temp_f0 = func_003F3978(1.0f - sp4, 0x3FC00000) * 900.0f;
    f32 temp_f22 = temp_f0 / (f32)func_003FA9B8(p1[0xD] - 1);
    f32 temp_f23 = temp_f0 * 0.5f;
    
    s32 var_18 = 0;
    s32 temp_19 = func_003FA9B8(p0[0xD]);
    
    for (;;) {
        if (var_18 >= temp_19) break;
        
        f32 temp_f0_3 = (f32)*((s32 *)((char *)p0 + 0x44) + var_18);
        f32 temp_f1_2 = temp_f22 * (f32)var_18;
        void *sp10 = (void *)p0[0x8 + var_18];
        var_18 += 1;
        
        f32 sp20 = (temp_f0_3 + temp_f1_2) - temp_f23;
        
        s32 sp24 = 0;
        s32 sp28 = 0;
        /* Force stack usage with volatile */
        volatile s32 v_sp24 = sp24;
        volatile s32 v_sp28 = sp28;
        
        /* func_002063A0(temp_17, &sp20) */
        /* use the volatile vars in a computation */
        s32 result = v_sp24 + v_sp28;
        (void)result;
        
        /* arg0->unk4C += 1 */
        p0[0xC] += 1;
    }
}
