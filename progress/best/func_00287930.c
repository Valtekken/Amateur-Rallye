extern void ***func_001D6E40(void);
extern s32 func_002AD350(f32);
extern s32 func_003F9698(s32 *, s32, s32);
extern s32 D_0047B0C8;

void func_00287930(void *arg1) {
    f32 temp_f0;
    f32 var_f20;
    f32 var_f21;
    s32 temp_17_2;
    void **temp_16;
    void *temp_17;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    var_f20 = 0.0f;
    temp_17 = *(void**)((char*)arg1 + 0x4C);
    temp_16 = *func_001D6E40();
    var_f21 = 0.0f;
    if (temp_17 != NULL) {
        if (temp_16 != NULL) {
            temp_3 = *temp_16;
            temp_3_2 = *temp_16;
            if (((s32(*)(void*))((char*)temp_3 + 0x8C))((void*)((char*)temp_16 + *(s16*)((char*)temp_3 + 0x88))) != 0) {
                var_f21 = -2.0f;
            }
            temp_3_3 = *temp_16;
            if (((s32(*)(void*))((char*)temp_3_2 + 0x94))((void*)((char*)temp_16 + *(s16*)((char*)temp_3_2 + 0x90))) != 0) {
                var_f21 = 2.0f;
            }
            temp_3_4 = *temp_16;
            if (((s32(*)(void*))((char*)temp_3_3 + 0x9C))((void*)((char*)temp_16 + *(s16*)((char*)temp_3_3 + 0x98))) != 0) {
                var_f20 = 2.0f;
            }
            if (((s32(*)(void*))((char*)temp_3_4 + 0x2C))((void*)((char*)temp_16 + *(s16*)((char*)temp_3_4 + 0x28))) != 0) {
                var_f20 = -2.0f;
            }
            if ((var_f21 != 0.0f) || (var_f20 != 0.0f)) {
                temp_f0 = *(f32*)((char*)temp_17 + 0x50) + var_f21;
                *(f32*)((char*)temp_17 + 0x50) = temp_f0;
                *(f32*)((char*)temp_17 + 0x54) = *(f32*)((char*)temp_17 + 0x54) + var_f20;
                temp_17_2 = func_002AD350(temp_f0);
                func_003F9698(&D_0047B0C8, temp_17_2, func_002AD350(*(f32*)((char*)temp_17 + 0x54)));
            }
        }
    }
}
