typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern void **func_001D6DF8(s32, M2C_UNK);
extern s32 func_001D6E40(void);
s32 func_00115AC0(void *arg0) {
    void **temp_2; void *v;
    temp_2 = func_001D6DF8(func_001D6E40(), 0);
    v = *temp_2;
    if (M2C_FIELD(v, u32 (**)(void *), 0x44)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x40)) < 0x10U) return 0;
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 0xC) != 0) { M2C_FIELD(arg0, f32 *, 0x14) = M2C_FIELD(arg0, f32 *, 0x14) + 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 0xE) != 0) { M2C_FIELD(arg0, f32 *, 0x14) = M2C_FIELD(arg0, f32 *, 0x14) - 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 0xF) != 0) { M2C_FIELD(arg0, f32 *, 0x10) = M2C_FIELD(arg0, f32 *, 0x10) - 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 0xD) != 0) { M2C_FIELD(arg0, f32 *, 0x10) = M2C_FIELD(arg0, f32 *, 0x10) + 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 5) != 0) { M2C_FIELD(arg0, f32 *, 0x28) = M2C_FIELD(arg0, f32 *, 0x28) - 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0x14)((char *)temp_2 + M2C_FIELD(v, s16 *, 0x10), 7) != 0) { M2C_FIELD(arg0, f32 *, 0x28) = M2C_FIELD(arg0, f32 *, 0x28) + 1.0f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0xC)((char *)temp_2 + M2C_FIELD(v, s16 *, 8), 3) != 0) { M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg0, f32 *, 0x20) + 0.0349f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0xC)((char *)temp_2 + M2C_FIELD(v, s16 *, 8), 1) != 0) { M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg0, f32 *, 0x20) - 0.0349f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0xC)((char *)temp_2 + M2C_FIELD(v, s16 *, 8), 0) != 0) { M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg0, f32 *, 0x1C) + 0.0349f; return 1; }
    v = *temp_2;
    if (M2C_FIELD(v, s32 (**)(void *, M2C_UNK), 0xC)((char *)temp_2 + M2C_FIELD(v, s16 *, 8), 2) != 0) { M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg0, f32 *, 0x1C) - 0.0349f; return 1; }
    return 0;
}
