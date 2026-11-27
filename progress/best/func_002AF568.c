extern s32 func_003FA760(s8 *, s8 *);
extern s32 func_003FA9B8(s8 *);
extern s32 func_002AEE70(s8 *, void *);
extern u8 *func_002AEEB8(s32, void *);
extern s8 D_0047D9E0[];
extern s8 D_0047D9E8[];

typedef struct { s32 unk0; s32 unk4; s32 unk8; } S_arg0;
typedef struct { s8 *unk0; s32 unk4; s32 unk8; s32 unkC; s32 unk10; } S_arg1;
typedef struct { s32 v; } __attribute__((packed)) U32;

s8 *func_002AF568(void *arg0, void *arg1) {
    S_arg0 *a0 = (S_arg0 *)arg0;
    S_arg1 *a1 = (S_arg1 *)arg1;
    s8 *t2, *s4, *s0, *tmp, *t22, *r;
    s32 len, sp0;

    t2 = (s8 *)((u32)arg0 - (u32)a0->unk4 + 0xD);
    a1->unk0 = t2;

    if (t2 != 0 && func_003FA760(a1->unk0, D_0047D9E8) != 0 && a1->unk0[0] != 0x7A) {
        return (s8 *)0;
    }
    len = func_003FA9B8(a1->unk0);
    s4 = a1->unk0 + len;
    if (func_003FA760(a1->unk0, D_0047D9E8) == 0) {
        a1->unk4 = 0;
        a1->unk4 = ((U32 *)(s4 + 1))->v;
        s0 = s4 + 5;
    } else {
        s0 = s4 + 1;
    }
    tmp = func_002AEE70(s0, &a1->unk8);
    t22 = (u8 *)func_002AEEB8((s32)tmp, &a1->unkC);
    s0 = (s8 *)t22;
    a1->unk10 = (s32)*s0;
    if (a1->unk0[0] == 0x7A) {
        s0 = s0 + 1;
        r = func_002AEE70(s0, &sp0);
        s0 = (s8 *)((u32)r + (u32)sp0);
    }
    return s0;
}
