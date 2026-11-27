extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern void FlushCache_2(s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004361F0, D_004361F4;
typedef struct { s32 w[10]; } Rpc;
typedef struct { s32 w[12]; } Msg;
extern Rpc D_0049BC40;
extern Msg D_0049BCC0;
extern s32 D_0049D200[];
s32 func_003CC7F8(register s32 a, register u8 *b, register s32 c) {
    s32 r;
    u32 n, i;
    if (PollSema_2(D_004361F4) < 0) return -200;
    if (!D_0049BC40.w[9]) { SignalSema_2(D_004361F4); return -100; }
    D_0049BCC0.w[0] = a;
    if (c < 17) {
        D_0049BCC0.w[5] = c;
        D_0049BCC0.w[3] = 0;
        D_0049BCC0.w[6] = 0;
    } else {
        n = (((u32)b - 1) & 0xFFFFFFF0) - ((u32)b - 0x10);
        D_0049BCC0.w[6] = (s32)((u32)b + n);
        D_0049BCC0.w[3] = c - n;
        D_0049BCC0.w[5] = n;
    }
    if (D_0049BCC0.w[5] != 0) {
        for (i = 0; i < (u32)D_0049BCC0.w[5]; i++)
            *(u8 *)((char *)&D_0049BCC0 + 0x20 + i) = b[i];
    }
    FlushCache_2(0);
    r = func_00405E90(&D_0049BC40, 6, 1, &D_0049BCC0, 0x30, D_0049D200, 4, 0, 0);
    if (!r) D_004361F0 = 6; else SignalSema_2(D_004361F4);
    return r;
}
