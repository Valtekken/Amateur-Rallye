extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void func_00250200(void **arg0, s32 arg1) {
    void *sp10;
    void *var_4;
    void *var_2;

    sp10 = *arg0;
    var_4 = func_002B1FC0(0xC);
    var_2 = (char*)var_4 + 8;
    if (var_4 == NULL) {
        var_4 = func_003D2910(0xC);
        var_2 = (char*)var_4 + 8;
    }
    if (var_2 != NULL) {
        *(s32*)((char*)var_4 + 8) = arg1;
    }
    *(void**)((char*)var_4 + 0) = sp10;
    *(void**)((char*)var_4 + 4) = *(void**)((char*)sp10 + 4);
    **(void***)((char*)sp10 + 4) = var_4;
    *(void**)((char*)sp10 + 4) = var_4;
}
