extern void func_00112820(void *, void *, void *, s32, f32);
extern void func_00151A28(void *, s32, u32, u32, s32);
extern void func_001525D8(f32 *, f32 *, f32);
extern void func_001537E8(void *, void *, s32);
extern void *func_001539A0(void *, s32, u32, void *, s32, s32);
extern void func_001D4040(void *, void *);
extern void *func_001E37E8(s32, void *);
extern void func_002060F8(void *);
extern void func_002062A8(void *, void *);
extern void func_00206338(void *, void *);
extern void func_002B2028(void *);
extern s32 func_003FA9B8(s32);
extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern char D_00444870[];
extern char D_004466E0[];
extern u32 D_0048D840[], D_0048D850[], D_0048D860[], D_0048D870[];
#define NITEM(l) (((s32)*(s32*)((l)+4) - (s32)*(s32*)(l)) >> 2)
#define STRA (*(u8 **)sp)
#define STRB (*(u8 **)&sp[20])

void func_00112F10(u8 *arg0) {
    f32 sp[24];
    u8 *obj, *list, *p20, *tmp, *hh;
    s32 v16, sel;
    u32 i, idx;
    f32 h, f0, f1, f2;
    f32 *c;
    s32 n;

    obj = *(u8 **)(*(u8 **)(arg0 + 0x60) + 0x4C);
    if (obj == NULL) return;
    func_002060F8(obj);
    v16 = func_001E4280();
    func_001D4040(sp, D_004466E0);
    list = func_001E37E8(v16, sp);
    if (list == NULL) return;
    if (list != *(u8 **)(arg0 + 0x50)) {
        *(u8 **)(arg0 + 0x50) = list;
        *(s32 *)(arg0 + 0x10) = 0;
    }
    func_002062A8(obj, arg0 + 0x54);
    p20 = obj + 0x20;
    sel = func_001E3650(func_001E4280(), (s32)(arg0 + 0x3C));
    c = &sp[20];

    *(s32 *)&sp[21] = 0;
    *(s32 *)&sp[22] = 0;
    *(s32 *)&sp[23] = 0;
    h = sp[21];
    sp[20] = h;
    sp[4] = 1.0f;
    sp[5] = h; sp[6] = h; sp[7] = h;
    c[1] = 1.0f;
    sp[22] = h;
    f0 = sp[20]; f1 = sp[21];
    sp[20] = h; sp[21] = h;
    sp[8] = f0; sp[9] = f1;
    sp[23] = h; sp[10] = h; sp[11] = h;
    c[2] = 1.0f;
    sp[23] = h;
    f0 = sp[20]; f1 = sp[21]; f2 = sp[22];
    sp[12] = f0; sp[13] = f1; sp[14] = f2;
    sp[20] = h; sp[15] = h; sp[21] = h; sp[22] = h;
    c[3] = 1.0f;
    f0 = sp[20]; sp[16] = f0;
    f1 = sp[21]; f0 = sp[22]; f2 = sp[23];
    sp[17] = f1; sp[18] = f0; sp[19] = f2;
    func_001525D8(sp + 4, sp + 4, 1.0f);

    sp[16] = *(f32 *)(obj + 0x50);
    sp[17] = *(f32 *)(obj + 0x54);
    sp[18] = *(f32 *)(obj + 0x58);
    *(f32 *)(obj + 0x20) = sp[4];
    *(f32 *)(p20 + 4) = sp[5];
    *(f32 *)(p20 + 8) = sp[6];
    *(f32 *)(p20 + 12) = sp[7];
    *(f32 *)(obj + 0x30) = sp[8];
    *(f32 *)(obj + 0x34) = sp[9];
    *(f32 *)(obj + 0x38) = sp[10];
    *(f32 *)(obj + 0x3C) = sp[11];
    *(f32 *)(obj + 0x40) = sp[12];
    *(f32 *)(obj + 0x44) = sp[13];
    *(f32 *)(obj + 0x48) = sp[14];
    *(f32 *)(obj + 0x4C) = sp[15];
    *(f32 *)(obj + 0x50) = sp[16];
    *(f32 *)(obj + 0x54) = sp[17];
    *(f32 *)(obj + 0x58) = sp[18];
    *(f32 *)(obj + 0x5C) = sp[19];

    if (sel < *(s32 *)(arg0 + 0x10)) *(s32 *)(arg0 + 0x10) = sel;
    if (sel >= *(s32 *)(arg0 + 0x10) + *(s32 *)(arg0 + 0x14))
        *(s32 *)(arg0 + 0x10) = sel - *(s32 *)(arg0 + 0x14) + 1;
    if (*(s32 *)(arg0 + 0x10) < 0) *(s32 *)(arg0 + 0x10) = 0;

    i = 0;
    if (NITEM(list) != 0 && *(s32 *)(arg0 + 0x14) > 0) {
        do {
            idx = *(s32 *)(arg0 + 0x10) + i;
            if (idx < (u32)NITEM(list)) {
                func_00206338(obj, idx == sel ? D_0048D850 : D_0048D840);
                v16 = *(s32 *)(*(u8 **)list + idx * 4);
                if (D_0040E658[3] != 0) tmp = (u8 *)func_00151930(D_0040E658);
                else { tmp = (u8 *)D_0040E658 + 0x10; D_0040E658[2]++; }
                STRA = tmp;
                func_00151A28(&STRA, 0, 0xFFFFFFFFu, v16, func_003FA9B8(v16));
                n = *(s32 *)(STRA - 0x10);
                if (n != 0) {
                    if (*(u32 *)(STRA - 8) >= 2U) func_001537E8(&STRA, (void *)n, 1);
                    *(s32 *)(STRA - 4) = 1;
                    if (STRA[n - 1] == 0x2A) {
                        if (D_0040E658[3] != 0) tmp = (u8 *)func_00151930(D_0040E658);
                        else { tmp = (u8 *)D_0040E658 + 0x10; D_0040E658[2]++; }
                        STRB = tmp;
                        func_001539A0(&STRB, 0, 0xFFFFFFFFu, STRA, 0, n - 1);
                        hh = STRA - 0x10; n = *(s32 *)(hh + 8) - 1; *(s32 *)(hh + 8) = n;
                        if (n == 0) {
                            if (*(s32 *)(hh + 4) + 0x10 != 0) func_002B2028(hh);
                            else { *(u32 *)hh = D_0040E618[-1]; D_0040E618[-1] = (u32)hh; }
                        }
                        hh = STRB - 0x10;
                        if (*(s32 *)(hh + 12) != 0) tmp = (u8 *)func_00151930(hh);
                        else { tmp = STRB; *(s32 *)(hh + 8) = *(s32 *)(hh + 8) + 1; }
                        STRA = tmp;
                        hh = STRB - 0x10; n = *(s32 *)(hh + 8) - 1; *(s32 *)(hh + 8) = n;
                        if (n == 0) {
                            if (*(s32 *)(hh + 4) + 0x10 != 0) func_002B2028(hh);
                            else { *(u32 *)hh = D_0040E618[-1]; D_0040E618[-1] = (u32)hh; }
                        }
                        func_00206338(obj, idx == sel ? D_0048D870 : D_0048D860);
                    }
                    n = *(s32 *)(STRA - 0x10);
                    if (n == 0) tmp = D_00444870;
                    else { STRA[n] = 0; tmp = STRA; }
                    func_00112820(arg0, obj, tmp, idx == sel, h);
                }
                h += -30.0f;
                hh = STRA - 0x10; n = *(s32 *)(hh + 8) - 1; *(s32 *)(hh + 8) = n;
                if (n == 0) {
                    if (*(s32 *)(hh + 4) + 0x10 != 0) func_002B2028(hh);
                    else { *(u32 *)hh = D_0040E618[-1]; D_0040E618[-1] = (u32)hh; }
                }
            }
            i++;
        } while (i < (u32)NITEM(list) && (s32)i < *(s32 *)(arg0 + 0x14));
    }
}
