typedef struct {
    s32 unk8;
    void *unk10;
    s32 unkC;
    s32 unk4;
    s32 unk0;
    s32 unk14;
    void *unk20;
} Block;

typedef struct {
    s32 unkC; // +0xC
    s32 unk10; // +0x10
    s32 unk14; // +0x14
} Arg0;

extern void *D_002AD408(s32);
extern void func_001D4040(void *, void *);
extern void func_001E2460(void **, void *, s32);
extern void func_001E2C78(void **, void *, s32);

extern char D_00444D00[];
extern char D_004471C8[];
extern char D_004471E8[];
extern char D_004471F8[];
extern char D_0044DD18[]; // 24 bytes

void *func_0011B4E8(void *arg0) {
    Arg0 *a = (Arg0 *)arg0;
    Block *temp_16;
    Block *temp_3;
    char sp[0x70]; // 112-byte stack buffer to match target frame

    temp_16 = (Block *)D_002AD408(0x24);
    func_001D4040(&sp[0], (void *)D_004471C8); // use sp+0 as stack
    temp_3 = (Block *)((char *)temp_16 + 0x14);
    temp_16->unk8 = 0;
    temp_16->unk10 = (void *)D_0044DD18;
    temp_16->unkC = 0;
    temp_16->unk4 = 0;
    temp_16->unk0 = 0;
    temp_16->unk14 = 0;
    temp_3->unk8 = 0;
    temp_3->unk4 = 0;
    temp_16->unk20 = (void *)&sp[0];
    func_001E2460(&sp[0], (void *)temp_16, (s32)&sp[0]);
    func_001E2C78(&sp[0], (void *)D_004471E8, a->unkC);
    func_001E2C78(&sp[0], (void *)D_00444D00, a->unk10);
    func_001E2C78(&sp[0], (void *)D_004471F8, a->unk14);
    return (void *)temp_16;
}
