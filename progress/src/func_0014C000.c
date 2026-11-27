extern s32 func_001930D8(s32, s32);
extern s32 func_00193B60(void);
extern void func_001D4040(void *, void *);
extern f32 func_001E3610(s32, void *);
extern s32 func_001E38F0(s32, s32);
extern void func_0029EA78(void *, void *);
extern void func_0029ECB8(void *, void *);
extern f32 func_003F3140(f32);
extern void func_003FA310(void *, void *, s32, ...);

extern u8 D_00447A60[];
extern u8 D_0044C450[];

typedef f32 (*F3)(f32, f32, f32);

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14[1];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
} A;

typedef struct {
    u8 pad0[0x4];
    void *unk4;
} B;

void func_0014C000(A *arg0, B *arg1) {
    f32 sp[4];
    char sp10[0x10];
    volatile u8 dummy[0x70];
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2;
    f32 result;
    f32 value;
    f32 timer;
    f32 scale;
    s32 total;
    s32 hundred;
    s32 minutes;
    s32 temp_16b;
    s32 temp_2b;

    if (func_001E38F0(func_001E4280(), (s32)&arg0->unk14) == 0) {
        if (arg0->unk1C != 0) {
            temp_16 = (s32)arg1->unk4;
            if (temp_16 != 0) {
                sp[0] = 1.0f;
                sp[1] = 1.0f;
                sp[2] = 1.0f;
                sp[3] = 1.0f;
                if (arg0->unk20 < 450.0f) {
                    value = func_003F3140(arg0->unk20);
                    result = ((F3)func_0015ACE0)(__builtin_fabsf(value), 0.0f, 1.0f);
                    sp[0] = result;
                    sp[1] = result;
                    sp[2] = result;
                    sp[3] = 1.0f;
                    arg0->unk20 = arg0->unk20 + 6.0f;
                } else {
                    arg0->unk1C = 0;
                    arg0->unk20 = 90.0f;
                }
                func_0029EA78((void *)temp_16, sp);
            }
        }
        temp_2 = func_001E3650(func_001E4280(), (s32)&arg0->unk14);
        if (temp_2 != arg0->unk18) {
            arg0->unk18 = temp_2;
            func_003FA310(&sp10, D_0044C450, temp_2, func_001930D8(func_00193B60(), arg0->unkC));
            temp_16_2 = func_001E4280();
            func_001D4040(sp, &sp10);
            timer = func_001E3610(temp_16_2, sp);
            total = (s32)timer;
            scale = timer * 100.0f;
            hundred = (s32)scale;
            minutes = (s32)(timer / 60.0f);
            func_003FA310(&sp10, D_00447A60, minutes, total % 60, hundred % 100);
            temp_16b = (s32)arg1->unk4;
            temp_2b = temp_16b;
            if (temp_2b != 0) {
                func_0029ECB8((void *)temp_16b, &sp10);
            }
            arg0->unk1C = 1;
            arg0->unk20 = 90.0f;
        }
    }
}
