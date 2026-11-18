extern void *func_004058E0(s32);
extern __attribute__((noreturn)) s32 func_00405438(s32, void *, s32, s32, s32, s32);

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} S_A08;

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    u32 unk20;
    void *unk24;
    s32 unk28;
    s32 unk2C;
} S_ret;

void func_00405A08(S_A08 *arg0, s32 arg1) {
    S_ret *tmp = func_004058E0(arg1);
    s32 v14 = arg0->unk14;
    s32 v1C = arg0->unk1C;
    tmp->unk14 = v14;
    tmp->unk1C = v1C;
    tmp->unk20 = 0x8000000C;
    func_00405438(0x80000008, tmp, 0x40, arg0->unk20, arg0->unk24, arg0->unk28);
}
