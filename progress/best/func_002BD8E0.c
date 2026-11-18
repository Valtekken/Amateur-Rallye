typedef struct CDThread {
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
} CDThread;

typedef struct CDBlock {
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
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
} CDBlock;

typedef struct CDControl {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    CDThread *unk10;
    CDThread *unk14;
    CDThread *unk18;
} CDControl;

extern s32 GetThreadId_2(void);
extern void WakeupThread_2(s32);
extern void func_002BF798(s32);
extern void func_002CF418(const char *);
extern void func_003F9698(const char *, void *, s32, s32, s32, s32);
extern void func_002BDAE0(void *, const char *, void *);
extern void func_002BF5B0(void *);
extern void func_002BEDD8(s32, s32);

extern s32 D_00428C90;
extern s32 D_00428CCC;
extern s32 D_00428CD0;
extern s32 D_00428CD4;
extern s32 D_00428CD8;
extern s32 D_0042D440;

extern char D_00480730[];
extern char D_00480740[];
extern char D_00480780[];
extern char D_00480788[];
extern char D_004807B0[];

void func_002BD8E0(CDControl *ctrl, CDBlock *block)
{
    s32 var18 = 0;
    s32 var19;
    s32 var2;
    if (block != NULL) {
        var19 = 0;
        D_00428CCC++;
        block->unk5C = GetThreadId_2();
        if (block->unk58 == 0) {
            do {
                func_002BF798(ctrl->unk4);
                if (block->unk58 == 0) {
                    var19++;
                    var18++;
                    if (ctrl->unk8 < var19) {
                        var19 = 0;
                        func_002CF418(D_00480730);
                        func_003F9698(D_00480740, block, ctrl->unk18->unk24, ctrl->unk18->unk20, ctrl->unk10->unk8, ctrl->unk14->unk20);
                        func_002BDAE0(ctrl, D_00480780, block);
                        func_002BF5B0(ctrl->unk14);
                        func_002BF5B0(ctrl->unk18);
                        func_003F9698(D_00480788, 0, 0, 0, 0, 0);
                        WakeupThread_2(ctrl->unk18->unk0);
                    }
                    if (var18 & 1) {
                        D_00428CD4++;
                        func_002BEDD8(ctrl->unk18->unk14, 1);
                        var2 = var18 < 0x65;
                        if ((D_00428CD4 & 0xFF) == 1) {
                            func_003F9698(D_004807B0, (void *)D_00428CCC, D_00428CD0, D_00428CD4, D_00428CD8, 0);
                            goto block_10;
                        }
                    } else {
                        D_00428CD8++;
                        WakeupThread_2(ctrl->unk18->unk0);
block_10:
                        var2 = var18 < 0x65;
                    }
                    if (var2 == 0) {
                        D_00428C90 = 0;
                        D_0042D440 = 1;
                    }
                }
            } while (block->unk58 == 0);
        }
        D_0042D440 = 0;
        D_00428C90 = 1;
        if (var18 == 0) {
            D_00428CD0++;
        }
    }
}
