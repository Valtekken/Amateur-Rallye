typedef struct E3750_A { u8 pad0[0x14]; u8 *unk14; u8 *unk18; u8 pad1c[4]; u32 unk20; } E3750_A;
typedef struct E3750_B { u8 pad[0xC]; s32 unkC; } E3750_B;
typedef struct E3750_C { u8 pad[0x50]; E3750_B *unk50; } E3750_C;
typedef struct E3750_Elem { void *unk0; s32 unk4; } E3750_Elem;
extern void **func_002DDA20(void);
extern void func_002C6528(u8 **, u32, s32, void *);
extern void *func_00303038(void *, void *);
extern s32 func_002E3630(s32, E3750_C *, void *);
extern s32 func_002E3650(s32, E3750_C *, void *);
extern s32 func_00242C50(s32, s32, void *);
extern s32 func_00244290(s32, void *);
extern s32 func_00244A20(s32, void *);
s32 func_002E3750(s32 arg0, void *arg1, E3750_C *arg2) {
    E3750_A *a;
    E3750_B *b;
    void **va;
    void *v3;
    E3750_Elem *t16;
    s32 t6, t2_4, t3, t5, t7;
    u32 t6u2;
    s32 ret;

    if ((arg2 == NULL) || (arg2->unk50 == NULL) || (arg2->unk50->unkC == 0))
        return 0;

    va = func_002DDA20();
    v3 = NULL;
    b = arg2->unk50;
    t6 = b->unkC;

    if (t6 != 0) {
        a = va[0];
        t7 = (s32)a->unk14;
        if (t6 >= ((s32)(((s32)(u32)a->unk18 - t7) >> 3))) {
            t6u2 = ((u32)t6 + 0x20) & ~0x1Fu;
            t5 = (s32)a->unk18;
            t2_4 = ((s32)((u32)t5 - (u32)t7)) >> 3;
            if (t6u2 < (u32)t2_4) {
                u32 delta = t6u2 - (u32)t2_4;
                t3 = (s32)(delta * 8u) + t7;
                if ((u32)t3 < (u32)t5) {
                    s32 lv = t3;
                    do { lv += 8; } while ((u32)lv < (u32)t5);
                    a->unk18 = (u8 *)(u32)t3;
                } else {
                    a->unk18 = (u8 *)((u32)t5 - delta);
                }
            } else {
                func_002C6528((u8 **)((u8 *)a + 0x14), (u32)t5, (s32)t6u2, &v3);
            }
        }
        t16 = (E3750_Elem *)(a->unk14 + (u32)t6 * 8);
        if (t16->unk4 != a->unk20) {
            t16->unk0 = func_00303038(a, &b->unkC);
            t16->unk4 = (s32)a->unk20;
        }
        v3 = t16->unk0;
    }

    if (v3 != NULL) {
        if (*(s32 *)((u8 *)v3 + 0x30) != 0) {
            return func_00242C50(*(s32 *)((u8 *)v3 + 0x30), 0, arg1);
        }
        if (*(s32 *)((u8 *)v3 + 0x34) != 0) {
            ret = func_002E3630(arg0, arg2, arg1);
            if (ret != 0)
                return func_00244290(ret, arg1);
            return 0;
        }
        if (*(s32 *)((u8 *)v3 + 0x38) != 0) {
            ret = func_002E3650(arg0, arg2, arg1);
            if (ret != 0)
                return func_00244A20(ret, arg1);
        }
    }
    return 0;
}
