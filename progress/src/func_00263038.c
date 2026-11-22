typedef struct { f32 x, y, z, w; } V;
typedef struct { V r[4]; } M;
static inline V *vi(V *p, float x, float y, float z, float w) { p->x=x; p->y=y; p->z=z; p->w=w; return p; }
static inline void vc(V *p, const V *q) { p->x=q->x; p->y=q->y; p->z=q->z; p->w=q->w; }
static inline void identity(M *dst, V *q) {
    char *obj=(char*)dst-32;
    vi(q,1,0,0,0); vc((V*)(obj+32),q);
    vi(q,0,1,0,0); vc((V*)(obj+48),q);
    vi(q,0,0,1,0); vc((V*)(obj+64),q);
    vi(q,0,0,0,1); vc((V*)(obj+80),q);
}
typedef struct {
    s32 unk0; volatile s32 unk4; s32 unk8; s32 unkC; volatile s32 unk10; volatile s32 unk14; s32 unk18; s32 pad1C;
    M mat; s32 unk60; s32 unk64; s32 unk68; s32 unk6C; volatile s64 unk70; volatile s32 unk78;
} UnkStruct;
void func_00263038(UnkStruct *arg0) {
    V q;
    identity(&arg0->mat, &q);
    *(s32 *)((char *)arg0 + 0x70) = 0;
    arg0->unk68 = 4;
    s64 v = arg0->unk70;
    arg0->unk18 = 0; v |= (s64)0x8000 << 19;
    arg0->unk60 = 0; v |= (s64)0x8000 << 17;
    arg0->unk64 = 0; v |= (s64)0x8000 << 18;
    arg0->unk6C = 0; v |= (s64)0x8000 << 20;
    arg0->unk0 = 0;
    arg0->unk70 = v;
    arg0->unk78 = 0; arg0->unk4 = 0; arg0->unk10 = 0; arg0->unk14 = 0;
}
