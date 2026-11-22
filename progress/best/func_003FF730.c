typedef struct __attribute__((packed, aligned(1))) {
    u64 f0;
    u64 f1;
    u64 f2;
    u64 f3;
    u64 f4;
} Struct40;

extern Struct40 D_00440910;
extern void func_003F9590(s32);
extern void func_003FF678(void);
extern void func_003F9598(s32, Struct40 *);

s32 func_003FF730(s32 arg0, s32 arg1) {
    Struct40 temp;
    func_003F9590(arg1);
    func_003FF678();
    temp = D_00440910;
    func_003F9598(arg1, &temp);
    *(Struct40 *)arg0 = temp;
    return arg0;
}
