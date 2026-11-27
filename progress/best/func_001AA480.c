#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void func_001D4040(void *, const char *);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern char D_0044E948[], D_00472658[], D_00472AD0[];
extern char D_00473AD0[];

void *func_001AA480(void *arg0) {
    volatile int key;
    volatile char pad[0x20];
    s32 *p = (s32 *)arg0;
    char *b70, *b7C;
    void *v;
    f32 f15v, f200v, f600v;
    func_001D4040(&key, D_00472AD0);
    A(arg0, s32, 0x4) = key;
    A(arg0, s32, 0x0) = -1;
    A(arg0, void *, 0x8) = &D_00473AD0;
    func_001D4040((char *)arg0 + 0xC, D_00472658);
    p[4]=0; p[5]=0; p[6]=0; p[7]=1; p[8]=0; p[9]=0; p[10]=0; p[11]=0; p[12]=0;
    p[20]=0; p[21]=0;
    f15v = 15.0f; f200v = 200.0f; f600v = 600.0f;
    A(arg0, f32, 0x38) = f15v;
    A(arg0, f32, 0x40) = f200v;
    A(arg0, f32, 0x44) = f600v;
    A(arg0, f32, 0x4C) = 3.0f;
    A(arg0, s32, 0x58) = 0x168;
    func_001D4040((char *)arg0 + 0x5C, D_0044E948);
    A(arg0, f32, 0x48) = 3.0f;
    A(arg0, s32, 0x60) = 1;
    A(arg0, f32, 0x64) = 0.06f;
    b70 = (char *)arg0 + 0x70; b7C = (char *)arg0 + 0x7C;
    A(b70, s32, 0) = 0; A(b70, s32, 4) = 0; A(b70, s32, 8) = 0;
    A(b7C, s32, 0) = 0; A(b7C, s32, 8) = 0; A(b7C, s32, 4) = 0;
    A(b70, s32, 0x30) = 0; A(b70, s32, 0x3C) = 0; A(b70, s32, 0x38) = 0; A(b70, s32, 0x18) = 0;
    v = func_002B1FC0(0xC);
    if (v == 0) v = func_003D2910(0xC);
    A(arg0, void *, 0x110) = v;
    *(void **)v = v;
    A(v, void *, 0x4) = v;
    A(arg0, s32, 0x120) = 1;
    A(arg0, f32, 0x164) = 900.0f;
    A(arg0, f32, 0x158) = 10.5f;
    A(arg0, f32, 0x160) = 5.0f;
    A(arg0, s32, 0x124) = 0;
    return arg0;
}
