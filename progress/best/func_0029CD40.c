void func_001D4040(void*,void*);
s32 func_001E3598(s32, void*);
s32 func_001E3D10(s32, void*, s32);
void func_001E3650(s32, void*);
s32 func_001E4280(void);
void func_0029CEA8(void*,void*);
extern s32 D_00426854;
extern char D_0047AD68[], D_00494B50[];
#define I(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))
void func_0029CD40(void *arg0, void *arg1) {
    void *t18;
    if (D_00426854 == 0) {
        func_001D4040(D_00494B50, D_0047AD68);
        D_00426854 = 1;
    }
    if (I(arg0,0x18) != 0) {
        func_0029CEA8(arg0, arg1);
    } else if (func_001E3598(func_001E4280(), (char*)arg0+0xC) != 0) {
        t18 = (char*)arg0+0x14;
        I(arg0,0x18) = 1;
        I(arg0,0x1C) = 1;
        I(arg0,0x30) = (s32)F(arg0,0x20) + I(arg0,0x28);
        I(arg0,0x44) = (s32)F(arg0,0x34) + I(arg0,0x3C);
        F(arg0,0x38) = F(arg0,0x34);
        F(arg0,0x24) = F(arg0,0x20);
        if (func_001E3598(func_001E4280(), t18) != 0) {
            func_001E3D10(func_001E4280(), t18, 0);
            F(P(arg1,0x4C),0x50) = (f32)I(arg0,0x30);
            F(P(arg1,0x4C),0x54) = (f32)I(arg0,0x44);
            func_001E3D10(func_001E4280(), (char*)arg0+0x10, 1);
            I(arg0,0x1C) = 0;
        } else {
            func_0029CEA8(arg0, arg1);
        }
    }
    func_001E3650(func_001E4280(), D_00494B50);
}
