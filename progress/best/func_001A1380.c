typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern M2C_UNK D_0040E618;
extern void D_002AD530(M2C_UNK);
extern void func_002B2028(u32);

void func_001A1380(void *arg0) {
    s32 temp_2;
    u32 temp_4_2;
    u32 temp_4_3;
    u32 var_3;
    void *temp_16;
    void *temp_4;
    void *var_16;

    temp_4 = M2C_FIELD(arg0, void **, 0);
    if (temp_4 != NULL) {
        temp_16 = (void *)((s32)M2C_FIELD(temp_4, s32 *, -0x10) * 0xC + (s32)temp_4);
        if (temp_4 != temp_16) {
            var_16 = (void *)((s32)temp_16 - 0xC);
            do {
                temp_4_2 = M2C_FIELD(var_16, u32 *, 4);
                var_3 = M2C_FIELD(var_16, u32 *, 0);
                if ((u32)var_3 < (u32)temp_4_2) {
                    do {
                        var_3 += 0x30;
                    } while ((u32)var_3 < (u32)temp_4_2);
                }
                temp_4_3 = M2C_FIELD(var_16, u32 *, 0);
                temp_2 = (s32) ((M2C_FIELD(var_16, u32 *, 8) - temp_4_3) * 0xAAAAAAAB) >> 4;
                if (temp_2 != 0) {
                    if ((temp_2 * 0x30) == 0) {
                        M2C_FIELD(temp_4_3, u32 *, 0) = (u32) M2C_FIELD(&D_0040E618, M2C_UNK *, -4);
                        M2C_FIELD(&D_0040E618, M2C_UNK *, -4) = temp_4_3;
                    } else {
                        func_002B2028(temp_2 * 0x30);
                    }
                }
                var_16 = (void *)((s32)var_16 - 0xC);
            } while (M2C_FIELD(arg0, void **, 0) != var_16);
        }
        D_002AD530((s32) M2C_FIELD(arg0, void **, 0) - 0x10);
    }
    temp_4_2 = M2C_FIELD(arg0, u32 *, 4);
    M2C_FIELD(arg0, void **, 0) = NULL;
    if (temp_4_2 != 0) {
        D_002AD530(temp_4_2);
    }
    M2C_FIELD(arg0, u32 *, 4) = 0;
}
