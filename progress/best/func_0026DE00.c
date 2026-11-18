#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void func_0026DE00(s32 arg0, s32 arg1, void *arg2) {
    s32 var_3;
    void *var_4, *temp_9, *temp_8, *temp_7;
    var_3 = arg0;
    if (var_3 != arg1) {
        var_4 = (void*)(arg0 + 0x24);
        temp_9 = (char*)arg2 + 0xC;
        temp_8 = (char*)arg2 + 0x18;
        temp_7 = (char*)arg2 + 0x24;
        do {
            var_3 += 0x60;
            M2C_FIELD(var_4, f32 *, -0x24) = M2C_FIELD(arg2, f32 *, 0);
            M2C_FIELD(var_4, f32 *, -0x20) = M2C_FIELD(arg2, f32 *, 4);
            M2C_FIELD(var_4, f32 *, -0x1C) = M2C_FIELD(arg2, f32 *, 8);
            M2C_FIELD(var_4, f32 *, -0x18) = M2C_FIELD(arg2, f32 *, 0xC);
            M2C_FIELD(var_4, f32 *, -0x14) = M2C_FIELD(temp_9, f32 *, 4);
            M2C_FIELD(var_4, f32 *, -0x10) = M2C_FIELD(temp_9, f32 *, 8);
            M2C_FIELD(var_4, f32 *, -0xC) = M2C_FIELD(arg2, f32 *, 0x18);
            M2C_FIELD(var_4, f32 *, -8) = M2C_FIELD(temp_8, f32 *, 4);
            M2C_FIELD(var_4, f32 *, -4) = M2C_FIELD(temp_8, f32 *, 8);
            M2C_FIELD(var_4, f32 *, 0) = M2C_FIELD(arg2, f32 *, 0x24);
            M2C_FIELD(var_4, f32 *, 4) = M2C_FIELD(temp_7, f32 *, 4);
            M2C_FIELD(var_4, f32 *, 8) = M2C_FIELD(temp_7, f32 *, 8);
            M2C_FIELD(var_4, f32 *, 0xC) = M2C_FIELD(arg2, f32 *, 0x30);
            M2C_FIELD(var_4, f32 *, 0x10) = M2C_FIELD(arg2, f32 *, 0x34);
            M2C_FIELD(var_4, f32 *, 0x14) = M2C_FIELD(arg2, f32 *, 0x38);
            M2C_FIELD(var_4, f32 *, 0x18) = M2C_FIELD(arg2, f32 *, 0x3C);
            M2C_FIELD(var_4, f32 *, 0x1C) = M2C_FIELD(arg2, f32 *, 0x40);
            M2C_FIELD(var_4, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0x44);
            M2C_FIELD(var_4, f32 *, 0x24) = M2C_FIELD(arg2, f32 *, 0x48);
            M2C_FIELD(var_4, s32 *, 0x28) = M2C_FIELD(arg2, s32 *, 0x4C);
            M2C_FIELD(var_4, f32 *, 0x2C) = M2C_FIELD(arg2, f32 *, 0x50);
            M2C_FIELD(var_4, s32 *, 0x30) = M2C_FIELD(arg2, s32 *, 0x54);
            var_4 = (char*)var_4 + 0x60;
        } while (var_3 != arg1);
    }
}
