extern void iSignalSema_2(s32);
extern void func_004058C0(void *);
extern s32 func_002C8440(void);

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
    if (type == 0x8000000A) {
        S_inner *s = arg0->unk1C;
        if (s->unk1C) s->unk1C(s->unk20);
    } else if (type == 0x80000009) {
        S_inner *s = arg0->unk1C;
        s->unk24 = (s32)arg0->unk24;
        s->unk14 = (s32)arg0->unk28;
        s->unk18 = (s32)arg0->unk2C;
    }
    S_inner *s = arg0->unk1C;
    if (s->unk8 >= 0) iSignalSema_2(s->unk8);
    func_004058C0(s->unk0);
    s->unk0 = 0;
}

s32 func_002C8308(void *arg0, s32 arg1) {
    s32 old = *(s32 *)((u8 *)arg0 + 0x20);
    if (arg1 == 0) func_002C8440();
    *(s32 *)((u8 *)arg0 + 0x20) = arg1;
    return old;
}

s32 func_002C8270(void **arg0, s32 arg1) {
    void *s3 = *arg0;
    f32 r = ((f32(*)(void *, s32, void *, s32))((s32 *)s3)[0x3C])((u8 *)arg0 + (s16)((s16 *)s3)[0x38], arg1 ? 3 : 1, s3, 3);
    return r < -0.3f;
}

s32 func_002C8218(void **arg0, s32 arg1) {
    void *s3 = *arg0;
    f32 r = ((f32(*)(void *, s32, void *))((s32 *)s3)[0x3C])((u8 *)arg0 + (s16)((s16 *)s3)[0x38], arg1 ? 2 : 0, s3);
    return r > 0.3f;
}
