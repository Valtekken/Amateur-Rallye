extern s32 func_001E4280(void);
extern void func_001D4040(s32 *, const char *);
extern s32 func_001E3598(s32, void *);
extern void func_003F9698(const char *, ...);
extern void *func_002CD128(void);
extern s32 func_002CD190(s32 *);
extern s32 func_002CD2B8(void);
extern s32 func_002CD420(void *, const char *);
extern char D_004836D0[];
extern char D_004836E0[];
extern char D_00483730[];
extern char D_00483738[];
extern char D_00483778[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} SoundManager;

s32 func_002CF8B0(SoundManager *sm) {
    s32 e4280_result;
    s32 result;
    s32 temp;
    s32 sp_buffer[4];
    const char *menu_str;
    
    e4280_result = func_001E4280();
    func_001D4040(sp_buffer, D_004836D0);
    result = func_001E3598(e4280_result, sp_buffer);
    if (result != 0) {
        result = sm->unk8;
        func_003F9698(D_004836E0);
        result = sm->unk8;
    }
    if (result != 0) {
        sm->unk8 = 1;
        func_003F9698(D_00483778);
        return 1;
    }
    sm->unk8 = 1;
    temp = (s32)func_002CD128();
    sm->unk24 = temp;
    func_002CD190(&sm->unk24);
    temp = func_002CD2B8();
    sm->unk20 = temp;
    menu_str = D_00483730;
    result = func_002CD420((void *)sm->unk20, menu_str);
    sm->unk24 = result;
    if (result == 0) {
        func_003F9698(D_00483738, menu_str);
    }
    return result;
}
