extern void *func_002AD350(f32);
extern void func_003F9698();

extern u8 D_0048A128[];
extern u8 D_0048A158[];
extern u8 D_0048A188[];
extern u8 D_0048A1B0[];
extern u8 D_0048A1D8[];
extern u8 D_0048A200[];
extern u8 D_0048A228[];
extern u8 D_0048A248[];
extern u8 D_0048A268[];
extern u8 D_0048A288[];
extern u8 D_0048A2A8[];
extern u8 D_0048A2C0[];
extern u8 D_0048D500[];
extern s32 D_0048D6C4;
extern u8 D_004954F0[];
extern u8 D_1FF0000[];
extern u8 D_10000[];
extern u8 D_4D9978[];
extern u8 _start[];

void func_003E82B0(void) {
    s32 heapSize = (s32)D_1FF0000;
    s32 stackSize = (s32)D_10000;
    f32 f;
    f32 g;

    func_003F9698(D_0048A128);
    func_003F9698(D_0048A158);
    func_003F9698(D_0048A128);

    if (heapSize >= 0) f = (f32)heapSize;
    else f = 2.0f * (f32)((heapSize & 1) | ((u32)heapSize >> 1));
    func_003F9698(D_0048A188, D_1FF0000, func_002AD350(f * 0.0000009536743f));

    func_003F9698(D_0048A1B0, D_1FF0000, D_1FF0000);

    if (stackSize >= 0) g = (f32)stackSize;
    else g = 2.0f * (f32)((stackSize & 1) | ((u32)stackSize >> 1));
    func_003F9698(D_0048A1D8, D_10000, func_002AD350(g * 0.0000009536743f));

    func_003F9698(D_0048A200, D_4D9978, D_4D9978);
    func_003F9698(D_0048A228, _start, _start);
    func_003F9698(D_0048A248, _start, _start);
    func_003F9698(D_0048A268, D_0048D500, D_0048D500);
    func_003F9698(D_0048A288, D_004954F0, D_004954F0);
    func_003F9698(D_0048A128);
    func_003F9698(D_0048A2A8, &D_0048D6C4);
    func_003F9698(D_0048A2C0, (s32)D_1FF0000 - (s32)D_4D9978);
    func_003F9698(D_0048A128);
}
