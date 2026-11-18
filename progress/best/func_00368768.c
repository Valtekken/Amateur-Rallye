extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *D_0042E8E8;
extern void D_004864C8;
extern void D_004864F8;

void *func_00368768(void *arg0, int arg1, void *arg2) {
    void *sp10;
    void *var_2;
    void *var_4;
    int *temp_3;
    int *temp_3_2;
    int *temp_3_3;
    int temp_3_4;
    int var_18;
    void *var_16;

    var_18 = arg1;
    var_16 = arg0;
    if (var_18 != 0) {
        do {
            if (var_16 != NULL) {
                *(void**)((char*)var_16 + 0x2C) = &D_004864F8;
                *(int*)((char*)var_16 + 0) = *(int*)((char*)arg2 + 0);
                *(int*)((char*)var_16 + 4) = *(int*)((char*)arg2 + 4);
                *(int*)((char*)var_16 + 8) = *(int*)((char*)arg2 + 8);
                *(int*)((char*)var_16 + 0xC) = *(int*)((char*)arg2 + 0xC);
                *(int*)((char*)var_16 + 0x10) = *(int*)((char*)arg2 + 0x10);
                temp_3 = *(int**)((char*)arg2 + 0x14);
                *(int**)((char*)var_16 + 0x14) = temp_3;
                if (temp_3 != NULL) {
                    (*temp_3)++;
                }
                temp_3_2 = *(int**)((char*)arg2 + 0x18);
                *(int**)((char*)var_16 + 0x18) = temp_3_2;
                if (temp_3_2 != NULL) {
                    (*temp_3_2)++;
                }
                temp_3_3 = *(int**)((char*)arg2 + 0x1C);
                *(int**)((char*)var_16 + 0x1C) = temp_3_3;
                if (temp_3_3 != NULL) {
                    (*temp_3_3)++;
                }
                *(int*)((char*)var_16 + 0x24) = *(int*)((char*)arg2 + 0x24);
                temp_3_4 = *(int*)((char*)arg2 + 0x28);
                *(int*)((char*)var_16 + 0x28) = temp_3_4;
                if (temp_3_4 != 0) {
                    sp10 = D_0042E8E8;
                    var_4 = func_002B1FC0(0xC);
                    var_2 = (char*)var_4 + 8;
                    if (var_4 == NULL) {
                        var_4 = func_003D2910(0xC);
                        var_2 = (char*)var_4 + 8;
                    }
                    if (var_2 != NULL) {
                        *(void**)((char*)var_4 + 8) = var_16;
                    }
                    *(void**)((char*)var_4 + 0) = sp10;
                    *(void**)((char*)var_4 + 4) = *(void**)((char*)sp10 + 4);
                    *(void**)(*(char**)((char*)sp10 + 4)) = var_4;
                    *(void**)((char*)sp10 + 4) = var_4;
                    *(void**)((char*)var_16 + 0x20) = D_0042E8E8;
                    sp10 = D_0042E8E8;
                    *(void**)((char*)var_16 + 0x20) = *(void**)((char*)D_0042E8E8 + 4);
                }
                *(void**)((char*)var_16 + 0x2C) = &D_004864C8;
            }
            var_18 -= 1;
            var_16 = (char*)var_16 + 0x30;
        } while (var_18 != 0);
    }
    return var_16;
}
