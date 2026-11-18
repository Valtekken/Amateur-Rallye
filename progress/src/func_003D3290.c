typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
M2C_UNK func_003D4D70(s32, s32);
s32 func_003D6C70(void *, s32);
s32 func_003DA6B8(void *);
void *func_003D3290(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_5, var_4, npos;
    u8 temp_2;
    void *temp_18, *temp_2_2, *temp_3;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_3 = M2C_FIELD(arg0, void **, 0);
    temp_2 = M2C_FIELD(temp_3, u8 *, 0x1A);
    if (temp_2) {
        M2C_FIELD(temp_3, u8 *, 0x1A) = (u8)(temp_2 | 2);
        var_4 = 0;
    } else {
        temp_5 = M2C_FIELD(temp_3, s32 *, 4);
        if (temp_5) {
            temp_2_2 = M2C_FIELD(temp_3, void **, 0);
            if (M2C_FIELD(temp_2_2, s32 *, 8) == M2C_FIELD(temp_2_2, s32 *, 4)) {
                func_003D4D70(temp_5, temp_5);
            }
        }
        var_4 = 1;
    }
    if (var_4) {
        temp_18 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0);
        if (arg2 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = func_003D6C70(temp_18, arg1);
        } else {
            npos = -1;
            for (;;) {
                arg1 -= 1;
                if (arg1 < 0) break;
                s32 r = func_003DA6B8(temp_18);
                if (r == npos) {
                    void *p = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(p, u8 *, 0x1A) = (u8)(M2C_FIELD(p, u8 *, 0x1A) | 3);
                    break;
                }
                M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4) + 1;
                if (r != arg2) goto loop_again;
                break;
loop_again:;
            }
        }
    }
    return arg0;
}
