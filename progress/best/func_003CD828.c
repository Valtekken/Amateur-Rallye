void *func_002B1FC0(u32, u32);
void *func_003D2910(u32);
void *func_003D2B48(s32, u32);
void func_003F931C(void*, void*, void*);

void *D_00437E18;

void *func_003CD828(s32 *arg0) {
    u32 var_17 = 0x10;
    u32 temp_4 = *arg0 + 1;
    if (temp_4 > 0x10U) {
        do {
            var_17 *= 2;
        } while (var_17 < temp_4);
    }
    u32 temp_16 = var_17 + 0x10;
    u32 temp_5 = var_17 + 0x17;
    void *var_16;
    if (temp_16 >= 0x81U) {
        void *temp_2 = func_002B1FC0(temp_16, temp_5);
        if (temp_2 != 0) {
            var_16 = temp_2;
        } else {
            var_16 = func_003D2910(temp_16);
        }
    } else {
        void **temp_4_2 = (void**)(((temp_5 >> 3) - 1) * 4 + (char*)&D_00437E18);
        void *temp_3 = *temp_4_2;
        if (temp_3 != 0) {
            var_16 = temp_3;
            *temp_4_2 = *(void**)temp_3;
        } else {
            var_16 = func_003D2B48(temp_5 & 0xFFFFFFF8, temp_5);
        }
    }
    *(u32*)((char*)var_16 + 4) = var_17;
    *(s32*)((char*)var_16 + 8) = 1;
    *(s32*)((char*)var_16 + 0xC) = 0;
    s32 temp_6 = *arg0;
    void *temp_17 = (char*)var_16 + 0x10;
    if (temp_6 != 0) {
        func_003F931C(temp_17, arg0 + 0x10, (void*)temp_6);
    }
    *(s32*)var_16 = temp_6;
    return temp_17;
}
