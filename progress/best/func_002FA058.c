#include "context.h"

typedef struct {
    u8 pad[0x28];
    s16 adjust;
    void (*fn)(void *adjusted_obj, s32 r, void *slot);
} Vtbl_2FA058;

typedef struct {
    u8 pad[0x4];
    Vtbl_2FA058 *vt;
} TargetObj;

extern s32 func_002F9C80(void *);
extern s32 func_00377788(void *);

void func_002FA058(void *arg0, s32 *arg1) {
    u8 *self = (u8 *)arg0;
    s32 idx = *arg1;
    s32 elem_idx;
    u8 *arr24;
    u8 *arr40;
    u8 *slot;
    u8 *entry;
    s32 r;
    TargetObj *obj;
    Vtbl_2FA058 *vt;

    *(s32 *)(self + 0x5C) = idx;
    func_002F9C80(self);

    elem_idx = **(s32 **)(*(u8 **)(self + 0x0) + idx * 4);
    arr40 = *(u8 **)(self + 0x40);
    arr24 = *(u8 **)(self + 0x24);
    slot = arr40 + (idx << 4);
    entry = arr24 + elem_idx * 0x12C;

    r = func_00377788(*(void **)(self + 0x3C));

    obj = *(TargetObj **)entry;
    vt = obj->vt;
    vt->fn((u8 *)obj + vt->adjust, r, slot);
}
