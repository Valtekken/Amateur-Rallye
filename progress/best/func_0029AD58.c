typedef struct { char pad[0x14]; s32 f14; s32 f18; s32 f1C; s32 f20; } A0;
typedef struct { char pad[0x4C]; void *p4C; } A1;
typedef struct N { struct N *next; s16 key; s16 f6; } N;

extern s32 func_00296710();
extern s32 func_00296530(s32, void *);
extern void func_002060F8(void *);
extern s32 func_001D4010(s32);
extern void func_001D2458(void *, s32);
extern s32 func_001CE2F8(void *);
extern s32 func_001D2658(void *, s32, s32, void *);
extern s32 func_003FA9B8(s32);
extern void func_001D2A40(void *, s32, s32);
extern void func_001D22C0(s32, void *, s32);
extern void func_001D2900(void *, void *);
extern void func_001D4810(s32 *, s32);
extern void func_002062A8(void *, s32 *);
extern void func_00205CE0(void *, s16);
extern void D_002AD390(s32);
extern void *func_00206588(void *);
extern void func_002063A0(void *, void *, s32, s32 *, s32 *);
extern char D_0047BE48[];

void func_0029AD58(A0 *arg0, A1 *arg1, s16 arg2) {
    s32 sp0, sp8, sp20, sp60, sp64;
    f32 sp4;
    char sp[0x30], sp10[0x10];
    void *sp30, *sp34, *sp50, *sp54;
    void *t18, *t6, *v;
    s32 t2, t16, r, v5, v6, x, y;
    s16 off;
    N *node;
    volatile char pad[0x20];

    if (func_00296530(func_00296710(), arg1) != 0) {
        t18 = arg1->p4C;
        func_002060F8(t18);
        if (arg0->f14 != 0) {
            func_001D2458(sp, func_001D4010(*(s32 *)((char *)t18 + 8) - 0x28));
            t2 = func_001D2658(sp, 0, func_001CE2F8(sp), D_0047BE48);
            if (t2 != -1) {
                r = sp0 != 0 ? func_003FA9B8(sp0) : 0;
                func_001D2A40(sp, t2, r);
            }
            t16 = arg0->f18;
            func_001D22C0(arg2 / t16, sp10, 0xA);
            func_001D2900(sp, D_0047BE48);
            func_001D2900(sp, sp10);
            sp20 = 0;
            func_001D4810(&sp20, sp0);
            func_002062A8(t18, &sp20);
            func_00205CE0(t18, arg2 % t16);
            D_002AD390(sp0);
        } else {
            sp60 = 0; sp64 = 0;
            t6 = func_00206588(t18);
            off = arg2;
            x = *(s32 *)((char *)t6 + 4);
            y = *(s32 *)((char *)t6 + 8);
            v = (void *)((char *)x + (((u32)(s16)(arg2 % (s16)((y - x) >> 2))) << 2));
            while (v != 0 && *(s16 *)((char *)v + 4) != arg2) {
                v = *(void **)v;
            }
            sp30 = v; sp34 = t6;
            sp50 = 0; sp54 = t6;
            if (v == 0) {
                sp60 = 0; sp64 = 0;
            } else {
                node = (N *)v;
                off = node->f6 * 8;
                sp60 = *(s32 *)((char *)t18 + off);
                sp64 = *(s32 *)((char *)t18 + off + 4);
            }
            if (arg0->f1C == 1) {
                sp60 = sp60 / 2;
                v5 = -sp60;
            } else if (arg0->f1C == 2) {
                v5 = -sp60;
            } else {
                v5 = 0;
            }
            if (arg0->f20 == 1) {
                sp64 = sp64 / 2;
                v6 = -sp64;
            } else if (arg0->f20 == 2) {
                v6 = -sp64;
            } else {
                v6 = 0;
            }
            sp8 = 0;
            sp0 = (s32)(f32)v5;
            sp4 = (f32)v6;
            func_002063A0(t18, sp, -(s32)sp4, &sp60, &sp64);
            func_00205CE0(t18, arg2);
        }
    }
}
