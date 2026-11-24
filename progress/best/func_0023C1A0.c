typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

s32 func_0023C5A0(s32, s32, s32);
M2C_UNK func_003F9698(M2C_UNK *);
extern M2C_UNK D_00479B18;

void func_0023C1A0(s32 arg0, void *arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 temp_19;
    s32 var_16;
    s32 var_20;

    temp_19 = (s32) ((M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) * 0xAAAAAAAB) >> 2;
    var_16 = 0;
    if (temp_19 > 0) {
        var_20 = 0;
        do {
            if (func_0023C5A0(arg0, M2C_FIELD(arg1, s32 *, 0) + var_20, arg2) != 0) {
                if (*arg3 < 0) {
                    *arg3 = var_16;
                } else if (*arg4 < 0) {
                    *arg4 = var_16;
                } else {
                    func_003F9698(&D_00479B18);
                }
            }
            var_16 += 1;
            var_20 += 0xC;
        } while (var_16 < temp_19);
    }
}
