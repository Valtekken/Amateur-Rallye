extern s32 PollSema_2(s32), SignalSema_2(s32);
extern s32 func_00405E90(void*, s32, s32, void*, s32, void*, s32, s32, s32);
extern s32 D_004361F0, D_004361F4;
typedef struct { s32 w[10]; } Rpc;
extern Rpc D_0049BC40;
extern s32 D_0049BCC0[], D_0049D200[];

s32 func_003CD5C0(s32 a, s32 b) {
    s32 r;
    if (PollSema_2(D_004361F4) < 0) return -0xC8;
    if (!D_0049BC40.w[9]) { SignalSema_2(D_004361F4); return -0x64; }
    D_0049BCC0[2] = b;
    D_0049BCC0[1] = a;
    r = func_00405E90(&D_0049BC40, 0x11, 1, D_0049BCC0, 0x30, D_0049D200, 4, 0, 0);
    if (!r) D_004361F0 = 0x11;
    else SignalSema_2(D_004361F4);
    return r;
}
