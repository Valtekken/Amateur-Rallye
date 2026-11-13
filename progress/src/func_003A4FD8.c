s32 func_001CE2F8(s32);
s32 func_001D24B8(s32, s32, s32, s32);

s32 func_003A4C98(register s32 arg0, register s32 arg1) {
    return func_001D24B8(arg0, 0, func_001CE2F8(arg0), arg1);
}

extern void func_003401F0(s32, f32);
extern void func_00340230(s32, f32);
extern void func_00340270(s32, f32);
extern void func_003402B0(s32, f32);

s32 func_003A4FD8(register s32 a, register f32 f0, register f32 f1, register f32 f2, register f32 f3) {
    func_003401F0(a, f0);
    func_00340230(a, f1);
    func_00340270(a, f2);
    func_003402B0(a, f3);
    return a;
}

s32 func_003A5088(register s32 arg0) {
    return arg0 + 0x2C;
}

extern void D_002AD390(s32);

void func_003A4BF0(register s32 *arg0, register s32 arg1) {
    D_002AD390(*arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    } else {
    }
}
