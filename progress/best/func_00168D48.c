extern void D_002AD390(s32);
extern void func_00168E60(void *, s32);
extern void func_001D29D0(void *, char *, s32, s32);
extern void *func_001D4040(void *, s32);
extern f32 func_001E3610(s32, void *);
extern char D_0044F810[];

void func_00168D48(void *arg0, s32 arg1, s32 arg2) {
    struct { s32 sp0; u8 pad[0xC]; u8 sp10[0x10]; } L;
    s32 temp;

    L.sp0 = 0;
    D_002AD390(0);
    *(f32 *)((char *)arg0 + 0x5C) = (f32)arg2 * 3.0f;
    L.sp0 = 0;
    func_001D29D0(&L.sp0, D_0044F810, arg2 + 1, 3);
    (void)func_001E4280();
    temp = (s32)func_001D4040(L.sp10, L.sp0);
    *(f32 *)((char *)arg0 + 0x58) = func_001E3610(temp, L.sp10);
    *(f32 *)((char *)arg0 + 0x48) = func_001E3610(func_001E4280(), (char *)arg0 + 0x50);
    *(f32 *)((char *)arg0 + 0x4C) = func_001E3610(func_001E4280(), (char *)arg0 + 0x54);
    if (arg1 > 0) {
        if (arg1 == 4) {
            func_00168E60(arg0, 0xA);
        } else {
            func_00168E60(arg0, (arg2 << 1) + arg2 + *(s32 *)((char *)arg0 + 0x64));
        }
    }
    D_002AD390(L.sp0);
}
