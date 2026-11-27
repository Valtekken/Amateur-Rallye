typedef struct {
    void *unk0;     // 0x00
    void *unk4;     // 0x04
    void *unk8;     // 0x08
    void *unkC;     // 0x0C
    void *unk10;    // 0x10
    void *unk14;    // 0x14
    void *unk18;    // 0x18
    void *unk1C;    // 0x1C
    void *unk20;    // 0x20
    void *unk24;    // 0x24
    void *unk28;    // 0x28
    void *unk2C;    // 0x2C
} Struct_30;

typedef struct {
    char pad[0xC];     // 0x00-0x0B
    s32 unkC;          // 0x0C
    f32 unk10;         // 0x10
    f32 unk14;         // 0x14
    f32 unk18;         // 0x18
    char pad2[4];      // 0x1C
    Struct_30 *unk20;  // 0x20
    Struct_30 *unk24;  // 0x24
} MainStruct;

extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32, s32);
extern f32 func_001948E0(s32);
extern f32 func_00194910(s32);
extern f32 func_00194940(s32);
extern s32 func_00194C40(void);
extern s32 func_002971B0(s32);
extern s32 func_00297500(void);
extern void func_00297398(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3E90(s32, void *, f32);
extern void *func_00160648(void);
extern void *func_0015F890(void);
extern void *func_00262988(s32, void *);
extern void *func_00262BD8(s32, void *);
extern void func_0011F878(void *, void *);
extern void func_001D2458(void *, const char *);
extern void **func_0017E620(void);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(void *);
extern void func_001E3D10(s32, void *, s32);
extern s32 D_004267AC;
extern s32 D_004267B0;
extern char D_004473E0[];
extern char D_00447780[];
extern char D_004477A8[];
extern char D_004477C8[];
extern char D_004477F0[];

void func_0011F270(MainStruct *arg0) {
    char buf0[16];
    char buf1[16];
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    s32 temp_16_5;
    s32 temp_17;
    Struct_30 *temp_3;
    Struct_30 *temp_4;
    Struct_30 *temp_5;
    void **temp_2;
    void *temp_7;
    s32 (*temp_7_fn)(void *, s32, s32, s32);

    arg0->unkC = func_0011DA70(D_002AD408(0x10), 0xF);
    arg0->unk10 = func_001948E0(func_00194C40());
    arg0->unk14 = func_00194910(func_00194C40());
    arg0->unk18 = func_00194940(func_00194C40());
    
    if (func_002971B0(func_00297500()) == -1) {
        func_00297398(func_00297500(), 1);
    }
    
    temp_16 = func_001E4280();
    func_001D4040(buf0, D_00447780);
    func_001E3E90(temp_16, buf0, arg0->unk10);
    
    temp_16_2 = func_001E4280();
    func_001D4040(buf0, D_004477A8);
    func_001E3E90(temp_16_2, buf0, arg0->unk14);
    
    temp_16_3 = func_001E4280();
    func_001D4040(buf0, D_004477C8);
    func_001E3E90(temp_16_3, buf0, arg0->unk18);
    
    temp_16_4 = D_002AD408(0x4C);
    func_001D4040(buf0, func_00160648());
    arg0->unk20 = func_00262988(temp_16_4, buf0);
    
    temp_16_5 = D_002AD408(0x70);
    func_001D4040(buf0, func_0015F890());
    arg0->unk24 = func_00262BD8(temp_16_5, buf0);
    
    temp_3 = arg0->unk20;
    temp_3->unk4 = (void *)1;
    temp_3->unk10 = (void *)0;
    *(f32 *)&temp_3->unk20 = 0.8f;
    
    temp_4 = arg0->unk24;
    if (*(f32 *)&temp_4->unk20 >= 0.05f) {
        D_004267B0 -= 1;
    }
    *(f32 *)&temp_4->unk20 = 0.0f;
    temp_4->unk8 = (void *)1;
    temp_4->unk1C = (void *)1;
    
    temp_5 = arg0->unk24;
    if (temp_5->unk18 == NULL) {
        if (*(f32 *)&temp_5->unk20 >= 0.05f) {
            D_004267B0 += 1;
        }
        D_004267AC += 1;
    }
    temp_5->unk18 = (void *)1;
    
    func_0011F878(arg0, temp_5);
    
    temp_17 = func_001E4280();
    func_001D2458(buf0, D_004473E0);
    temp_2 = func_0017E620();
    temp_7 = temp_2[0];
    temp_7_fn = (s32 (*)(void *, s32, s32, s32))((u8 *)temp_7 + 0x2C);
    temp_7_fn(temp_2 + *(s16 *)((u8 *)temp_7 + 0x28), 0xF, 0, temp_7);
    func_001E3FE0(temp_17, buf0, buf1);
    D_002AD390(buf1);
    D_002AD390(buf0);
    
    temp_16 = func_001E4280();
    func_001D4040(buf0, D_004477F0);
    func_001E3D10(temp_16, buf0, 0);
}
