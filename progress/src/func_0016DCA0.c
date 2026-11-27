extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

struct S_unkB {
    u8 _pad0[8];
    s16 unk8;
    u8 _pad1[2];
    void (*unkC)(void *, s32, void *);
};

struct S_unkA {
    u8 _pad0[0x14];
    struct S_unkB *unk14;
};

struct S_arg0 {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _pad1[4];
    s32 unk10;
    s32 unk14;
    u8 _pad2[4];
    s32 unk1C;
    s32 unk20;
    u8 _pad3[4];
    s32 unk28;
    s32 unk2C;
    u8 _pad4[4];
    s32 unk34;
    s32 unk38;
    u8 _pad5[4];
    s32 unk40;
    s32 unk44;
    u8 _pad6[4];
    s32 unk4C;
};

void func_0016DCA0(struct S_arg0 *arg0, s32 arg1) {
    void *a = arg0->unk4;
    if (a != NULL) {
        struct S_unkB *b = ((struct S_unkA *)a)->unk14;
        b->unkC((void *)((char *)a + b->unk8), 3, a);
    }
    {
        s32 end = arg0->unk4C;
        s32 base = arg0->unk44;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    {
        s32 end = arg0->unk40;
        s32 base = arg0->unk38;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    {
        s32 end = arg0->unk34;
        s32 base = arg0->unk2C;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    {
        s32 end = arg0->unk28;
        s32 base = arg0->unk20;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    {
        s32 end = arg0->unk1C;
        s32 base = arg0->unk14;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    {
        s32 end = arg0->unk10;
        s32 base = arg0->unk8;
        s32 n = (end - base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028((void *)(u32)base);
            } else {
                *(u32 *)(u32)base = D_0040E618[-1];
                D_0040E618[-1] = base;
            }
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
