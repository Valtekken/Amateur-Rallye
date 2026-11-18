extern void iSignalSema_2(s32);
extern void func_004058C0(void *);
extern s32 func_00405CC0(void *, s32, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004411BC;
extern u8 D_004A1300[];
extern s32 D_004A1340;
extern s32 D_004A1380;

typedef struct {
    void *unk0;
    s32 pad1;
    s32 unk8;
    u8 pad2[0x14 - 0xC];
    s32 unk14;
    s32 unk18;
    void (*unk1C)(s32);
    s32 unk20;
    s32 unk24;
} S_inner;
typedef struct { s32 pad0[7]; S_inner *unk1C; u32 unk20; u32 unk24; u32 unk28; u32 unk2C; } S_00405950;

void func_00405950(S_00405950 *arg0) {
    u32 type = arg0->unk20;
    S_inner *s = arg0->unk1C;
    if (type == 0x8000000A) {
        if (s->unk1C) s->unk1C(s->unk20);
    } else if (type == 0x80000009) {
        s->unk24 = (s32)arg0->unk24;
        s->unk14 = (s32)arg0->unk28;
        s->unk18 = (s32)arg0->unk2C;
    }
    if (s->unk8 >= 0) iSignalSema_2(s->unk8);
    func_004058C0(s->unk0);
    s->unk0 = 0;
}

s32 func_00409C48(void) {
    for (;;) {
        s32 res = func_00405CC0(&D_004A1300, 0x80000003, 0);
        if (res < 0) return -1;
        if (*(s32 *)((u8 *)&D_004A1300 + 0x24) != 0) {
            D_004411BC = 0;
            return 0;
        }
        s32 i = 0xFFFF;
        do { i += 0xFFFF; } while (i != -1);
    }
}

s32 func_00409D40(s32 arg0, s32 arg1, s32 arg2) {
    if (D_004411BC < 0) return 0;
    *(s32 *)&D_004A1380 = arg1;
    *(s32 *)((u8 *)&D_004A1380 + 4) = arg0;
    *(s32 *)((u8 *)&D_004A1380 + 8) = arg2;
    if (func_00405E90(&D_004A1300, 4, 0, &D_004A1380, 0xC, &D_004A1340, 4, 0, 0) >= 0)
        return D_004A1340;
    return 0;
}

s32 func_00409DC0(s32 arg0) {
    if (D_004411BC < 0) return 0;
    D_004A1380 = arg0;
    if (func_00405E90(&D_004A1300, 2, 0, &D_004A1380, 4, &D_004A1340, 4, 0, 0) >= 0)
        return D_004A1340;
    return -1;
}
