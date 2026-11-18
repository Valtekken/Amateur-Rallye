extern s32 D_0042D5D0;
extern u8 D_0042D5F0;
extern s32 D_0048D51C;
extern u8 D_0048D520;
extern u8 D_0048D524;
extern s32 D_0048D528;
extern s32 D_0048D52C;
extern s32 D_004A46C0;
extern s32 D_004A46E8;
extern s32 D_004A4710;
extern s32 D_004A4738;

void func_0030E4C8(void *arg0) {
    char *var_14;
    char *var_5;
    char *var_6;
    char *var_7;
    s32 temp_2, temp_2_2, temp_3, temp_3_2;
    s32 var_8;
    char *var_13;

    *(s32*)((char*)arg0 + 0) = D_0042D5D0;
    var_14 = (char*)&D_004A46C0;
    *(u8*)((char*)arg0 + 4) = D_0042D5F0;
    var_13 = (char*)arg0 + 0x84;
    var_5 = (char*)&D_004A46E8;
    var_6 = (char*)&D_004A4738;
    var_7 = (char*)&D_004A4710;
    *(s32*)((char*)arg0 + 8) = D_0048D51C;
    var_8 = 8;
    *(s32*)((char*)arg0 + 0xC) = D_0048D52C;
    *(u8*)((char*)arg0 + 0x10) = D_0048D524;
    *(u8*)((char*)arg0 + 0x11) = D_0048D520;
    *(s32*)((char*)arg0 + 0x14) = D_0048D528;
    do {
        temp_3 = *(s32*)var_7;
        var_8 -= 1;
        var_7 += 4;
        *(s32*)(var_13 - 0x6C) = temp_3;
        temp_2 = *(s32*)var_6;
        var_6 += 4;
        *(s32*)(var_13 - 0x48) = temp_2;
        temp_3_2 = *(s32*)var_5;
        var_5 += 4;
        *(s32*)(var_13 - 0x24) = temp_3_2;
        temp_2_2 = *(s32*)var_14;
        var_14 += 4;
        *(s32*)var_13 = temp_2_2;
        var_13 += 4;
    } while (var_8 >= 0);
}
