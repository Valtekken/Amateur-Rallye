/* func_002CBCB8 - using M2C_FIELD style from historical best */
void func_002CBCB8(void *arg0) {
    f32 temp_f0 = *(f32*)((char*)arg0 + 0x50);
    if (*(s32*)((char*)arg0 + 0x84) != 0) {
        *(f32*)((char*)arg0 + 0xDC) = *(f32*)((char*)arg0 + 0xDC) + temp_f0 * *(f32*)((char*)arg0 + 0xE8);
    } else {
        *(f32*)((char*)arg0 + 0xDC) = *(f32*)((char*)arg0 + 0xDC) - temp_f0 * *(f32*)((char*)arg0 + 0xE8);
    }
    f32 var_f0 = *(f32*)((char*)arg0 + 0xDC);
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    } else if (var_f0 > 1.0f) {
        var_f0 = 1.0f;
    }
    *(f32*)((char*)arg0 + 0xDC) = var_f0;
}
