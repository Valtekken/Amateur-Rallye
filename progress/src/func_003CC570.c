extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 func_00405E90(void*,s32,s32,void*,s32,void*,s32,s32,s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
typedef struct Rpc{s32 w[10];}Rpc;
extern Rpc D_0049BC40;
extern s32 D_0049BCC0[];
extern s32 D_0049D200[];

s32 func_003CC570(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;
    if (PollSema_2(D_004361F4) < 0) return -200;
    if (!D_0049BC40.w[9]) { SignalSema_2(D_004361F4); return -100; }
    D_0049BCC0[0] = arg0;
    D_0049BCC0[4] = arg1;
    D_0049BCC0[5] = arg2;
    r = func_00405E90(&D_0049BC40, 4, 1, D_0049BCC0, 48, D_0049D200, 4, 0, 0);
    if (!r) D_004361F0 = 4;
    else SignalSema_2(D_004361F4);
    return r;
}
