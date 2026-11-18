typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern void func_002B2028(M2C_UNK *);
void func_001EA470(M2C_UNK **arg0) {
    M2C_UNK *temp_2; M2C_UNK *temp_3; M2C_UNK *var_16; M2C_UNK *var_4;
    temp_2 = *arg0;
    var_16 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    if (var_16 != temp_2) {
        var_4 = var_16;
        do {
            var_16 = *var_16;
            func_002B2028(var_4);
            var_4 = var_16;
        } while (var_16 != *arg0);
    }
    M2C_FIELD(*arg0, M2C_UNK **, 0) = *arg0;
    temp_3 = *arg0;
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
}
