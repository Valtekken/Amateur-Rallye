s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, 0);
}

f32 func_001B2DF0(void *arg0) {
    f32 t0 = *(f32 *)((u8 *)arg0 + 0x94);
    return (*(f32 *)((u8 *)arg0 + 0xC0) + t0 * *(f32 *)((u8 *)arg0 + 0x28)) / (t0 + 1.0f);
}

f32 func_001B2D60(void *arg0) {
    f32 f0 = func_001D5E70((u8 *)arg0 + 0xD8, -1.0f, 1.0f);
    f32 v84 = *(f32 *)((u8 *)arg0 + 0x84);
    f32 v20 = *(f32 *)((u8 *)arg0 + 0x20);
    f32 v88 = *(f32 *)((u8 *)arg0 + 0x88);
    f32 vBC = *(f32 *)((u8 *)arg0 + 0xBC);
    f32 result = vBC + f0 * v88 + v84 * v20;
    result = result / (v84 + 1.0f);
    return result;
}

f32 func_001B23C0(void *arg0) {
    void **p = *(void ***)((u8 *)arg0 + 0xC8);
    if (p != NULL) {
        void *v = *p;
        return ((f32 (*)(void *, void *, void **))(*(void **)((u8 *)v + 0x1C)))((u8 *)p + *(s16 *)((u8 *)v + 0x18), arg0, p);
    }
    return 0.51f;
}
