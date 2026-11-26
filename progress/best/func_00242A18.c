extern s32 func_0024C4B8(void *, s32, s32);
extern void func_0024C1A8(void *, void *);
extern void func_0024C388(void *, s32, s32);
extern void func_0024C220(void *, s32);

typedef struct { s32 f0; s32 f4; s32 pad[3]; f32 f14; s32 tail[14]; } Local;
typedef struct { s32 unk0; s32 unk4; s32 pad[3]; f32 unk14; } S;

s32 func_00242A18(void *unused, S *arg1, S *arg2) {
    Local sp;
    f32 f1;
    s32 k1, k0, v5, v6;
    s32 x0;

    if (func_0024C4B8(arg1, arg2->unk0, arg2->unk4) != 0)
        return 1;
    func_0024C1A8(&sp, arg1);
    x0 = sp.f0;
    k0 = arg2->unk0;
    k1 = arg2->unk4;
    f1 = 0.0f;
    if (x0 == k0) { v5 = arg1->unk4; goto call_k1; }
    if (x0 == k1) { v5 = arg1->unk4; goto call_k0; }
    if (sp.f4 == k0) { v5 = arg1->unk0; goto call_k1; }
    if (sp.f4 == k1) { v5 = arg1->unk0; goto call_k0; }
    goto after;
call_k0:
    v6 = k0;
    goto call_common;
call_k1:
    v6 = k1;
call_common:
    func_0024C388(&sp, v5, v6);
    f1 = sp.f14;
after:
    if ((f1 <= arg1->unk14) || (f1 <= arg2->unk14)) {
        func_0024C220(&sp, 2);
        return 1;
    }
    func_0024C220(&sp, 2);
    return 0;
}
