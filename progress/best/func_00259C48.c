extern f32 D_00479C98;
extern f32 D_00479C9C;
extern void func_0023E888(void *, f32 *, f32 *, void *, void *, f32, f32);

void *func_00259C48(void *arg0, void *unused, void *arg2, f32 fparg0) {
    f32 sp[20];
    f32 *a3 = arg2;
    f32 *v0 = (f32 *)arg2 + 3;
    f32 *t0 = (f32 *)*(u32 *)((u8 *)arg2 + 0x4C);
    f32 *a1 = t0 + 0x11C / 4;
    f32 *s0 = arg0;
    
    f32 f13, f0, f10, f7;
    f32 f12, f5, f3;
    f32 f8, f9, f5_2;
    f32 f1, f4, f6, f2;
    f32 f0_3, f1_2, f2_2, f0_4;
    f32 f3_3, f4_2, f1_3;
    f32 f2_3, f0_5, f3_4;
    
    f13 = v0[0];
    f0 = t0[0x24 / 4];
    f10 = v0[2];
    f7 = v0[1];
    
    f12 = fparg0 * f0;
    f5 = f10 * f12;
    f3 = f13 * f12;
    f12 = f7 * f12;
    
    sp[5] = f5;
    sp[3] = f3;
    sp[4] = f12;
    
    f8 = t0[0x11C / 4] + f3;
    f9 = a1[1] + f12;
    f5_2 = a1[2] + f5;
    
    sp[0] = f8;
    sp[1] = f9;
    sp[2] = f5_2;
    
    f1 = f8 * f13 + f9 * f7 + f5_2 * f10;
    f4 = D_00479C98 * D_00479C9C;
    
    if (f1 < f4) {
        f0 = f10 * f1;
        f6 = a3[0x20 / 4];
        f2 = f13 * f1;
        f3 = f7 * f1;
        
        sp[5] = f0;
        sp[3] = f2;
        sp[4] = f3;
        sp[2] = f5_2 - f0;
        sp[0] = f8 - f2;
        sp[1] = f9 - f3;
        
        f0_3 = a3[0x20 / 4];
        f1_2 = f10 * f0_3;
        f2_2 = f13 * f0_3;
        f0_4 = f7 * f0_3;
        
        f3_3 = f1_2 * D_00479C9C;
        f4_2 = f2_2 * D_00479C9C;
        f1_3 = f0_4 * D_00479C9C;
        
        f2_3 = f3_3 * f7;
        f0_5 = f4_2 * f7;
        f3_4 = f1_3 * f7;
        
        sp[8] = f2_3;
        sp[6] = f0_5;
        sp[7] = f3_4;
        sp[11] = f3_3;
        sp[9] = f4_2;
        sp[10] = f1_3;
        sp[14] = f1_2;
        sp[12] = f2_2;
        sp[13] = f0_4;
        
        sp[5] = f2_3 * f6;
        sp[3] = f0_5 * f6;
        sp[4] = f3_4 * f6;
        
        func_0023E888(a3, &sp[3], &D_00479C98, a3, t0, f12, f13);
    }
    
    ((f32 *)s0)[0] = sp[0];
    ((f32 *)s0)[1] = sp[1];
    ((f32 *)s0)[2] = sp[2];
    return s0;
}
