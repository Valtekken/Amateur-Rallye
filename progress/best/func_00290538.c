extern s32 func_00290450(void*, s32);
extern void func_00290C40(void*, s32);
extern void func_00290F88(void*);
extern void func_00291018(void*);
extern void* func_00201350(void);
extern void*** func_001D6E40(void);
extern s32 D_0042682C;
void func_00290538(void *a, s32 b) {
    if (*(s32*)((char*)a+0x1C) != 0) {
        *(s32*)((char*)a+0x1C) = 0;
        func_00290450(a, b);
    }
    func_00290C40(a, b);
    if (D_0042682C != 0) {
        func_00290F88(a);
        D_0042682C = 0;
    }
    func_00291018(a);
    {
        void **t = func_00201350();
        *(f32*)*t = *(f32*)((char*)a+0x54);
    }
    {
        void **t17 = *func_001D6E40();
        void *t3 = *t17;
        s16 off = *(s16*)((char*)t3+0xE8);
        s32 (*fn)(void*) = *(s32 (**)(void*))((char*)t3+0xEC);
        if (fn((char*)t17 + off) != 0) {
            f32 f = *(f32*)((char*)a+0x20) - 0.1f;
            *(f32*)((char*)a+0x20) = f;
            if (f < 0.0f) *(f32*)((char*)a+0x20) = 0.0f;
            func_00290C40(a, b);
        }
        t3 = *t17;
        off = *(s16*)((char*)t3+0xF0);
        fn = *(s32 (**)(void*))((char*)t3+0xF4);
        if (fn((char*)t17 + off) != 0) {
            f32 f = *(f32*)((char*)a+0x20) + 0.1f;
            *(f32*)((char*)a+0x20) = f;
            if (f > 20.0f) *(f32*)((char*)a+0x20) = 20.0f;
            func_00290C40(a, b);
        }
    }
}
