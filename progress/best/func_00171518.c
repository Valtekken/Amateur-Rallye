f32 func_00171518(void *arg0, f32 fparg0) {
    f32 *var_3 = *(f32**)((char*)arg0+4);
    f32 temp_f1_2 = var_3[0];
    void *temp_4 = (char*)var_3 + (*(s32*)arg0 * 8) - 8;
    if (fparg0 <= temp_f1_2) {
        return var_3[1];
    }
    if (*(f32*)temp_4 < fparg0) {
        return *(f32*)((char*)temp_4+4);
    }
    void *var_2 = (char*)var_3 - 0x8000;
    if ((u32)temp_4 >= (u32)var_3 && temp_f1_2 < fparg0) {
        do {
            var_3 = (f32*)((char*)var_3+8);
            var_2 = (char*)var_3 - 0x8000;
        } while ((u32)temp_4 >= (u32)var_3 && *(f32*)var_3 < fparg0);
    }
    f32 temp_f1 = var_3[0];
    f32 temp_f3 = var_3[1];
    f32 a = *(f32*)((char*)var_2+0x7FF8);
    f32 b = *(f32*)((char*)var_2+0x7FFC);
    return temp_f3 + ((b - temp_f3) * ((temp_f1 - fparg0)/(temp_f1 - a)));
}
