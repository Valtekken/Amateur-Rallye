extern void func_001D4040(void *, const char *);
extern const char D_0044C618[];
extern const char D_0044C640[];

typedef struct {
    s32 start;
    s32 finish;
    s32 end;
} Vec12;

typedef struct {
    s32 unk_00;             /* 0x00 */
    s32 unk_04;             /* 0x04 */
    const char *unk_08;     /* 0x08 */
    s32 unk_0C;             /* 0x0C */
    s32 unk_10;             /* 0x10 */
    s32 unk_14;             /* 0x14 */
    s32 unk_18;             /* 0x18 */
    Vec12 v1C;              /* 0x1C */
    Vec12 v28;              /* 0x28 */
    Vec12 v34;              /* 0x34 */
    Vec12 v40;              /* 0x40 */
    Vec12 v4C;              /* 0x4C */
    Vec12 v58;              /* 0x58 */
    Vec12 v64;              /* 0x64 */
    Vec12 v70;              /* 0x70 */
    Vec12 v7C;              /* 0x7C */
    Vec12 v88;              /* 0x88 */
    Vec12 v94;              /* 0x94 */
    s32 unk_A0;             /* 0xA0 */
    Vec12 vA4;              /* 0xA4 */
    s32 unk_B0;             /* 0xB0 */
    s32 unk_B4;             /* 0xB4 */
    s32 unk_B8;             /* 0xB8 */
} Struct_0014FA88;

static inline void InitVec12(Vec12 *v) {
    v->start = 0;
    v->finish = 0;
    v->end = 0;
}

Struct_0014FA88 *func_0014FA88(Struct_0014FA88 *arg0) {
    s32 k[52];

    func_001D4040(k, D_0044C618);
    arg0->unk_04 = k[0];
    arg0->unk_00 = -1;
    arg0->unk_08 = D_0044C640;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;

    InitVec12(&arg0->v1C);
    InitVec12(&arg0->v28);
    InitVec12(&arg0->v34);
    InitVec12(&arg0->v40);
    InitVec12(&arg0->v4C);
    InitVec12(&arg0->v58);
    InitVec12(&arg0->v64);
    InitVec12(&arg0->v70);
    InitVec12(&arg0->v7C);
    InitVec12(&arg0->v88);
    InitVec12(&arg0->v94);
    InitVec12(&arg0->vA4);

    arg0->unk_B8 = 0;
    return arg0;
}
