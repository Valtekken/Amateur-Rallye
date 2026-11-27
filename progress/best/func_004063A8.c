typedef struct S_arg0_4063A8 {
    u8 pad_0x00[4];
    s32 (*func_0x04)(s32, s32, s32);
    s32 unk_0x08;
    s32 unk_0x0C;
    u8 pad_0x10[0x0C];
    s32 unk_0x1C;
    s32 unk_0x20;
    s32 unk_0x24;
    s32 unk_0x28;
    s32 unk_0x2C;
    s32 unk_0x30;
    u32 unk_0x34;
} S_arg0_4063A8;

typedef struct S_dma_4063A8 {
    u8 pad_0x00[0x10];
    s32 unk_0x10;
    u8 pad_0x14[4];
    s32 unk_0x18;
    s32 unk_0x1C;
    s32 unk_0x20;
} S_dma_4063A8;

typedef struct DMAEntry {
    s32 a, b, c, d;
} DMAEntry;

extern s32 func_004055A0(s32, s32);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void *func_00405910(void *, u32);
extern void *func_004058E0(void *, u32);
extern s32 func_004053F8(s32, s32, s32, s32, s32, s32);
extern s32 sceSifSetDma_2(void *, s32);
extern u8 D_0049FF00[64];

void func_004063A8(S_arg0_4063A8 *arg0) {
    s32 ret;
    s32 var_20 = 0;
    void *var_2;
    s32 var_19;
    s32 r;
    DMAEntry dma[2];
    volatile u32 spin_x;

    ret = arg0->func_0x04(arg0->unk_0x24, arg0->unk_0x08, arg0->unk_0x0C);
    if (ret == 0) {
        var_20 = arg0->unk_0x2C;
    }

    if (arg0->unk_0x0C > 0) {
        func_004055A0(arg0->unk_0x08, arg0->unk_0x0C);
    }

    if (var_20 > 0) {
        func_004055A0(ret, var_20);
    }

    func_0040AF58();

    if (arg0->unk_0x34 & 4) {
        var_2 = func_00405910(D_0049FF00, arg0->unk_0x34 >> 16);
    } else {
        var_2 = func_004058E0(D_0049FF00, arg0->unk_0x34 >> 16);
    }

    func_0040AFA0();

    ((S_dma_4063A8 *)var_2)->unk_0x20 = 0x8000000A;
    ((S_dma_4063A8 *)var_2)->unk_0x1C = arg0->unk_0x1C;

    if (arg0->unk_0x30 != 0) {
        ((S_dma_4063A8 *)var_2)->unk_0x18 = 0;
        do {
        } while (func_004053F8(0x80000008, (s32)(u32)var_2, 0x40, ret, arg0->unk_0x28, var_20) == 0);
    } else {
        var_19 = 0;
        if (var_20 > 0) {
            ((S_dma_4063A8 *)var_2)->unk_0x10 = 0;
            var_19 = 1;
            dma[0].a = ret;
            dma[0].b = arg0->unk_0x28;
            dma[0].c = var_20;
            dma[0].d = 0;
        }

        dma[var_19].a = (s32)(u32)var_2;
        dma[var_19].b = arg0->unk_0x20;
        dma[var_19].c = 0x40;
        dma[var_19].d = 0;
        var_19++;

        do {
            r = sceSifSetDma_2(dma, var_19);
            if (r != 0) break;
            spin_x = 0x000F0000u;
            do {
                spin_x += 0xFFFFu;
            } while (spin_x != 0xFFFFFFFFu);
        } while (r == 0);
    }
}
