extern void *D_002AD408(s32);
extern void func_00327D08(void *, void *);
extern char D_004854F0[];
typedef struct { s32 ref; void *vt; s32 unk8; s32 unkC; s32 unk10; s32 unk14; s32 unk18; s32 unk1C; s32 inner0; s32 inner4; s32 inner8; s32 innerC; s32 pad[2]; s32 unk38; } S;
typedef struct { s16 pad[0x38]; s16 off; s16 pad2; void (*fn)(void *, void *, s32); } VT;
typedef struct { char pad[0x148]; VT *vt; } A1;

void *func_0031F0A8(void **out, void *arg1, s32 arg2) {
    S *o = (S *)D_002AD408(0x40);
    S *sp0;
    S *last;
    S *inner = (S *)((char *)o + 0x20);
    void *pD = &D_004854F0;
    o->unkC = 2;
    o->unk18 = 0x7FFFFFFF;
    o->vt = pD;
    o->ref = 0;
    o->unk8 = 0;
    o->unk10 = 0;
    o->unk14 = 0;
    inner->ref = 0;
    inner->unkC = 0;
    inner->vt = 0;
    inner->unk8 = 0;
    o->unk38 = 1;
    func_00327D08(o, inner);
    sp0 = o;
    if (o != 0) o->ref++;
    {
        VT *vt = ((A1 *)arg1)->vt;
        s16 off = vt->off;
        void (*fn)(void *, void *, s32) = vt->fn;
        fn((char *)arg1 + off, &sp0, arg2);
    }
    *out = sp0;
    if (sp0 != 0) sp0->ref++;
    last = sp0;
    if (last != 0) {
        s32 r = --last->ref;
        if (r == 0) {
            void *vt2 = last->vt;
            s16 off2 = *(s16 *)((char *)vt2 + 0x8);
            void (*fn2)(void *, s32) = *(void **)((char *)vt2 + 0xC);
            fn2((char *)last + off2, 3);
        }
    }
    return out;
}
