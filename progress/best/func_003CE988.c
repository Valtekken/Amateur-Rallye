extern void func_003D13B0(void*);
extern s32 func_003F9288(void*, void*, u32);

extern s32 D_00488D20;

s32 func_003CE988(void **arg0, void **arg1, u32 arg2, u32 arg3) {
    u32 temp_16;
    u32 temp_16_2;
    u32 temp_16_3;
    u32 temp_3;
    void *t5;
    s32 var_2;

    if (*(u32*)((char*)*arg0 - 0x10) < arg2) {
        func_003D13B0((void*)&D_00488D20);
    }
    t5 = *arg1;
    temp_16 = *(u32*)((char*)*arg0 - 0x10) - arg2;
    temp_3 = *(u32*)((char*)t5 - 0x10);
    temp_16_2 = (arg3 < temp_16) ? arg3 : temp_16;
    temp_16_3 = (temp_3 < temp_16_2) ? temp_3 : temp_16_2;
    var_2 = func_003F9288((char*)*arg0 + arg2, t5, temp_16_3);
    if (var_2 == 0) {
        if (temp_16_3 != arg3) {
            var_2 = (*(u32*)((char*)*arg0 - 0x10) - arg2) - *(u32*)((char*)*arg1 - 0x10);
        } else {
            var_2 = 0;
        }
    }
    return var_2;
}
