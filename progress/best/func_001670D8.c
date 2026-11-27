extern void func_003FA310(char *, const char *, ...);
extern void func_001D4040(char *, const char *);
extern void func_00168258(void *);
extern void *func_00168378(void *);
extern f32 func_00167368(void *, s32);
extern s32 func_00193B60(void);
extern s32 func_001924D0(s32, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3598(s32, void *);
extern void func_00168CA0(void *, s32, s32);
extern void func_00168D48(void *, s32, s32);
extern void *D_002AD408(s32);
extern s32 func_0016CBA8(void *, s32, s32, s32, s32);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern void *func_00262FF8(s32);
extern char D_0044F748[];
extern char D_0044F040[];
extern char D_0044F0A0[];
extern char D_0044F088[];
extern char D_0044F0B8[];
extern char D_0044EA80[];

void func_001670D8(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4, s32 arg5) {
    u8 *a = (u8 *)arg0;
    char sp[0x20];
    char sp20[0x10];
    s32 temp_16;
    s32 temp_4;
    u8 *temp_2;
    u8 *p;
    u8 *q;
    f32 sp30, sp34, sp38;
    f32 temp_f1, temp_f0, temp_f2;
    f32 temp_f0r;
    f32 temp_f3;

    *(s32 *)(a + 0x88) = *arg3;
    func_003FA310(sp, D_0044F748, arg4);
    func_001D4040((char *)(a + 0x8C), sp);
    func_003FA310(sp, D_0044F040, arg1);
    func_001D4040((char *)(a + 0x70), sp);
    func_003FA310(sp, D_0044F0A0, arg1);
    func_001D4040((char *)(a + 0x74), sp);
    func_003FA310(sp, D_0044F088, arg1);
    func_001D4040((char *)(a + 0x7C), sp);
    func_003FA310(sp, D_0044F0B8, arg1);
    func_001D4040((char *)(a + 0x80), sp);

    func_00168258(a);
    *(f32 *)(a + 0x9C) = *(f32 *)((u8 *)func_00168378(a) + 0xC);
    temp_f0r = func_00167368(a, arg1);
    temp_f3 = *(f32 *)(a + 0x9C);
    if (temp_f3 < temp_f0r) {
        *(f32 *)(a + 0x9C) = temp_f3 + (((temp_f0r - temp_f3) / 100.0f) * 8.0f);
    }

    *(s32 *)(a + 0x64) = arg5;
    *(s32 *)(a + 0x68) = func_001924D0(func_00193B60(), arg1);
    temp_16 = func_001E4280();
    func_001D4040(sp20, D_0044EA80);
    if (func_001E3598(temp_16, sp20) != 0) {
        *(s32 *)(a + 0x64) = 3;
    }

    func_00168CA0(a, *(s32 *)(a + 0x64), *(s32 *)(a + 0x68));
    func_00168D48(a, *(s32 *)(a + 0x64), *(s32 *)(a + 0x68));
    *(s32 *)(a + 0x38) = func_0016CBA8(D_002AD408(0x3C), arg2, arg1, *(s32 *)(a + 0x64), *(s32 *)(a + 0x68));

    temp_2 = (u8 *)func_0021E9C0(func_0021F4B0(), a + 0x70);
    if (temp_2 != NULL) {
        temp_4 = *(s32 *)(temp_2 + 0x50);
        if (temp_4 != 0) {
            if (func_00262FF8(temp_4) != NULL) {
                p = (u8 *)func_00262FF8(*(s32 *)(temp_2 + 0x50));
                sp30 = *(f32 *)(p + 0x14);
                sp34 = *(f32 *)(p + 0x18);
                sp38 = *(f32 *)(p + 0x1C);
                q = (u8 *)func_00262FF8(*(s32 *)(temp_2 + 0x50));
                temp_f1 = *(f32 *)(q + 0x20);
                temp_f0 = *(f32 *)(q + 0x24);
                temp_f2 = *(f32 *)(q + 0x28);
                *(f32 *)(a + 0x94) = __builtin_fabsf(temp_f1 - sp30);
                *(f32 *)(a + 0x98) = __builtin_fabsf(temp_f0 - sp34);
                *(f32 *)(a + 0x90) = __builtin_fabsf(temp_f2 - sp38);
            }
        }
    }
}
