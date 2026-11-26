extern void func_003F9590(void);
extern void func_003FF678(void);
extern void func_003F9598(void *, s32, s32, s32);
extern void func_003FF118(s64, s64, s64);
extern s64 D_00440908;
extern char D_00440910[];
extern char D_0048C580[], D_0048C5A0[], D_0048C5C0[];
typedef struct __attribute__((packed)) { u64 d[5]; } S40;

void func_003FF8E0(void *a) {
    s32 v18 = (s32)D_00440908;
    s32 v19 = *(s32 *)D_00440910;
    S40 local = *(S40 *)D_00440910;
    void *p = *(void **)((char *)a + 0xC);
    func_003F9590();
    func_003F9598(a, *(s32 *)(D_00440910 + 0x12), *(s32 *)D_00440910, *(s32 *)((char *)&local + 0x1C));
    func_003FF118((s64)(s32)(u32)p, (s64)(s32)*(s32 *)D_0048C580, (s64)(s32)(u32)D_0048C580);
    func_003FF118((s64)(s32)(u32)p, (s64)(s32)*(s32 *)D_0048C5A0, (s64)v19);
    func_003FF118((s64)(s32)(u32)p, (s64)(s32)*(s32 *)D_0048C5C0, (s64)v18);
    func_003FF678();
}
