extern void func_001D4040(void *, const char *);
extern s32 func_001D4010(s32 *);
extern s32 func_001D4810(s32, s32);
extern s32 *func_001E2460(s32 *, s32);
extern s32 func_001E2470(void *, const char *, s32 *);
extern void func_001E2510(void *, void *, void *);
extern s32 func_001E28F8(void *, void *, void *);
extern void func_003FA310(void *, const char *, s32);

extern u8 D_00477088[];
extern u8 D_00477098[];
extern u8 D_004770B0[];
extern u8 D_004770C8[];
extern u8 D_004770E0[];
extern u8 D_004770F8[];

typedef struct {
    u32 pad0;
    s32 *unk4;
    s32 unk8;
} BitCursor;

typedef struct {
    u8 pad0[0x8];
    s32 unk8;    /* 0x8 count */
    s32 *unkC;   /* 0xC */
    u8 pad10[0x8];
    s32 *unk18;  /* 0x18 */
    u8 pad1C[0x8];
    s32 *unk24;  /* 0x24 */
    u8 pad28[0x8];
    s32 *unk30;  /* 0x30 */
    u8 pad34[0x8];
    s32 *unk3C;  /* 0x3C */
    u8 pad40[0x8];
    u32 pad48;   /* 0x48 */
    s32 *unk4C;  /* 0x4C */
    s32 unk50;   /* 0x50 */
} S_func_001E90E8_arg0;

void func_001E90E8(S_func_001E90E8_arg0 *arg0) {
    s32 sp150;
    s32 sp154;
    s32 sp100;
    s32 sp148arr;
    char sp[0x100];
    s32 i;
    s32 off;
    BitCursor cur;
    s32 *mem;

    i = 0;
    func_001E2460(&sp150, 0);
    if (arg0->unk8 > 0) {
        do {
            func_003FA310(sp, (const char *)D_00477088, i);
            func_001E28F8((void *)&sp150, sp, (void *)(arg0->unkC + i));
            func_003FA310(sp, (const char *)D_00477098, i);
            func_001E2510((void *)&sp150, sp, (void *)(arg0->unk18 + i));
            func_003FA310(sp, (const char *)D_004770B0, i);
            func_001E2510((void *)&sp150, sp, (void *)(arg0->unk30 + i));
            func_003FA310(sp, (const char *)D_004770C8, i);
            func_001E2510((void *)&sp150, sp, (void *)(arg0->unk24 + i));
            func_003FA310(sp, (const char *)D_004770E0, i);
            sp100 = 0;
            func_001E28F8((void *)&sp150, sp, (void *)&sp100);
            func_001D4810(*(s32 *)((u8 *)(arg0->unk3C + i)), func_001D4010(arg0->unk3C + i));
            func_003FA310(sp, (const char *)D_004770F8, i);
            sp154 = 0;
            func_001E2470((void *)&sp150, sp, &sp154);

            cur = *(BitCursor *)((u8 *)arg0 + 0x48);
            off = i + cur.unk8;
            {
                s32 shift = off >> 5;
                s32 rem = off - (shift << 5);
                cur.unk4 += shift;
                if (rem < 0) {
                    cur.unk8 = rem + 32;
                    cur.unk4 -= 1;
                } else {
                    cur.unk8 = rem;
                }
            }
            mem = cur.unk4;
            if (sp154 != 0) {
                *mem |= (1 << cur.unk8);
            } else {
                *mem &= ~(1 << cur.unk8);
            }
            i += 1;
        } while (i < arg0->unk8);
    }
}
