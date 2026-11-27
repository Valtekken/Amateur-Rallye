#include "context.h"

typedef struct {
    /* 0x00 */ u8 pad0[0x08];
    /* 0x08 */ void *vtable;
} StateObj003A78C8;

extern u8 D_004876B8[];
extern u8 D_00487C28[];

extern void func_003A45E8(void *frame_obj, const void *src);
extern void func_003ADA88(StateObj003A78C8 *obj, void *frame_obj);

StateObj003A78C8 *func_003A78C8(StateObj003A78C8 *arg0) {
    u8 stack_ctx[0x40];

    func_003A45E8(stack_ctx, D_004876B8);
    func_003ADA88(arg0, stack_ctx);
    arg0->vtable = D_00487C28;

    return arg0;
}
