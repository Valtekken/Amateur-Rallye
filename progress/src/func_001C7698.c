typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
M2C_UNK *func_00152D28(M2C_UNK);
M2C_UNK *func_001C7D18(s32, s32, M2C_UNK *, M2C_UNK);
M2C_UNK *func_002B1FC0(s32);
M2C_UNK *func_003D2910(s32);
extern u32 D_0040E618[];

void *func_001C7698(void *arg0, s32 arg1, void *arg2) {
    volatile u64 pad16[2] __attribute__((aligned(16)));
    M2C_UNK *var_6;
    s32 temp_16;
    s32 temp_19;
    void *var_17;
    void *var_18;

    var_18 = arg0;
    var_17 = arg2;
    if (var_18 != arg1) {
        do {
            if (var_17 != NULL) {
                temp_19 = (s32) (((s32)M2C_FIELD(var_18, s32 *, 4) - (s32)M2C_FIELD(var_18, s32 *, 0)) * 0xAAAAAAAB) >> 4;
                M2C_FIELD(var_17, M2C_UNK **, 0) = NULL;
                M2C_FIELD(var_17, M2C_UNK **, 4) = NULL;
                M2C_FIELD(var_17, void **, 8) = NULL;
                if (temp_19 != 0) {
                    temp_16 = temp_19 * 0x30;
                    if (temp_16 != 0) {
                        M2C_UNK *block = func_002B1FC0(temp_16);
                        if (block) var_6 = block; else var_6 = func_003D2910(temp_16);
                    } else {
                        u32 *freeblock = (u32 *)D_0040E618[-1];
                        if (!freeblock) var_6 = func_00152D28(0);
                        else { u32 next = *freeblock; var_6 = (M2C_UNK *)freeblock; D_0040E618[-1] = next; }
                    }
                } else {
                    var_6 = NULL;
                }
                M2C_FIELD(var_17, M2C_UNK **, 0) = var_6;
                M2C_FIELD(var_17, M2C_UNK **, 4) = var_6;
                M2C_FIELD(var_17, void **, 8) = (void *) ((u8 *)var_6 + temp_19 * 0x30);
                M2C_FIELD(var_17, M2C_UNK **, 4) = func_001C7D18(M2C_FIELD(var_18, s32 *, 0), M2C_FIELD(var_18, s32 *, 4), var_6, 0);
            }
            var_18 += 0xC;
            var_17 += 0xC;
        } while (var_18 != arg1);
    }
    return var_17;
}
