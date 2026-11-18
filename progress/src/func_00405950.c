extern void iSignalSema_2(s32);
extern void func_004058C0(void *);
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
    S_inner *s;
    if (type == 0x8000000A) goto caseA;
    if (type > 0x8000000A) goto end;
    if (type == 0x80000009) goto case9;
    goto end;
caseA:
    s = arg0->unk1C;
    if (s->unk1C) s->unk1C(s->unk20);
    goto end;
case9:
    s = arg0->unk1C;
    s->unk24 = (s32)arg0->unk24;
    s->unk14 = (s32)arg0->unk28;
    s->unk18 = (s32)arg0->unk2C;
end:
    s = arg0->unk1C;
    if (s->unk8 >= 0) iSignalSema_2(s->unk8);
    func_004058C0(s->unk0);
    s->unk0 = 0;
}
