extern s32 D_002AD390(s32);
extern s32 func_001CE2F8(void *);
extern void func_001D2458(void *, s32);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern void func_001D2A40(void *, s32, s32);
extern s32 func_003FA388(s32, void *, f32 *);
extern s32 func_003FA9B8(s32);
extern const char D_00477558[];
extern const char D_00477568[];
extern const char D_00477578[];
extern const char D_00477588[];
extern const char D_00477598[];
extern const char D_004775A0[];
extern const char D_004775A8[];

void func_001F1EF0(void *arg0, void *arg1) {
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    f32 f1;

    v1 = func_001D24B8((u8 *)arg1 + 0x54, 0, func_001CE2F8((u8 *)arg1 + 0x54), (void *)&D_00477558);
    if (v1 == -1) {
        *(s32 *)((u8 *)arg1 + 0x48) = 0;
    } else {
        *(s32 *)((u8 *)arg1 + 0x48) = 1;
    }
    v2 = func_001D24B8((u8 *)arg1 + 0x54, 0, func_001CE2F8((u8 *)arg1 + 0x54), (void *)&D_00477568);
    if (v2 == -1) {
        *(s32 *)((u8 *)arg1 + 0x4C) = 2;
    } else {
        *(s32 *)((u8 *)arg1 + 0x4C) = 0;
    }
    *(f32 *)((u8 *)arg1 + 0x50) = 1.0f;
    v3 = func_001D24B8((u8 *)arg1 + 0x54, 0, func_001CE2F8((u8 *)arg1 + 0x54), (void *)&D_00477598);
    if (v3 == -1) {
        goto L_20DC;
    }
    v4 = func_001D24B8((u8 *)arg1 + 0x54, 0, func_001CE2F8((u8 *)arg1 + 0x54), (void *)&D_004775A0);
    if (v4 == -1) {
        goto L_20DC;
    }
    if (func_003FA9B8(0) != 0) {
        func_001D2A40(0, 0, func_003FA9B8(0));
    }
    if (func_003FA388(0, (void *)&D_004775A8, &f1) == 1) {
        *(f32 *)((u8 *)arg1 + 0x50) = f1;
    }
L_20DC:
    func_002AD390(0);
}
