typedef struct { float x, y, z; } Vec3f;

extern void func_00203358(void *arg0, void *arg1);

void func_0027C520(void *arg0, void *arg1) {
    Vec3f *v_bc = (Vec3f *)((u8 *)arg1 + 0xBC);
    Vec3f *v_94 = (Vec3f *)((u8 *)arg1 + 0x94);
    
    float f_94x = v_94->x;
    float f_94y = v_94->y;
    float f_94z = v_94->z;
    
    float f_bcx = v_bc->x;
    float f_bcy = v_bc->y;
    float f_bcz = v_bc->z;
    float f_bcw = *(float *)((u8 *)arg1 + 0xC0);

    float f_14x = *(float *)((u8 *)arg1 + 0x14);
    float f_14y = *(float *)((u8 *)arg1 + 0x18);
    float f_14z = *(float *)((u8 *)arg1 + 0x1C);
    
    float f_18x = *(float *)((u8 *)arg1 + 0x18);
    float f_18y = *(float *)((u8 *)arg1 + 0x1C);
    float f_18z = *(float *)((u8 *)arg1 + 0x20);
    
    float f_20x = *(float *)((u8 *)arg1 + 0x20);
    float f_20y = *(float *)((u8 *)arg1 + 0x24);
    float f_20z = *(float *)((u8 *)arg1 + 0x28);
    
    float f_8x = *(float *)((u8 *)arg1 + 0x8);
    float f_8y = *(float *)((u8 *)arg1 + 0xC);
    float f_8z = *(float *)((u8 *)arg1 + 0x10);

    // Matrix Multiply attempt
    // Row 0: f_bcx, f_14x, f_20x
    // Row 1: f_bcy, f_18x, f_20y
    // Row 2: f_bcz, f_18x, f_20z
    // Col: f_94x, f_94y, f_94z
    
    // Let's try to match the assembly mul.s instructions.
    // f9 = f_94x * f_bcy
    // f4 = f_14y * f_94x
    // f8 = f_bcz * f_bcy
    // f2 = f_94y * f_94x
    // f0 = f_bcx * f_94x
    
    // This is very confusing. I'll try a completely different approach.
    // The function is likely a matrix-vector multiplication.
    
    float res[3];
    res[0] = f_bcx * f_94x + f_14y * f_94y + f_20z * f_94z;
    res[1] = f_bcy * f_94x + f_18y * f_94y + f_20y * f_94z;
    res[2] = f_bcz * f_94x + f_18z * f_94y + f_20x * f_94z;
    
    ((float*)arg0)[0] = res[0];
    ((float*)arg0)[1] = res[1];
    ((float*)arg0)[2] = res[2];
}
