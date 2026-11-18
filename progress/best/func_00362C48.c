extern void func_002B2028(void *);
extern void D_002AD390(void *);

extern s32 D_004864F8;

void func_00362C48(void *arg0, s32 arg1) {
    void *sp10;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 var_2;
    void **temp_3;
    void *temp_16;
    void *temp_2p;
    void *temp_2_3;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;

    *(void **)((char*)arg0 + 0x2C) = &D_004864F8;
    if (*(s32 *)((char*)arg0 + 0x28) != 0) {
        temp_2p = *(void **)((char*)arg0 + 0x20);
        sp10 = temp_2p;
        temp_16 = *(void **)((char*)temp_2p + 0);
        temp_3 = *(void ***) ((char*)temp_2p + 4);
        *temp_3 = temp_16;
        *(void ***) ((char*)temp_16 + 4) = temp_3;
        func_002B2028(sp10);
    }
    temp_6 = *(void **)((char*)arg0 + 0x1C);
    if (temp_6 != NULL) {
        temp_2_2 = *(s32 *)temp_6 - 1;
        *(s32 *)temp_6 = temp_2_2;
        if (temp_2_2 == 0) {
            temp_2_3 = *(void **)((char*)temp_6 + 4);
            ((void (*)(void *, s32, void *))(*(void **)((char*)temp_2_3 + 0xC)))(temp_6 + *(s16 *)((char*)temp_2_3 + 8), 3, temp_6);
        }
    }
    temp_6_2 = *(void **)((char*)arg0 + 0x18);
    if (temp_6_2 != NULL) {
        temp_2_4 = *(s32 *)temp_6_2 - 1;
        *(s32 *)temp_6_2 = temp_2_4;
        if (temp_2_4 == 0) {
            temp_2_5 = *(void **)((char*)temp_6_2 + 4);
            ((void (*)(void *, s32, void *))(*(void **)((char*)temp_2_5 + 0xC)))(temp_6_2 + *(s16 *)((char*)temp_2_5 + 8), 3, temp_6_2);
        }
    }
    temp_6_3 = *(void **)((char*)arg0 + 0x14);
    var_2 = arg1 & 1;
    if (temp_6_3 != NULL) {
        temp_2_6 = *(s32 *)temp_6_3 - 1;
        *(s32 *)temp_6_3 = temp_2_6;
        if (temp_2_6 == 0) {
            temp_2_7 = *(void **)((char*)temp_6_3 + 4);
            ((void (*)(void *, s32, void *))(*(void **)((char*)temp_2_7 + 0xC)))(temp_6_3 + *(s16 *)((char*)temp_2_7 + 8), 3, temp_6_3);
        }
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        D_002AD390(arg0);
    }
}
