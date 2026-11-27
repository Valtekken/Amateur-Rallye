extern void *D_002AD408(s32);
extern void *func_00244108(void *, s32);
extern void func_00244230(void *, s32);
extern void func_00244250(void *, s32);
extern void *func_002445B0(void *, s32);
extern void func_002C6528(void *, u32, u32, void *);
extern void **func_002DDA20(void);
extern s32 func_002E3630(void *, void *);
extern s32 func_002E3650(void *, void *);
extern void func_002E3670(void *, void *, void *);
extern void func_002E36E0(void *, void *, void *);
extern void func_002E8E70(void *, void **, void **);
extern void func_002E9030(void *, void **, void **);
extern void *func_00303038(void *, void *);

typedef struct {
    u8 pad0[0xC];
    s32 unkC;   /* 0xC */
} Arg1Sub;

typedef struct {
    u8 pad0[0x50];
    Arg1Sub *unk50; /* 0x50 */
    u8 pad54[0x5C - 0x54];
    s32 unk5C;      /* 0x5C */
} Arg1;

typedef struct {
    u8 pad0[0x28];
    void *unk28;   /* 0x28 */
    u8 pad2C[0x4];
    s32 unk30;     /* 0x30 */
    s32 unk34;     /* 0x34 */
    u8 pad38[0x4];
    s32 unk38;     /* 0x38 */
} Ent;

typedef struct {
    u8 pad0[0x10];
    void *unk0;    /* +0x10 area; keep simple */
} T;

void func_002E2F10(void *this_, Arg1 *arg1, s32 arg2, s32 arg3) {
    Ent *var_16 = NULL;
    void *temp_17 = *func_002DDA20();
    Arg1Sub *temp_2 = arg1->unk50;
    s32 temp_6 = temp_2->unkC;

    if (temp_6 != 0) {
        /* simplified: rely on caller's vector being large enough */
        /* NOTE: original grows a std::vector at temp_17+0x14 */
        void **vec = (void **)((u8 *)temp_17 + 0x14);
        u8 *slot = (u8 *)vec[0] + temp_6 * 8; /* begin + idx*8 */
        if (*(s32 *)(slot + 4) != *(s32 *)((u8 *)temp_17 + 0x20)) {
            *(void **)slot = func_00303038(temp_17, (u8 *)temp_2 + 0xC);
            *(s32 *)(slot + 4) = *(s32 *)((u8 *)temp_17 + 0x20);
        }
        var_16 = *(Ent **)slot;
    }

    if (var_16 != NULL) {
        if (var_16->unk34 != 0) {
            if (func_002E3630(this_, (void *)arg1) == 0) {
                void *p;
                u8 *vec;
                p = func_00244108(D_002AD408(0x20), var_16->unk34);
                func_00244230(p, arg2);
                func_00244250(p, arg3);
                *(s32 *)((u8 *)p + 0x18) = arg1->unk5C;
                vec = (u8 *)this_ + 0x10;
                func_002E8E70(vec, (void **)(vec + 4), &p);
                func_002E36E0(this_, p, (void *)arg1);
            }
        } else {
            void *temp_3_2 = *(void **)((u8 *)var_16 + 0x30);
            if (temp_3_2 != NULL) {
                *(void **)((u8 *)this_ + 0x28) = temp_3_2;
                *(s32 *)((u8 *)temp_3_2 + 0x34) = arg1->unk5C;
                *(s32 *)((u8 *)temp_3_2 + 0x2C) = arg2;
            } else if (*(s32 *)((u8 *)var_16 + 0x38) != 0) {
                if (func_002E3650(this_, (void *)arg1) == 0) {
                    void *p;
                    u8 *vec;
                    p = func_002445B0(D_002AD408(0x74), *(s32 *)((u8 *)var_16 + 0x38));
                    *(s32 *)((u8 *)p + 0) = arg2;
                    *(s32 *)((u8 *)p + 4) = arg3;
                    *(s32 *)((u8 *)p + 8) = arg1->unk5C;
                    vec = (u8 *)this_ + 0x1C;
                    func_002E9030(vec, (void **)(vec + 4), &p);
                    func_002E3670(this_, p, (void *)arg1);
                }
            }
        }
    }
}
