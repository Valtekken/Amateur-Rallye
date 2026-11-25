#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define G(base, off) (*(void **)((char *)&(base)[0] + (off)))
#define GH(base, off) (*(void ***)((char *)&(base)[0] + (off)))
extern void *D_002AD5A8(s32, void *);
extern void *func_00152D28(s32, void *);
extern void func_001CAB58(void *, void *, void *);
extern void func_001CAD18(void *, void *, void *);
extern void func_0024C028(void *);
extern void func_0024C7E0(void *, s32, void *, void *, void *);
extern void func_00259168(void *);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *, s32, void *);
extern void *func_003D2910(s32);
extern void func_003F93CC(void *, void *, s32);
extern char D_0040E618[], D_00426728[], D_0042672C[], D_00426778[], D_0042677C[];
void func_002525F8(s32 unused, s32 argSize, void *arg2, void *arg3, void ***arg4) {
    void *sp0, *sp4, *sp8, *spC, *sp10, *sp14, *sp16, *sp18, *sp1C, *sp20, *sp24, *sp28, *sp2C, *sp30;
    s32 sp34, v21, v19;
    void *sp38, *sp3C, *sp44, *sp48, *sp4C, *sp50, *sp54;
    void ***sp40;
    void **sp58, **sp5C, **sp60, **sp64, **sp68, **sp6C;
    void **temp2;
    void *temp3;
    sp40 = arg4; sp34 = argSize; temp2 = (void **)*arg4; sp38 = arg2; sp3C = arg3;
    temp3 = *temp2; sp44 = temp3;
    if (temp3 != (void *)temp2) {
        do {
            void *p16, *p16_2, *sp0v, *temp17, *temp19, *p2;
            void **temp18, **temp20;
            s32 a21, a17, a18, a20;
            sp48 = M2C_FIELD(sp44, void **, 8);
            sp5C = &sp1C; sp64 = &sp28; sp50 = (void *)((char *)sp38 + 0xC); sp68 = &sp2C;
            temp17 = (void *)((char *)sp3C + 0xC); sp8 = NULL; sp54 = temp17; sp6C = &sp30;
            if (G(D_00426778, 4) == G(D_0042677C, 4)) {
                v21 = 0x3F;
                temp18 = (void **)D_002AD5A8(0xA10, &D_00426778[0]);
                sp58 = &sp4; p16 = (char *)temp18 + 0x10; *temp18 = (void *)0x40;
                temp19 = (char *)&D_00426778[0] + 4; p16_2 = p16; temp17 = (char *)&D_00426778[0] + 0x1C;
                do { v21 -= 1; func_00259168(p16_2); p16_2 = (char *)p16_2 + 0x28; } while (v21 != -1);
                temp20 = M2C_FIELD(temp17, void **, 4); sp0 = p16;
                if ((void *)temp20 != M2C_FIELD(temp17, void **, 8)) {
                    if (temp20 != NULL) *temp20 = p16;
                    M2C_FIELD(temp17, void **, 4) = (void *)((char *)M2C_FIELD(temp17, void **, 4) + 4);
                } else { func_001CAB58(temp17, (void *)temp20, &sp0); }
                p2 = M2C_FIELD(temp19, void **, 4);
                a21 = ((s32)((char *)p2 - (char *)G(D_00426778, 4))) >> 2; a17 = a21 + 0x40;
                if ((u32)(((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)G(D_00426778, 4))) >> 2) < (u32)a17) {
                    a18 = a17 * 4;
                    if (a17 != 0) {
                        if (a18 != 0) { p16_2 = func_002B1FC0(a18); if (p16_2 == NULL) p16_2 = func_003D2910(a18); }
                        else if (GH(D_0040E618, -4) != NULL) { p16_2 = GH(D_0040E618, -4); G(D_0040E618, -4) = *GH(D_0040E618, -4); }
                        else { p16_2 = func_00152D28(0, &D_0040E618[0]); }
                    } else { p16_2 = NULL; a18 = 0; }
                    func_003F93CC(p16_2, G(D_00426778, 4), a21 * 4);
                    a20 = ((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)G(D_00426778, 4))) >> 2;
                    if (a20 != 0) {
                        if (a20 * 4 != 0) { func_002B2028(G(D_00426778, 4), a20 * 4, &D_0040E618[0]); }
                        else { G(D_00426778, 4) = GH(D_0040E618, -4); G(D_0040E618, -4) = G(D_00426778, 4); }
                    }
                    M2C_FIELD(temp19, void **, 8) = (char *)p16_2 + a18;
                    M2C_FIELD(temp19, void **, 4) = (char *)p16_2 + a21 * 4;
                    G(D_00426778, 4) = p16_2;
                }
                a18 = 0; a17 = 0x3F;
                do {
                    temp20 = M2C_FIELD(temp19, void **, 4); sp0v = (char *)sp0 + a18; sp4 = sp0v;
                    if ((void *)temp20 != M2C_FIELD(temp19, void **, 8)) {
                        if (temp20 != NULL) *temp20 = sp0v;
                        M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) + 4);
                    } else { func_001CAB58(temp19, (void *)temp20, sp58); }
                    a17 -= 1; a18 += 0x28;
                } while (a17 >= 0);
            }
            temp19 = (char *)&D_00426778[0] + 0x10;
            temp20 = M2C_FIELD(M2C_FIELD(G(D_0042677C, 4), void **, 0), void **, -4);
            G(D_0042677C, 4) = (char *)G(D_0042677C, 4) - 4; sp8 = (void *)temp20;
            temp20 = M2C_FIELD(temp19, void **, 4);
            if ((void *)temp20 != M2C_FIELD(temp19, void **, 8)) {
                if (temp20 != NULL) *temp20 = (void *)temp20;
                M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) + 4);
            } else { func_001CAB58(temp19, (void *)temp20, &sp8); }
            sp4C = sp8; temp20 = M2C_FIELD(sp38, void **, 4); spC = sp4C;
            if ((void *)temp20 != M2C_FIELD(sp38, void **, 8)) {
                if (temp20 != NULL) *temp20 = sp4C;
                M2C_FIELD(sp38, void **, 4) = (void *)((char *)M2C_FIELD(sp38, void **, 4) + 4);
            } else { func_001CAB58(sp38, (void *)temp20, &spC); }
            temp20 = M2C_FIELD(sp3C, void **, 4); sp10 = sp4C;
            if ((void *)temp20 != M2C_FIELD(sp3C, void **, 8)) {
                if (temp20 != NULL) *temp20 = sp4C;
                M2C_FIELD(sp3C, void **, 4) = (void *)((char *)M2C_FIELD(sp3C, void **, 4) + 4);
            } else { func_001CAB58(sp3C, (void *)temp20, &sp10); }
            sp1C = NULL;
            if (G(D_00426728, 4) == G(D_0042672C, 4)) {
                s32 b21, b17, b18, b20;
                v19 = 0x3F; temp18 = (void **)D_002AD5A8(0x1210, &D_00426728[0]);
                temp19 = (char *)&D_00426728[0] + 4; p16 = (char *)temp18 + 0x10; *temp18 = (void *)0x40;
                p16_2 = p16; temp17 = (char *)&D_00426728[0] + 0x1C;
                do { v19 -= 1; func_0024C028(p16_2); p16_2 = (char *)p16_2 + 0x48; } while (v19 != -1);
                temp20 = M2C_FIELD(temp17, void **, 4); sp14 = p16;
                if ((void *)temp20 != M2C_FIELD(temp17, void **, 8)) {
                    if (temp20 != NULL) *temp20 = p16;
                    M2C_FIELD(temp17, void **, 4) = (void *)((char *)M2C_FIELD(temp17, void **, 4) + 4);
                } else { func_001CAD18(temp17, (void *)temp20, &sp14); }
                p2 = G(D_00426728, 4);
                b21 = ((s32)((char *)M2C_FIELD(temp19, void **, 4) - (char *)p2)) >> 2; b17 = b21 + 0x40;
                if ((u32)(((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)p2)) >> 2) < (u32)b17) {
                    b18 = b17 * 4;
                    if (b17 != 0) {
                        if (b18 != 0) { p16_2 = func_002B1FC0(b18); if (p16_2 == NULL) p16_2 = func_003D2910(b18); }
                        else if (GH(D_0040E618, -4) != NULL) { p16_2 = GH(D_0040E618, -4); G(D_0040E618, -4) = *GH(D_0040E618, -4); }
                        else { p16_2 = func_00152D28(0, &D_0040E618[0]); }
                    } else { p16_2 = NULL; b18 = 0; }
                    func_003F93CC(p16_2, p2, b21 * 4);
                    b20 = ((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)G(D_00426728, 4))) >> 2;
                    if (b20 != 0) {
                        if (b20 * 4 != 0) { func_002B2028(G(D_00426728, 4), b20 * 4, &D_0040E618[0]); }
                        else { G(D_00426728, 4) = GH(D_0040E618, -4); G(D_0040E618, -4) = G(D_00426728, 4); }
                    }
                    M2C_FIELD(temp19, void **, 8) = (char *)p16_2 + b18;
                    M2C_FIELD(temp19, void **, 4) = (char *)p16_2 + b21 * 4;
                    G(D_00426728, 4) = p16_2;
                }
                b18 = 0; b17 = 0x3F;
                do {
                    temp20 = M2C_FIELD(temp19, void **, 4); sp0v = (char *)sp14 + b18; sp18 = sp0v;
                    if ((void *)temp20 != M2C_FIELD(temp19, void **, 8)) {
                        if (temp20 != NULL) *temp20 = sp0v;
                        M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) + 4);
                    } else { func_001CAD18(temp19, (void *)temp20, &sp18); }
                    b17 -= 1; b18 += 0x48;
                } while (b17 >= 0);
            }
            {
                s32 c20;
                temp19 = (char *)&D_00426728[0] + 4; temp17 = (char *)&D_00426728[0] + 0x10;
                temp20 = M2C_FIELD(temp19, void **, 4);
                c20 = (s32)M2C_FIELD(M2C_FIELD((void *)temp20, void **, 0), void **, -4);
                M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) - 4);
                sp1C = (void *)c20; temp20 = M2C_FIELD(temp17, void **, 4);
                if ((void *)temp20 != M2C_FIELD(temp17, void **, 8)) {
                    if (temp20 != NULL) *temp20 = (void *)c20;
                    M2C_FIELD(temp17, void **, 4) = (void *)((char *)M2C_FIELD(temp17, void **, 4) + 4);
                } else { func_001CAD18(temp17, (void *)temp20, sp5C); }
            }
            sp28 = NULL;
            if (G(D_00426728, 4) == G(D_0042672C, 4)) {
                s32 d21, d17, d18, d20;
                v19 = 0x3F; temp18 = (void **)D_002AD5A8(0x1210, &D_00426728[0]);
                temp19 = (char *)&D_00426728[0] + 4; sp60 = &sp24; p16 = (char *)temp18 + 0x10;
                *temp18 = (void *)0x40; p16_2 = p16; temp17 = (char *)&D_00426728[0] + 0x1C;
                do { v19 -= 1; func_0024C028(p16_2); p16_2 = (char *)p16_2 + 0x48; } while (v19 != -1);
                temp20 = M2C_FIELD(temp17, void **, 4); sp20 = p16;
                if ((void *)temp20 != M2C_FIELD(temp17, void **, 8)) {
                    if (temp20 != NULL) *temp20 = p16;
                    M2C_FIELD(temp17, void **, 4) = (void *)((char *)M2C_FIELD(temp17, void **, 4) + 4);
                } else { func_001CAD18(temp17, (void *)temp20, &sp20); }
                p2 = G(D_00426728, 4);
                d21 = ((s32)((char *)M2C_FIELD(temp19, void **, 4) - (char *)p2)) >> 2; d17 = d21 + 0x40;
                if ((u32)(((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)p2)) >> 2) < (u32)d17) {
                    d18 = d17 * 4;
                    if (d17 != 0) {
                        if (d18 != 0) { p16_2 = func_002B1FC0(d18); if (p16_2 == NULL) p16_2 = func_003D2910(d18); }
                        else if (GH(D_0040E618, -4) != NULL) { p16_2 = GH(D_0040E618, -4); G(D_0040E618, -4) = *GH(D_0040E618, -4); }
                        else { p16_2 = func_00152D28(0, &D_0040E618[0]); }
                    } else { p16_2 = NULL; d18 = 0; }
                    func_003F93CC(p16_2, p2, d21 * 4);
                    d20 = ((s32)((char *)M2C_FIELD(temp19, void **, 8) - (char *)G(D_00426728, 4))) >> 2;
                    if (d20 != 0) {
                        if (d20 * 4 != 0) { func_002B2028(G(D_00426728, 4), d20 * 4, &D_0040E618[0]); }
                        else { G(D_00426728, 4) = GH(D_0040E618, -4); G(D_0040E618, -4) = G(D_00426728, 4); }
                    }
                    M2C_FIELD(temp19, void **, 8) = (char *)p16_2 + d18;
                    M2C_FIELD(temp19, void **, 4) = (char *)p16_2 + d21 * 4;
                    G(D_00426728, 4) = p16_2;
                }
                d18 = 0; d17 = 0x3F;
                do {
                    temp20 = M2C_FIELD(temp19, void **, 4); sp0v = (char *)sp20 + d18; sp24 = sp0v;
                    if ((void *)temp20 != M2C_FIELD(temp19, void **, 8)) {
                        if (temp20 != NULL) *temp20 = sp0v;
                        M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) + 4);
                    } else { func_001CAD18(temp19, (void *)temp20, sp60); }
                    d17 -= 1; d18 += 0x48;
                } while (d17 >= 0);
            }
            {
                s32 e20;
                temp19 = (char *)&D_00426728[0] + 4; temp17 = (char *)&D_00426728[0] + 0x10;
                temp20 = M2C_FIELD(temp19, void **, 4);
                e20 = (s32)M2C_FIELD(M2C_FIELD((void *)temp20, void **, 0), void **, -4);
                M2C_FIELD(temp19, void **, 4) = (void *)((char *)M2C_FIELD(temp19, void **, 4) - 4);
                sp28 = (void *)e20; temp20 = M2C_FIELD(temp17, void **, 4);
                if ((void *)temp20 != M2C_FIELD(temp17, void **, 8)) {
                    if (temp20 != NULL) *temp20 = (void *)e20;
                    M2C_FIELD(temp17, void **, 4) = (void *)((char *)M2C_FIELD(temp17, void **, 4) + 4);
                } else { func_001CAD18(temp17, (void *)temp20, sp64); }
            }
            temp20 = M2C_FIELD(sp50, void **, 4); sp2C = sp1C;
            if ((void *)temp20 != M2C_FIELD(sp50, void **, 8)) {
                if (temp20 != NULL) *temp20 = sp1C;
                M2C_FIELD(sp50, void **, 4) = (void *)((char *)M2C_FIELD(sp50, void **, 4) + 4);
            } else { func_001CAD18(sp50, (void *)temp20, sp68); }
            temp20 = M2C_FIELD(sp54, void **, 4); sp30 = sp28;
            if ((void *)temp20 != M2C_FIELD(sp54, void **, 8)) {
                if (temp20 != NULL) *temp20 = sp28;
                M2C_FIELD(sp54, void **, 4) = (void *)((char *)M2C_FIELD(sp54, void **, 4) + 4);
            } else { func_001CAD18(sp54, (void *)temp20, sp6C); }
            func_0024C7E0(sp48, sp34, sp30, sp16, sp4C);
            M2C_FIELD(sp48, void **, 0x20) = sp1C;
            M2C_FIELD(sp48, void **, 0x28) = sp4C;
            M2C_FIELD(sp48, void **, 0x24) = sp28;
            sp44 = M2C_FIELD(sp44, void **, 0);
        } while (sp44 != *sp40);
    }
}
