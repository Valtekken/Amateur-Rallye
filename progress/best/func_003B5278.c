extern s32 D_002AD408(s32);
extern void *func_00233B48(s32);
extern void *func_0024F1A0(s32);
extern void func_0024F440(void *, void **);
extern void func_003B5450(void **, s32, void *);

struct ReleaseInfo {
    s16 unk8;
    void (*unkC)(void *, s32, void *);
};

struct RefCountedObj {
    s32 unk0;
    struct ReleaseInfo *unk4;
};

struct Unk8Struct {
    u8 pad[0x80];
    s16 unk80;
    void (*unk84)(void *, f32 *);
};

struct Arg1Type {
    u8 unk00[0x8];
    struct Unk8Struct *unk8;
};

struct Temp18Type {
    struct RefCountedObj *unk0;
    f32 unk4;
};

void *func_003B5278(s32 arg0, struct Arg1Type *arg1) {
    struct RefCountedObj *sp0 = NULL;
    struct RefCountedObj *sp10 = NULL;
    struct RefCountedObj *sp20 = NULL;
    f32 sp30;
    struct Temp18Type *temp18;
    volatile char pad[0x30];

    temp18 = func_00233B48(D_002AD408(0x14));
    func_003B5450((void **)&sp0, arg0, arg1);

    sp10 = func_0024F1A0(D_002AD408(0xC));
    if (sp10 != NULL) {
        sp10->unk0 += 1;
    }

    sp20 = sp0;
    if (sp20 != NULL) {
        sp20->unk0 += 1;
    }

    func_0024F440(sp10, (void **)&sp20);

    sp20 = sp10;
    if (sp20 != NULL) {
        sp20->unk0 += 1;
    }

    if (temp18->unk0 != sp20) {
        if (temp18->unk0 != NULL) {
            temp18->unk0->unk0 -= 1;
            if (temp18->unk0->unk0 == 0) {
                temp18->unk0->unk4->unkC(
                    (void *)((char *)temp18->unk0 + temp18->unk0->unk4->unk8),
                    3,
                    temp18->unk0
                );
            }
        }
        temp18->unk0 = sp20;
        if (sp20 != NULL) {
            sp20->unk0 += 1;
        }
    }

    if (sp20 != NULL) {
        sp20->unk0 -= 1;
        if (sp20->unk0 == 0) {
            sp20->unk4->unkC(
                (void *)((char *)sp20 + sp20->unk4->unk8),
                3,
                sp20
            );
        }
    }

    arg1->unk8->unk84(
        (void *)((char *)arg1 + arg1->unk8->unk80),
        &sp30
    );
    temp18->unk4 = sp30;

    if (sp10 != NULL) {
        sp10->unk0 -= 1;
        if (sp10->unk0 == 0) {
            sp10->unk4->unkC(
                (void *)((char *)sp10 + sp10->unk4->unk8),
                3,
                sp10
            );
        }
    }

    if (sp0 != NULL) {
        sp0->unk0 -= 1;
        if (sp0->unk0 == 0) {
            sp0->unk4->unkC(
                (void *)((char *)sp0 + sp0->unk4->unk8),
                3,
                sp0
            );
        }
    }

    return temp18;
}
