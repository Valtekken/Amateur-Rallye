s32 PollSema_2(s32);
s32 SignalSema_2(s32);
s32 func_004055A0(void *, s32);
s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern s32 D_004361F0;
extern s32 D_004361F4;
extern s32 D_0049BC40[];
extern s32 D_0049BCC0;
extern s32 D_0049C140;
extern s32 D_0049D200;
extern void func_003CC648(void);

s32 func_003CC6D8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_2;
    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    if (D_0049BC40[9] == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    *(s32 *)((char*)&D_0049BCC0 + 0) = arg0;
    *(void **)((char*)&D_0049BCC0 + 0x1C) = (void*)&D_0049C140;
    *(void **)((char*)&D_0049BCC0 + 0x18) = arg1;
    *(s32 *)((char*)&D_0049BCC0 + 0xC) = arg2;
    func_004055A0(arg1, arg2);
    func_004055A0((void*)&D_0049C140, 0xC0);
    temp_2 = func_00405E90((void*)D_0049BC40, 5, 1, (void*)&D_0049BCC0, 0x30, (void*)&D_0049D200, 4, (void*)func_003CC648, (void*)&D_0049C140);
    if (temp_2 == 0) {
        D_004361F0 = 5;
    } else {
        SignalSema_2(D_004361F4);
    }
    return temp_2;
}
