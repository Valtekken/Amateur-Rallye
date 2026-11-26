extern void func_001DF180(void *, s32);
extern void func_002B2028(s32 *);
extern u32 D_0040E618[];
extern u32 D_004880F0[];

typedef struct { u8 pad0[0x10]; s32 *unk10; u8 pad1[4]; s32 *unk18; u8 padx[4]; s32 *unk20; u8 pad2[4]; s32 *unk28; u8 pady[4]; s32 *unk30; } ListObj;

void func_003C4F98(void *arg0, s32 arg1) {
    ListObj *p = arg0;
    s32 *start1, *end1;
    s32 n1;
    s32 *start2, *end2;
    s32 n2;

    start1 = p->unk28;
    end1 = p->unk30;
    n1 = (s32)((u8 *)end1 - (u8 *)start1) >> 2;
    if (n1 != 0) {
        if ((s32)(n1 << 2) != 0) {
            func_002B2028(start1);
        } else {
            *start1 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start1;
        }
    }
    end2 = p->unk20;
    start2 = p->unk18;
    n2 = (s32)((u8 *)end2 - (u8 *)start2) >> 2;
    if (n2 != 0) {
        if ((s32)(n2 << 2) != 0) {
            func_002B2028(start2);
        } else {
            *start2 = D_0040E618[-1];
            D_0040E618[-1] = (u32)start2;
        }
    }
    p->unk10 = (s32 *)D_004880F0;
    func_001DF180(p, arg1);
}
