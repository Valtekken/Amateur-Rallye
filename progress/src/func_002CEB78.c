void *func_002CE9C0(void *, s32);
void func_002CEDC8(s32, f32);
extern f32 D_004297F0;

void func_002CEB78(void *arg0, f32 fparg0) {
    void *v = func_002CE9C0(arg0, 0);
    if (v != 0) {
        func_002CEDC8(*(s32 *)((u8 *)v + 4), fparg0);
        D_004297F0 = fparg0;
    }
}
