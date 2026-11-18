extern s32 func_003DF178(void *, s32, s64, void *, s32, s32);
extern void func_002AE2F0(void);
extern s64 D_00488F58;
extern s32 D_00489120;
extern s64 D_004898A8;

void *func_003DF558(void *arg0, s32 arg1, s32 arg2) {
    s64 sp10;
    s64 sp18;
    s64 var_6;
    void *temp_16;
    void *temp_2;
    void *temp_5;
    void *temp_7;

    if (arg1 != 0) {
        temp_2 = (char*)arg0 + 0x68;
        *(void**)((char*)arg0 + 0) = temp_2;
        *(s8*)((char*)temp_2 + 0x1A) = 4;
        *(s8*)((char*)temp_2 + 0x1B) = 0;
        *(void**)((char*)temp_2 + 0x28) = &D_00489120;
        *(s16*)((char*)temp_2 + 0x18) = 0x20;
        *(s64*)((char*)temp_2 + 0x10) = 0x11;
        *(s32*)((char*)temp_2 + 0x1C) = 6;
        *(s32*)((char*)temp_2 + 0x20) = 0;
        *(s32*)((char*)arg0 + 0x68) = 0;
        *(s32*)((char*)temp_2 + 4) = 0;
        *(s32*)((char*)temp_2 + 8) = 0;
    }
    temp_7 = *(void**)((char*)arg0 + 0);
    *(void**)((char*)temp_7 + 0x28) = &D_00488F58;
    var_6 = *(s64*)&D_00488F58;
    *(void**)((char*)temp_7 + 0x28) = &D_004898A8;
    if (arg1 == 0) {
        var_6 = *(s64*)&D_004898A8;
        sp10 = var_6;
        sp18 = *(u16*)((char*)&D_004898A8 + 8);
        *(void**)((char*)temp_7 + 0x28) = &sp10;
        sp18 = *(u16*)((char*)&D_004898A8 + 8) + (s32)((char*)arg0 - ((char*)temp_7 - 0x68));
    }
    temp_16 = (char*)arg0 + 8;
    func_003DF178(temp_16, arg2, var_6, temp_7, arg1, arg2);
    temp_5 = *(void**)((char*)arg0 + 0);
    if (temp_16 == NULL) {
        *(s8*)((char*)temp_5 + 0x1A) = 4;
    } else {
        *(s8*)((char*)temp_5 + 0x1A) = 0;
    }
    *(void**)((char*)temp_5 + 0) = temp_16;
    *(s16*)((char*)temp_5 + 0x18) = 0x20;
    *(s64*)((char*)temp_5 + 0x10) = 0x11;
    *(s32*)((char*)temp_5 + 0x1C) = 6;
    *(s32*)((char*)temp_5 + 0x20) = 0;
    *(s8*)((char*)temp_5 + 0x1B) = 0;
    *(s32*)((char*)temp_5 + 4) = 0;
    *(s32*)((char*)temp_5 + 8) = 0;
    return arg0;
}
