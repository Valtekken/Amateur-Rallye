extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

extern void func_003A88A0(void *);
extern void func_003A88D0(void *, void *);
extern void func_003A8930(void *, s32);
extern void func_003A8990(void *, s32);
extern u8 D_0042FD60[];

void func_003A3078(s32 arg0, s32 arg1) {
    u8 sp10[16];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_003A88A0(sp10);
            func_003A88D0(D_0042FD60, sp10);
            func_003A8930(sp10, 2);
        } else {
            func_003A8990(D_0042FD60, 2);
        }
    }
}

extern void func_003A0770(void *, void *);
typedef struct {s8 value;} Tag;

void *func_003A2658(void *a, s32 n, void *b, Tag tag) {
    void *p = a;
    while (n) {
        func_003A0770(p, b);
        n--;
        p = (u8*)p + 0x1C;
    }
    return p;
}

f32 func_003F3E80(f32);

f32 func_003A3120(f32 arg0) {
    register f32 f20 = arg0;
    return func_003F3E80(f20);
}
