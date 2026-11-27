#include "context.h"

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ u8 pad4[0x14];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ u8 pad1C[0x08];
    /* 0x24 */ f32 unk24;
} Ctx0015AE38;

extern u8 D_00444880[];

extern Ctx0015AE38 *func_002003C0(void);
extern s32 func_001E4280(void);
extern void func_001D4040(void *dst, const void *src);
extern f32 func_001E3610(s32 arg0, void *obj);

void func_0015AE38(void) {
    u8 stack_obj[0x40];
    Ctx0015AE38 *ctx1 = func_002003C0();
    s32 arg = func_001E4280();
    Ctx0015AE38 *ctx2;

    func_001D4040(stack_obj, D_00444880);
    ctx1->unk24 = func_001E3610(arg, stack_obj);

    ctx2 = func_002003C0();
    ctx2->unk0 = 0.9f;
    ctx2->unk18 = 0;
}
