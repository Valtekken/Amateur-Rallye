extern void func_003F931C(void *, void *, s32);
extern void *D_002AD5A8(s32, u32);
extern void D_002AD530(void *);
extern s32 D_0043C000;
extern u8 D_1990[];

typedef struct {
    u32 *unk0;  /* 0x0 */
    u32 *unk4;  /* 0x4 */
    s32 unk8;   /* 0x8 */
    s32 unkC;   /* 0xC */
    s32 unk10;  /* 0x10 */
} Buf;

typedef struct {
    u8 pad0[0x14];
    Buf *unk14; /* 0x14 */
} S_arg0;

void func_0031B418(S_arg0 *arg0, u32 arg1, void *arg2) {
    Buf *b = arg0->unk14;
    s32 cap = b->unkC;

    if (b->unk8 - cap < 0xC) {
        u32 need = (u32)(cap + 0x2C);
        s32 shift = 0;
        s32 sz;
        u32 *old;
        u32 *mem;
        D_0043C000 = b->unk10;
        if (need > 1) {
            do {
                shift += 1;
            } while ((u32)(1 << shift) < need);
        }
        sz = 1 << shift;
        mem = (u32 *)D_002AD5A8(sz * 4, need);
        {
            s32 cur = b->unkC;
            u32 *aligned = (u32 *)(((u32)mem + 0x7F) & 0xFFFFFF80u);
            if (cur > 0) {
                func_003F931C(aligned, b->unk0, cur * 4);
            }
            old = b->unk4;
            if (old != NULL) {
                D_002AD530(old);
            }
            b->unk4 = mem;
            b->unk0 = aligned;
            b->unk8 = sz - 0x20;
        }
        D_0043C000 = 0;
    }

    {
        s32 i = b->unkC;
        u32 *base = b->unk0;
        /* op */
        base[i] = 0x10000002; i += 1; b->unkC = i;
        base[i] = 0; i += 1; b->unkC = i;
        base[i] = 0x01000404; i += 1; b->unkC = i;
        base[i] = 0x6C018000; i += 1; b->unkC = i;
        func_003F931C(base + i, arg2, 0x10);
        /* reload */
        i = b->unkC;
        base = b->unk0;
        base[i + 4] = 0x50000000; b->unkC = i + 4 + 1;
        base[i + 5] = arg1 & 0x0FFFFFFFu; b->unkC = i + 4 + 2;
        base[i + 6] = (((u32)D_1990 >> 3) | 0x14000000u); b->unkC = i + 4 + 3;
        base[i + 7] = 0; b->unkC = i + 4 + 4;
    }
}
