extern s32 D_004262B0;
extern void func_001D4B78(void *, s32);
extern s32 func_001D65A0(s32 *, void *);
extern void func_001DFF90(void *, s32 *);
extern void func_001D6588(s32 *, s32);
extern s32 D_002AD5A8(s32);
extern void func_003F931C(s32, s32, s32);
extern void func_001D4BD8(void *, s32);

s32 func_001DF640(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    volatile char stack_frame[0x30];
    s32 temp_17;
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;

    func_001D4B78(stack_frame, 0x2000);
    temp_17 = func_001D65A0(&D_004262B0, stack_frame);
    temp_19 = D_004262B0;
    D_004262B0 = 1;
    func_001DFF90(stack_frame + 0x20, arg1);
    func_001D6588(&D_004262B0, temp_17);
    D_004262B0 = temp_19;
    temp_2 = *(s32 *)(stack_frame + 0x10) - *(s32 *)(stack_frame + 0x8);
    *arg3 = temp_2;
    temp_2_2 = D_002AD5A8(temp_2);
    *arg2 = temp_2_2;
    func_003F931C(temp_2_2, *(s32 *)(stack_frame + 0x8), *arg3);
    func_001D4BD8(stack_frame, 2);
    return 1;
}
