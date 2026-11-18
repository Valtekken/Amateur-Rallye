extern void ***func_001D6BB0(void);
extern s32 func_00200550(void *, void *, f32, f32);
extern s32 func_003B93F0(void *, s32);

void func_003B9258(void *arg0, s32 arg1) {
    void **p = *func_001D6BB0();
    void *vt = *p;
    s32 adj = *(s16 *)((char *)vt + 0x50);
    s32 (*fn)(void *, void **) = *(s32 (**)(void *, void **))((char *)vt + 0x54);
    s32 r = fn((char *)p + adj, p);
    if (r != 0) {
        if (func_00200550(r, (char *)arg0 + 0x1C, *(f32 *)((char *)arg0 + 0x28), 1.0f) != 0) {
            func_003B93F0(arg0, arg1);
        }
    }
}
