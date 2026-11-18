extern s32 func_003F9698(const char *, ...);
extern u16 D_004288C8[];
extern u16 D_00428910[];
extern char D_0047FE48[];
extern char D_0047FE78[];

s32 func_002BA7F0(register s32 arg0, u8 *arg1, u8 *arg2) {
    volatile s32 sp8;
    volatile s32 spC;
    u8 *volatile sp10 = arg1;
    u8 *volatile sp14 = arg2;
    union { u16 w; struct { u8 lo, hi; } b; } code;

loop_1:
    *(volatile u8 *)&code.b.hi = *sp10;
    sp10 = sp10 + 1;
    *(volatile u8 *)&code.b.lo = *sp10;
    sp10 = sp10 + 1;
    if (code.w > 0x825F && code.w <= 0x8279) {
        *sp14 = (u8)code.w + 0xE1;
        sp14 = sp14 + 1;
        goto block_19;
    }
    if (code.w > 0x8280 && code.w <= 0x829A) {
        *sp14 = (u8)code.w + 0xE0;
        sp14 = sp14 + 1;
        goto block_19;
    }
    if (code.w > 0x824E && code.w <= 0x8258) {
        *sp14 = (u8)code.w + 0xE1;
        sp14 = sp14 + 1;
        goto block_19;
    }
    spC = 0;
    sp8 = 0;
loop_11:
    if (sp8 < 0x21) {
        if (D_004288C8[sp8] == code.w) {
            *sp14 = D_00428910[sp8];
            sp14 = sp14 + 1;
            spC = 1;
        }
        sp8 = sp8 + 1;
        goto loop_11;
    }
    func_003F9698(D_0047FE48, code.w, code.b.lo, code.b.hi);
    if (spC == 0 && code.w != 0) {
        func_003F9698(D_0047FE78);
        return -1;
    }
block_19:
    if (code.w == 0) {
        return 0;
    }
    goto loop_1;
}
