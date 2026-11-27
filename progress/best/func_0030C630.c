extern s32 func_0030C7F0(void);
extern void func_003F9698(char *, ...);
extern void func_0030C350(s32);
extern void func_0030C508(s32);
extern void func_0030C3C0(void);
extern s32 D_0042D5F4;
extern char D_00484A48[];
extern char D_00484A60[];
extern char D_00484A80[];
extern char D_00484AA0[];
extern char D_00484AC0[];
extern char D_004A2B18[];
extern char D_004A2AE8[];
extern char D_0042D630[];
extern char D_0042D600[];

s32 func_0030C630(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 v = arg1;

    if (v == 0x80) {
        v = func_0030C7F0();
    }
    if (v < 0) {
        func_003F9698(D_00484A48);
        func_003F9698(D_00484A60);
        return -1;
    }
    if (v >= D_0042D5F4) {
        func_003F9698(D_00484A80);
        func_003F9698(D_00484AA0, v);
        func_003F9698(D_00484AC0);
        return -1;
    }

    D_004A2B18[v] = 0;
    D_004A2AE8[v] = 2;
    if ((u32)arg2 >= 0x30U) {
        return -1;
    }
    if ((u32)arg6 < 2U) {
        D_0042D630[arg2] = (char)v;
        D_0042D600[arg2] = 3;
    } else {
        D_0042D630[arg2] = (char)v;
    }

    func_0030C350(1);
    func_0030C508(arg0);
    func_0030C508(arg2 + (v << 8));
    func_0030C508(arg3);
    func_0030C508(arg4);
    func_0030C508(arg5);
    func_0030C508(arg6);
    func_0030C508(arg7 + (arg8 << 8));
    func_0030C3C0();
    return v;
}
