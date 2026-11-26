extern s32 func_003F9ED8(void *, s32);
extern s32 func_003FA228(void *, s32, u32);
extern s32 func_003FA288(void *, s32);

struct S9FD8 {
    s32 field0;
    u8 pad[0x1D0];
    u32 table;
};

s32 func_003F9FD8(struct S9FD8 *a, u32 idx) {
    s32 ret = 0;
    s32 *p;
    s32 val;
    u32 base;

    if (idx >= 0x20U) {
        a->field0 = 0x16;
        return -1;
    }
    base = a->table;
    if (base == 0) {
        if (func_003F9ED8(a, idx * 4) != 0) {
            return -1;
        }
        base = a->table;
    }
    p = (s32 *)(base + idx * 4);
    val = *p;
    if (val == 0) {
        return func_003FA228(a, func_003FA288(a, idx * 4), idx);
    }
    if (val > 0) {
        if (val == 1) {
            goto done;
        }
    } else if (val == -1) {
        a->field0 = 0x16;
        ret = 1;
        goto done;
    }
    *p = 0;
    ((void (*)(u32, s32))val)(idx, idx * 4);
done:
    return ret;
}
