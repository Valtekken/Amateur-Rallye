typedef struct Obj110 {
    s32 unk0;
} Obj110;

typedef struct Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x20];
    f32 unk50;
    u8 pad54[0xC];
    s32 unk60;
    u8 pad64[0x4];
    f32 unk68;
    u8 pad6C[0x44];
    f32 unkB0;
    f32 unkB4;
    f32 unkB8;
    f32 unkBC;
    f32 unkC0;
    f32 unkC4;
    f32 unkC8;
    f32 unkCC;
    f32 unkD0;
    f32 unkD4;
    f32 unkD8;
    f32 unkDC;
    u8 padE0[0x30];
    Obj110 *unk110;
    f32 unk114;
    f32 unk118;
    s32 unk11C;
    u8 pad120[0x3C];
    u32 unk15C;
} Obj;

extern s32 func_001AB978(void);
extern void func_001AD740(f32 *out, Obj *obj, f32 arg2);
extern void func_001AE0B0(f32 *a, Obj *obj, f32 *b);
extern void func_001AE278(f32 *a, Obj *obj, f32 *b);
extern void func_001AE718(f32 *a, Obj *obj, f32 *b, f32 *c);
extern void func_001AE740(Obj *obj, s32 arg1);
extern void func_001C3E00(void *arg0);
extern void func_001CB4E8(void *arg0, void *arg1, s32 arg2, f32 *arg3);
extern void *func_00205BF8(void *arg0);
extern void *func_0021E290(void *arg0);
extern void func_0021E4F0(s32 arg0);
extern void func_0021E540(s32 arg0, void *arg1);
extern void *D_002AD408(s32 arg0);

void func_001AA890(Obj *arg0, s32 arg1) {
    s32 sp0[4];
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30;
    f32 f20;
    f32 f21;
    void *p110;
    f32 *pBC;
    f32 *pB0;
    f32 *pC8;
    f32 *pD4;

    p110 = &arg0->unk110;
    if (func_001AB978() == 0) {
        func_0021E4F0(arg1);
    } else {
        f21 = 0.0f;
        pBC = &arg0->unkBC;
        func_001C3E00(p110);
        f20 = 0.0f;
        sp30 = f21;
        sp0[0] = arg0->unk110->unk0;
        func_001CB4E8(p110, sp0, 0x1E, &sp30);
        func_001AD740(sp10, arg0, 1.0f);
        func_001AD740(sp20, arg0, f20);

        pB0 = &arg0->unkB0;
        pB0[0] = sp20[0];
        pB0[1] = sp20[1];
        pB0[2] = sp20[2];
        func_001AE0B0(sp20, arg0, sp10);

        arg0->unkBC = sp20[0];
        pBC[1] = sp20[1];
        pBC[2] = sp20[2];
        func_001AE278(sp20, arg0, pBC);

        pC8 = &arg0->unkC8;
        arg0->unkC8 = sp20[0];
        pC8[1] = sp20[1];
        pC8[2] = sp20[2];
        func_001AE718(sp20, arg0, pBC, pC8);

        pD4 = &arg0->unkD4;
        arg0->unkD4 = sp20[0];
        pD4[1] = sp20[1];
        pD4[2] = sp20[2];
        func_001AE740(arg0, arg1);

        arg0->unk68 = f20;
        if (arg0->unk2C != 0) {
            arg0->unk60 = 0;
        }
        if (arg0->unk50 != f21) {
            arg0->unk114 = f21;
            arg0->unk118 = 30.0f;
            arg0->unk11C = 1;
        } else {
            arg0->unk11C = 0;
        }
    }
    arg0->unk15C = (u32)func_0021E290(D_002AD408(0x7C));
    func_0021E540(arg1, func_00205BF8(D_002AD408(0x90)));
}
