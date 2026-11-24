extern void D_0047A0F0;
extern s32 *volatile D_004267BC;
extern s32 func_001DAD18(s32, s32);
extern s32* func_0026BC18(s32);
extern void *D_002AD408(int);

typedef struct { volatile s32 f[7]; } S;

s32* func_0026B6B8(s32* arg0, s32 arg1, s32 arg2)
{
    S *p = (S*)arg0;
    s32 g = D_004267BC;
    p->f[6] = (s32)&D_0047A0F0;
    p->f[3] = arg1;
    p->f[4] = arg2;
    p->f[2] = (s32)arg0;
    p->f[1] = (s32)arg0;
    p->f[5] = 0;
    arg0[0] = (s32)arg0;
    if (g == 0) {
        D_004267BC = func_0026BC18((s32)D_002AD408(0xC));
    }
    func_001DAD18(D_004267BC[2], (s32)arg0);
    return arg0;
}
