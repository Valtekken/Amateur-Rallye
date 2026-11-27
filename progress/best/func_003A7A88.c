#include "context.h"

typedef struct {
    /* 0x00 */ u8 pad0[0x08];
    /* 0x08 */ void *vtable;
} StateObj003A7A88;

extern u8 D_004876F8[];
extern u8 D_00487BA8[];

extern void func_003A45E8(void *frame_obj, const void *src);
extern void func_003ADA88(StateObj003A7A88 *obj, void *frame_obj);

StateObj003A7A88 *func_003A7A88(StateObj003A7A88 *arg0) {
    u8 stack_ctx[0x40];

    func_003A45E8(stack_ctx, D_004876F8);
    func_003ADA88(arg0, stack_ctx);
    arg0->vtable = D_00487BA8;

    return arg0;
}
