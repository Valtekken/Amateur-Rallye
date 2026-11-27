extern void *D_002AD408(s32, s32, u32, s32);
extern void *func_0026B7C8(void *, s32);
extern u32 D_0044DCD8;
extern u32 D_0047CBF8;
extern u32 D_00494B80;

void *func_002985B0(s32 *p) {
    p[2] = (s32)&D_0044DCD8;
    p[1] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[4] = 0;
    p[1] = (s32)D_00494B80;
    p[0] = -1;
    p[12] = 0x19;
    p[3] = 1;
    p[11] = 0x19;
    p[14] = 0xE;
    p[13] = 0xE;
    p[2] = (s32)&D_0047CBF8;
    p[5] = (s32)func_0026B7C8(D_002AD408(0x34, 0xE, D_00494B80, 1), 0);
    return p;
}
