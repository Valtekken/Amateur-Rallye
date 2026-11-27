extern s32 D_002AD390(s32);
extern s32 D_002AD408(s32);
extern s32 func_0011DA70(s32, s32);
extern void **func_0017E620(void);
extern void func_001D2458(void *, void *);
extern void func_001D4040(void *, void *);
extern s32 func_001E33C8(s32, s32 *, void *);
extern s32 func_001E3598(s32, s32 *);
extern f32 func_001E3610(s32, s32 *);
extern void func_001E3D10(s32, s32 *, void *);
extern void func_001E3EC0(s32, s32 *, s32);
extern void func_001E3FE0(s32, s32 *, s32 *);
extern f32 *func_002003C0(void);
extern s32 func_002971B0(s32);
extern s32 func_00297398(s32, s32);
extern s32 func_00297500(void);
extern const char D_00444880[];
extern const char D_00444AD0[];
extern const char D_00444B00[];
extern const char D_004473E0[];
extern const char D_00448660[];
extern const char D_00448678[];
extern const char D_00448688[];

void func_00125A50(void *arg0) {
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    f32 f1;
    s32 *sp;

    v1 = func_00297500();
    v2 = func_0011DA70(D_002AD408(0x10), 1);
    if (func_002971B0(v1) == -1) {
        func_00297398(v1, 6);
    }
    v3 = func_001E4280();
    func_001D4040(sp, (void *)&D_00444B00);
    func_001E3D10(v3, sp, 0);
    v4 = func_001E4280();
    func_001D4040(sp, (void *)&D_00444B00);
    func_001E33C8(v4, sp, 0);
    v5 = func_001E4280();
    func_001D4040(sp, (void *)&D_00448660);
    v6 = func_001E3650(v5, (s32)sp);
    *(s32 *)((u8 *)arg0 + 0x14) = v6;
    if (v6 == 0) {
        *(s32 *)((u8 *)arg0 + 0x14) = 0x384;
    }
    *(s32 *)((u8 *)arg0 + 0x14) = *(s32 *)((u8 *)arg0 + 0x14);
    func_001E3610(0, sp);
}
