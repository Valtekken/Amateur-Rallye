struct S_inner {
    u32 *unk0;
    u32 *unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct S_outer {
    u8 pad[0x14];
    struct S_inner *unk14;
};
extern s32 D_0043C000;
extern u32 D_00442170;
extern void *D_002AD5A8(s32 size, s32 count);
extern void D_002AD530(void *ptr);
extern void *func_003F931C(void *dst, const void *src, s32 size);

void func_00317208(struct S_outer *arg0) {
    struct S_inner *p;
    u32 temp_5;
    u32 var_3;
    u32 temp_4;
    u32 temp_16;
    void *temp_2;
    s32 temp_6;
    u32 *buf;

    p = arg0->unk14;

    if ((s32)(p->unk8 - p->unkC) < 0xC) {
        temp_5 = (u32)p->unkC + 0x2Cu;
        D_0043C000 = p->unk10;

        if (temp_5 > 1u) {
            var_3 = 1;
            while ((1u << var_3) < temp_5)
                ++var_3;
        } else {
            var_3 = 0;
        }
        temp_4 = 1u << var_3;

        temp_2 = D_002AD5A8((s32)(temp_4 * 4u), (s32)temp_5);
        temp_16 = (u32)temp_2 + 0x7Fu;
        temp_16 &= 0xFFFFFF80u;

        temp_6 = p->unkC;
        if (temp_6 > 0) {
            func_003F931C((void *)temp_16, p->unk0, temp_6 * 4);
        }

        {
            void *old = p->unk4;
            if (old != 0) {
                p->unk4 = temp_2;
                D_002AD530(old);
                p->unk4 = temp_2;
            }
        }

        p->unk0 = (u32 *)temp_16;
        p->unk8 = (s32)(temp_4 - 0x20u);
        D_0043C000 = 0;
    }

    buf = p->unk0;
    buf[p->unkC] = 0x10000000u; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0u;        p->unkC = p->unkC + 1;
    buf[p->unkC] = 0u;        p->unkC = p->unkC + 1;
    buf[p->unkC] = 0x50000000u; p->unkC = p->unkC + 1;
    buf[p->unkC] = (u32)&D_00442170; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0x03000000u; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0x02000080u; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0x10000000u; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0u;        p->unkC = p->unkC + 1;
    buf[p->unkC] = 0x14000000u; p->unkC = p->unkC + 1;
    buf[p->unkC] = 0u;        p->unkC = p->unkC + 1;
}
