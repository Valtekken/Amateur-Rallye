extern s32 func_001D4010(void *);
extern void func_001D4040(void *, s32);
extern void func_001E15E0(void *, void *, s32);
extern s32 func_003FA388(s32, const char *, s32, s32, s32);
extern s32 func_003FA760(s32, s32);
extern char D_00476AB8[];

typedef struct S0 { s32 f0, f4, f8, fC, f10, f14; } S0;
typedef struct { S0 *s0; s32 f18; } P14;
typedef struct { u8 pad0[0x14]; S0 *s0; s32 f18, f1C, f20; } Arg1;
typedef struct { u8 pad0[0x24]; s32 f24; u8 pad1[0x1C]; s32 f44, f48; } Arg0;

s32 func_001E1320(Arg0 *arg0, Arg1 *arg1, s32 *arg2, s32 arg3) {
    P14 *p;
    S0 *s0;
    s32 count, r, flag;
    s32 buf;

    if (arg1->f20 != arg0->f48) return 0;
    p = (P14 *)((char *)arg1 + 0x14);
    count = (p->f18 - (s32)p->s0) >> 3;
    if (count != 3 && count != 5) return 0;
    s0 = p->s0;
    if (s0->f0 != arg0->f24) return 0;
    if (s0->f8 != arg0->f44) return 0;
    r = func_001D4010((char *)arg0 + 0x50);
    flag = 0;
    if (s0->fC != 0 && r != 0) flag = func_003FA760(r, s0->fC) == 0;
    if (!flag) return 0;
    if (s0->f10 != arg0->f48) return 0;
    func_001D4040(&buf, s0->f4);
    *arg2 = buf;
    if (((p->f18 - (s32)p->s0) >> 3) == 5) func_001E15E0(arg0, arg1, 3);
    return func_003FA388(s0->f14, D_00476AB8, arg3, arg3 + 4, arg3 + 8) == 3;
}
