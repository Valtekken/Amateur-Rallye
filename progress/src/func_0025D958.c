extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

extern void func_0025DA08(void *, s32, f32);

void func_0025D988(void *arg0) {
    s32 *start = *(s32 **)((u8 *)arg0 + 0xA0);
    s32 *end = *(s32 **)((u8 *)arg0 + 0xA4);
    s32 count = (end - start);
    count = count >> 2;
    if (count <= 0) return;
    s32 i = 0;
    f32 *begin = *(f32 **)((u8 *)arg0 + 0x00);
    do {
        func_0025DA08(arg0, start[i], begin[i]);
        i++;
    } while (i < count);
}

extern f32 func_0023BC60(void *);

f32 func_0025D958(void *arg0, void *arg1) {
    f32 t = *(f32 *)((u8 *)arg1 + 0x20);
    f32 r = func_0023BC60(arg1);
    return t * r + r;
}

void func_0025CE90(void *arg0) {
    s32 *start = *(s32 **)((u8 *)arg0 + 0xA0);
    s32 *end = *(s32 **)((u8 *)arg0 + 0xA4);
    s32 count = (end - start) >> 2;
    s32 i = 0;
    if (count <= 0) return;
    do {
        func_0023BC60((void *)start[i]);
        i++;
    } while (i < count);
}
