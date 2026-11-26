/* func_0019FDB0.c - simplified version */
#include "context.h"

/* External function prototypes */
extern void *D_002AD408(s32 id);
extern void func_001D4040(void *ptr, const char *name);
extern void func_001E2460(void *ptr1, void *ptr2, s32 flag);
extern void func_001E2B98(void *ptr1, const char *name, s32 flag);
extern void func_001E2C08(void *ptr1, const char *name, f32 value);
extern void func_001E2F18(void *ptr1, const char *name, void *data);

typedef struct {
    s32 unk0;      /* +0x0 */
    s32 unk4;      /* +0x4 */
    s32 unk8;      /* +0x8 */
    s32 unkC;      /* +0xC */
    s32 unk4_2;    /* +0x14 */
    s32 unk10;     /* +0x10 */
    s32 unk14;     /* +0x14 */
    s32 unk18;     /* +0x18 */
    s32 unk1C;     /* +0x1C */
    s32 unk20;     /* +0x20 */
} S_0044DD18;

void *func_0019FDB0(void *arg0) {
    S_0044DD18 *obj = (S_0044DD18 *)D_002AD408(0x24);
    func_001D4040(obj, "gaAiRigidBody");

    /* Zero fields at offsets used in assembly */
    obj->unk0 = 0;          // +0x0
    obj->unk4 = 0;          // +0x4
    obj->unk8 = 0;          // +0x8
    obj->unkC = 0;          // +0xC
    obj->unk4_2 = 0;        // +0x14
    obj->unk18 = 0;         // +0x18
    obj->unk1C = 0;         // +0x1C

    /* Store obj pointer at offset 0x10 */
    *(void **)((char *)obj + 0x10) = obj;

    /* Temporary stack variable */
    S_0044DD18 sp20;

    /* Call other functions */
    func_001E2460(&sp20, obj, 0);
    func_001E2B98(&sp20, "Casts Shadow", 0);
    func_001E2C08(&sp20, "Mass", *(f32 *)((char *)arg0 + 0x12));
    func_001E2C08(&sp20, "Trigger Distance", *(f32 *)((char *)arg0 + 0x16));
    func_001E2C08(&sp20, "MOI", *(f32 *)((char *)arg0 + 0x1A));
    func_001E2F18(&sp20, "MOI", (char *)arg0 + 0x1C);

    return obj;
}
