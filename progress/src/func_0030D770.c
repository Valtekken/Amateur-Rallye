typedef struct S { u16 unk0; s32 unk4; s32 unk8; } S;

extern u32 D_0042D5F4;
extern const char D_00484AC0[];
extern const char D_00484B20[];
extern const char D_00484B48[];
extern const char D_00484B70[];
extern const char D_00484B90[];

void func_003F9698(const char *fmt, ...);
void func_0030C350(s32);
void func_0030C3C0(void);
void func_0030C508(s32);
void func_0030C570(s32);

s32 func_0030D770(u32 arg0, s32 arg1, S *arg2) {
    if (arg0 >= D_0042D5F4) {
        func_003F9698(D_00484B20);
        func_003F9698(D_00484B48, arg0);
        func_003F9698(D_00484AC0);
        return -1;
    }
    if ((u32)(arg1 - 1) >= 8) {
        func_003F9698(D_00484B20);
        func_003F9698(D_00484B70, arg1);
        func_003F9698(D_00484B90);
        return -2;
    }
    func_0030C350(0x1B);
    func_0030C508(arg0);
    func_0030C508(arg1);
    if (arg1 > 0) {
        do {
            func_0030C508(arg2->unk0);
            func_0030C570(arg2->unk8);
            func_0030C570(arg2->unk4);
            arg2++;
            arg1--;
        } while (arg1 != 0);
    }
    func_0030C3C0();
    return 0;
}
