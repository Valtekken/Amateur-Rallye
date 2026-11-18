/* func_003A5DC8 - similar to func_00398F20 but with offset 0xC */
extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

/* func_0040AFB8 - creates semaphores */
extern s32 CreateSema_2(s32, void *);
extern s32 D_004411D4;
extern s32 D_004411D8;

void func_0040AFB8(void) {
    s32 sp28 = 1;
    s32 sp24 = 1;
    char sp20[32];
    CreateSema_2(1, &sp20);
    D_004411D4 = CreateSema_2(1, &D_004411D4);
    D_004411D8 = CreateSema_2(1, &D_004411D8);
}

/* func_0040B000 - linear search */
extern s32 D_80000000;
extern s32 D_80000004;

s32* func_0040B000(s32 arg0) {
    s32* p = &D_80000000;
    if (*p != arg0) {
        do {
            p++;
        } while (*p != arg0);
    }
    return p;
}

/* func_0040B280 - wrapper calling func_0040B278 then _ExecPS2_2 */
extern s32 func_0040B278(void);
extern s32 _ExecPS2_2(s32, s32, s32, s32);

void func_0040B280(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3) {
    register s32 r16 = arg0;
    register s32 r17 = arg1;
    register s32 r18 = arg2;
    register s32 r19 = arg3;
    func_0040B278();
    _ExecPS2_2(r16, r17, r18, r19);
}
