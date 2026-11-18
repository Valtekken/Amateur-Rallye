extern void *func_002063F0(void*, s32, void*);
s32 func_00205D60(void *arg0, s32 *arg1) {
    s32 local;
    void *temp_2 = func_002063F0(arg0, 0, &local);
    s32 temp_4 = *(s32*)temp_2;
    s32 temp_3 = (*(s32*)((char*)temp_2+4) - temp_4) >> 1;
    if (temp_3 == 0) {
        *arg1 = -1;
        return 0;
    }
    temp_3 = temp_3 - 1;
    temp_3 = temp_3 << 1;
    temp_3 = temp_4 + temp_3;
    *arg1 = *(s16*)temp_3;
    return 1;
}
