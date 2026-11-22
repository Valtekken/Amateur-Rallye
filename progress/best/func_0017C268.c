void func_0017C268(void *arg0, void *arg1) {
    f32 f3 = *(f32*)((char*)arg0 + 0x58);
    void *v0 = *(void**)((char*)arg0 + 0x18);
    f32 f9 = *(f32*)((char*)arg0 + 0xEC);
    f32 f10 = *(f32*)((char*)arg0 + 0xF0);
    void *v1 = *(void**)((char*)v0 + 0xC);
    void *v2 = *(void**)((char*)v1 + 0x4);
    void *v3 = (char*)v2 + 0xE0;
    f32 f4 = *(f32*)((char*)arg1 + 0xF0);
    f32 f1 = *(f32*)((char*)arg1 + 0xEC);
    f32 f2 = *(f32*)((char*)arg1 + 0x58);
    f32 f5 = *(f32*)((char*)v2 + 0x1C);
    
    f32 f0 = -f3;
    f32 f1_2, f7, f8;
    f32 f0_2, f1_3;
    f32 f2_2, f6;
    f32 f1_4, f5_3;
    f32 f4_2, f3_2;
    f32 f0_3, f2_3, f1_6, f3_3, f4_3;
    
    if (!(f9 < f0)) goto L_2B8;
    
    f0 = -f2;
    if (f1 < f0) {
        f0 = 0.0f;
        goto L_36C;
    }
    f0 = -f3;
    
L_2B8:
    if (f0 <= f9) goto L_2E0;
    
    f0 = -f2;
    if (!(f0 <= f1)) goto L_338;
    
    f1_2 = *(f32*)((char*)arg0 + 0x6C);
    f7 = f9 - f1_2;
    
L_2E0:
    f0_2 = *(f32*)((char*)arg0 + 0x68);
    f1_3 = *(f32*)((char*)arg0 + 0x6C);
    f8 = f10 - f4;
    
    f2_2 = *(f32*)((char*)arg0 + 0x28);
    f6 = *(f32*)((char*)v3 + 0x4);
    
    f1_4 = *(f32*)((char*)arg0 + 0x70);
    f5_3 = *(f32*)((char*)arg0 + 0x74);
    f4_2 = *(f32*)((char*)arg0 + 0x78);
    f3_2 = *(f32*)((char*)arg0 + 0x7C);
    
    f0_2 = f0_2 * f1_3;
    f2_2 = f2_2 * f5;
    f0_2 = f0_2 * f9;
    f2_2 = f2_2 * f6;
    f1_4 = f1_4 * f5_3;
    f1_4 = f1_4 * f10;
    f4_2 = f4_2 * f7;
    f3_2 = f3_2 * f8;
    
    f0_2 = f0_2 + f2_2;
    f0_2 = f0_2 + f1_4;
    f0_2 = f0_2 + f4_2;
    f0_2 = f0_2 + f3_2;
    
    f0 = f0_2;
    goto L_36C;
    
L_338:
    f0_3 = *(f32*)((char*)arg0 + 0x68);
    f2_3 = *(f32*)((char*)arg0 + 0x28);
    f1_6 = *(f32*)((char*)arg0 + 0x70);
    f3_3 = *(f32*)((char*)arg0 + 0x74);
    f4_3 = *(f32*)((char*)v3 + 0x4);
    
    f0_3 = f0_3 * f1;
    f2_3 = f2_3 * f5;
    f0_3 = f0_3 * f9;
    f2_3 = f2_3 * f4_3;
    f1_6 = f1_6 * f3_3;
    f1_6 = f1_6 * f10;
    f0_3 = f0_3 + f2_3;
    f0_3 = f0_3 + f1_6;
    
    f0 = f0_3;
    
L_36C:
    *(f32*)((char*)arg0 + 0x94) = f0;
}
