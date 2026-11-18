extern s32 *func_002B1FC0(s32);
extern s32 *func_003D2910(s32);
extern s32 *D_0042E8E8;
extern s32 D_004864C8;
extern s32 D_004864F8;

void *func_00368430(void *arg0, s32 arg1, void *arg2) {
    s32 *sp10;
    s32 *var_2;
    s32 *var_4;
    s32 *temp_3;
    s32 temp_3_4;
    void *var_16;
    void *var_17;

    var_17 = arg0;
    var_16 = arg2;
    if (var_17 != (void*)arg1) {
        do {
            if (var_16 != NULL) {
                *(s32**)((char*)var_16 + 0x2C) = (s32*)&D_004864F8;
                *(s32*)((char*)var_16 + 0) = *(s32*)((char*)var_17 + 0);
                *(s32*)((char*)var_16 + 4) = *(s32*)((char*)var_17 + 4);
                *(s32*)((char*)var_16 + 8) = *(s32*)((char*)var_17 + 8);
                *(s32*)((char*)var_16 + 0xC) = *(s32*)((char*)var_17 + 0xC);
                *(s32*)((char*)var_16 + 0x10) = *(s32*)((char*)var_17 + 0x10);
                temp_3 = *(s32**)((char*)var_17 + 0x14);
                *(s32**)((char*)var_16 + 0x14) = temp_3;
                if (temp_3 != NULL) {
                    (*temp_3)++;
                }
                temp_3 = *(s32**)((char*)var_17 + 0x18);
                *(s32**)((char*)var_16 + 0x18) = temp_3;
                if (temp_3 != NULL) {
                    (*temp_3)++;
                }
                temp_3 = *(s32**)((char*)var_17 + 0x1C);
                *(s32**)((char*)var_16 + 0x1C) = temp_3;
                if (temp_3 != NULL) {
                    (*temp_3)++;
                }
                *(s32*)((char*)var_16 + 0x24) = *(s32*)((char*)var_17 + 0x24);
                temp_3_4 = *(s32*)((char*)var_17 + 0x28);
                *(s32*)((char*)var_16 + 0x28) = temp_3_4;
                if (temp_3_4 != 0) {
                    sp10 = D_0042E8E8;
                    var_4 = func_002B1FC0(0xC);
                    var_2 = var_4 + 8; /* note: byte offset 8 = +2 ints */
                    if (var_4 == NULL) {
                        var_4 = func_003D2910(0xC);
                        var_2 = var_4 + 8;
                    }
                    if (var_2 != NULL) {
                        *(void**)(var_4 + 2) = var_16; /* offset 8 */
                    }
                    var_4[0] = (s32)sp10;
                    var_4[1] = sp10[1];
                    sp10[1] = (s32)var_4; /* ??? placeholder */
                    /* The following from draft: */
                    *(s32**)((char*)var_16 + 0x20) = D_0042E8E8;
                    sp10 = D_0042E8E8;
                    *(s32**)((char*)var_16 + 0x20) = sp10[1]; /* placeholder wrong */
                }
                *(s32**)((char*)var_16 + 0x2C) = (s32*)&D_004864C8;
            }
            var_17 = (char*)var_17 + 0x30;
            var_16 = (char*)var_16 + 0x30;
        } while (var_17 != (void*)arg1);
    }
    return var_16;
}
