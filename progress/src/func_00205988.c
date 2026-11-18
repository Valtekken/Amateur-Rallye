extern void *func_002063F0(void*, s32, void*);
s32 func_00205D60(void *arg0, s32 *arg1) {
    s32 local;
    void *temp_2 = func_002063F0(arg0, 0, &local);
    s32 temp_4 = *(s32*)temp_2;
    s32 temp_3 = (*(s32*)((char*)temp_2+4) - temp_4) >> 1;
    if (temp_3 != 0) {
        temp_3 = temp_3 - 1;
        temp_3 = temp_3 << 1;
        temp_3 = temp_4 + temp_3;
        *arg1 = *(s16*)temp_3;
        return 1;
    }
    *arg1 = -1;
    return 0;
}

extern void *D_002AD408(int);
extern s32 *D_00426570;
void *func_00205BB0(void) {
    if (!D_00426570) {
        void *p = D_002AD408(0xC);
        D_00426570 = p;
        ((s32 *)p)[0] = 0;
        ((s32 *)p)[1] = 0;
        ((s32 *)p)[2] = 0;
    }
    return D_00426570;
}

extern void func_002059A8(void*, void*, void*, void*);
void func_00205988(void *a, void *b, void *c) {
    s32 x = 0;
    func_002059A8(a, b, c, &x);
}
