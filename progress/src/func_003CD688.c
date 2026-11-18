s32 PollSema_2(s32);
s32 SignalSema_2(s32);
void *func_003FAD88(void *, void *, s32);
s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
extern s32 D_0049BC40[];
extern s32 D_0049BCF0;
extern s32 D_0049D200;

s32 func_003CD688(s32 arg0, s32 arg1, char *arg2) {
    s32 temp_2;
    if (PollSema_2(D_004361F4) < 0) return -0xC8;
    if (D_0049BC40[9] == 0) { SignalSema_2(D_004361F4); return -0x64; }
    if (arg2 == 0 || *arg2 == 0) { SignalSema_2(D_004361F4); return -0xD2; }
    *(s32 *)((char*)&D_0049BCF0 + 0) = arg0;
    *(s32 *)((char*)&D_0049BCF0 + 4) = arg1;
    func_003FAD88((void *)((char*)&D_0049BCF0 + 0x14), arg2, 0x3FF);
    *((char *)((char*)&D_0049BCF0) + 0x413) = 0;
    temp_2 = func_00405E90((void*)D_0049BC40, 0x12, 1, (void*)&D_0049BCF0, 0x414, (void*)&D_0049D200, 4, 0, 0);
    if (temp_2 == 0) { D_004361F0 = 0x12; } else { SignalSema_2(D_004361F4); }
    return temp_2;
}
