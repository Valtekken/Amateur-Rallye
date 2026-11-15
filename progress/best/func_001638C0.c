s32 func_00192190(s32, s32);
s32 func_00193B60();
void func_001D4040(void *dest, void *src);
f32 func_001E3610(s32, s32 *);
s32 func_001E4280();
s32 func_0021E9C0(s32, s32 *);
s32 func_0021F4B0();
s32 func_00262E20(s32, s32 *);
void func_003FA310(void *buf, const char *fmt, ...);

extern s32 D_0040E8C0;
extern char D_0044EC10[];
extern char D_0044EE08[];
extern char D_0044F040[];
extern char D_0044F048[];
extern char D_0044F060[];
extern char D_0044F088[];
extern char D_0044F0A0[];
extern char D_0044F0B8[];
extern char D_0044F0D0[];
extern char D_0044F0E0[];
extern s32 D_0048DD88;

typedef struct {
    u8 pad0[0x0C];
    void *unk0C;
    void *unk10;
    s32 unk14;
    u32 unk18;
    u8 pad1[0x38];
    s32 unk54;
    s32 unk58;
    u32 unk5C;
    u32 unk60;
    u32 unk64;
    u32 unk68;
    u32 unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
    u32 unk7C;
    u32 unk80;
    u32 unk84;
    u32 unk88;
    f32 unk8C;
    f32 unk90;
    u8 pad2[0x24];
    s32 unkB8;
} CarConfig;

void func_001638C0(CarConfig *car, s32 *arg1) {
    s32 sp40;
    f32 temp_f0;
    s32 var_16 = 0x17;
    s32 var_18 = 0;

    func_003FA310(&sp40, D_0044F040, car->unk54);
    func_001D4040(&car->unk5C, &sp40);
    ((s32 *)car->unk0C)[0x30/4] = (s32)arg1;
    do {
        var_16 -= 1;
        func_00262E20((s32)car->unk10 + var_18, arg1);
        var_18 += 0x70;
    } while (var_16 >= 0);
    if (car->unk14 != 0) {
        func_00262E20(car->unk14, arg1);
    }
    func_003FA310(&sp40, D_0044EC10);
    func_001D4040((void *)((char *)car + 0x60), &sp40);
    func_003FA310(&sp40, D_0044F048);
    func_001D4040((void *)((char *)car + 0x64), &sp40);
    func_003FA310(&sp40, D_0044F060, car->unk54);
    func_001D4040(&car->unk68, &sp40);
    func_003FA310(&sp40, D_0044F088, car->unk54);
    func_001D4040((void *)((char *)car + 0x78), &sp40);
    func_003FA310(&sp40, D_0044F0A0, car->unk54);
    func_001D4040(&car->unk6C, &sp40);
    temp_f0 = func_001E3610(func_001E4280(), (s32 *)((char *)car + 0x64));
    car->unk8C = temp_f0;
    car->unk90 = temp_f0 / 90.0f;
    func_003FA310(&sp40, D_0044F0B8, car->unk54);
    func_001D4040((void *)((char *)car + 0x70), &sp40);
    func_001D4040((void *)((char *)car + 0x74), D_0044EE08);
    if (D_0040E8C0 == 0) {
        func_001D4040(&D_0048DD88, D_0044F0D0);
        D_0040E8C0 = 1;
    }
    car->unk58 = 0;
    car->unk18 = func_0021E9C0(func_0021F4B0(), &D_0048DD88);
    func_003FA310(&sp40, D_0044F0E0, car->unk54, 0);
    func_001D4040((void *)((char *)car + 0x7C), &sp40);
    func_003FA310(&sp40, D_0044F0E0, car->unk54, 1);
    func_001D4040((void *)((char *)car + 0x80), &sp40);
    func_003FA310(&sp40, D_0044F0E0, car->unk54, 2);
    func_001D4040((void *)((char *)car + 0x84), &sp40);
    func_003FA310(&sp40, D_0044F0E0, car->unk54, 3);
    func_001D4040((void *)((char *)car + 0x88), &sp40);
    car->unkB8 = (func_00192190(func_00193B60(), car->unk54) == 1);
    *arg1 &= ~1;
}
