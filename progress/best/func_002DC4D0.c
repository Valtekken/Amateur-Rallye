extern void *D_002AD408(s32);
extern void *func_00311210(s32);
extern s32 func_003F9698(void *, s32);
extern void func_003280D0(void *, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void *func_002FC4C8(void *, void *, s32);
extern void *func_002DC6E8(void *, s32);
extern void func_0030E9F0(void);
extern void func_0030EDB8(void);
extern s32 func_0032E8E8(void *);
extern s32 func_001D6BB0(s32);
extern void func_001D6B10(s32, s32);
extern s32 func_00329CF8(s32);
extern void func_001D6B60(s32, s32);
extern void *func_00201398(void *);
extern void *func_002015D8(void *);
extern void *func_002E29B0(void);

extern char D_00483F00[];
extern char D_00483F18[];
extern char D_00483F38[];
extern u8 D_00484268[];

typedef struct { f32 x, y, z, w; } Vec4;

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    void *unk14;
    void *unk18;
} GameStruct;

s32 func_002DC4D0(GameStruct *arg0, s32 arg1) {
    Vec4 sp00;
    Vec4 sp10;
    Vec4 sp20;
    void *temp;
    void *p1;
    void *fr;

    func_003F9698(&D_00483F00, 0x30);
    func_003F9698(&D_00483F18, 8);
    func_003F9698(&D_00483F38, 0x40);

    D_002AD408(0x170);
    arg0->unk14 = func_00311210(0x170);

    temp = D_002AD408(0xD0);

    sp00.x = 640.0f; sp00.y = 224.0f; sp00.z = 2048.0f; sp00.w = 2048.0f;
    sp10.x = -1.0f; sp10.y = -1.0f; sp10.z = 1.0f; sp10.w = 1.0f;
    sp20.x = -1.0f; sp20.y = -1.0f; sp20.z = 1.0f; sp20.w = 1.0f;

    func_003280D0(temp, &sp00, &sp10, &sp20,
        640.0f, 0.5f, 1.0f, 1.0f, 0.0f, 32768.0f, 1.0f, 32768.0f);

    arg0->unk18 = temp;

    func_002FC4C8(D_002AD408(0x28), arg0->unk14, arg1);
    arg0->unk0 = func_002DC6E8(arg0, 0);

    func_0030E9F0();
    func_0030EDB8();

    {
        void *vtable = *(void **)((char *)arg0->unk14 + 0x148);
        ((void (*)(void *))(*(void **)((char *)vtable + 0x3C)))
            (arg0->unk14 + *(s16 *)((char *)vtable + 0x38));
    }

    p1 = D_002AD408(0x38);
    func_00201398(p1);
    arg0->unk4 = p1;
    *(void **)p1 = &D_00484268;
    fr = func_002015D8(p1);
    *(void **)fr = p1;

    arg0->unk8 = func_002015D8(func_002E29B0());

    arg0->unkC = func_001D6BB0(func_0032E8E8(arg0->unk14));
    func_001D6B10(arg0->unkC, arg0->unkC);

    arg0->unk10 = func_001D6BB0(func_00329CF8(4));
    func_001D6B60(arg0->unk10, arg0->unk10);

    return 1;
}
