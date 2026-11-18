typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern M2C_UNK func_004039B0(s32, M2C_UNK *);
extern M2C_UNK func_00403A18(s32, M2C_UNK *);
extern M2C_UNK func_00403A80(s32, M2C_UNK *);
extern M2C_UNK func_00403AE8(s32, M2C_UNK *);
extern M2C_UNK D_00428DE0;

void func_002C16D8(void *arg0, s32 arg1, s32 arg2) {
    void *temp_2;
    void *temp_2_2;

    if (arg2 != 0) {
        temp_2 = (void*)((char*)&D_00428DE0 + (*(s32*)((s8*)arg0+4) * 0x10));
        if (*(s32*)((s8*)temp_2+4) != 0) {
            func_00403A18(*(s32*)((s8*)temp_2+8), &D_00428DE0);
        } else {
            func_00403AE8(*(s32*)((s8*)temp_2+8), &D_00428DE0);
        }
    } else {
        temp_2_2 = (void*)((char*)&D_00428DE0 + (*(s32*)((s8*)arg0+4) * 0x10));
        if (*(s32*)((s8*)temp_2_2+4) != 0) {
            func_004039B0(*(s32*)((s8*)temp_2_2+8), &D_00428DE0);
        } else {
            func_00403A80(*(s32*)((s8*)temp_2_2+8), &D_00428DE0);
        }
    }
    *(s32*)((s8*)&D_00428DE0 + (*(s32*)((s8*)arg0+4)*0x10) + 0xC) = arg2;
}
