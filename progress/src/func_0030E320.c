typedef struct {
    u32 f0;
    u8 f4, f5, f6, f7, f8, f9;
    u8 padA[2];
    u32 fC;
    u8 f10, f11, f12, f13, f14;
    u8 pad15;
    u16 f16;
    u32 f18, f1C;
} Info;
extern int func_003F9698(char *, ...);
extern s32 D_0042D5EC;
extern u8 D_0042D5AC[], D_0042D5BC[], D_0042D5C0[], D_0042D5D8[], D_0042D5D9[], D_0042D5DA[];
extern u32 D_0042D5F4;
extern char D_00484DD8[], D_00484AA0[], D_00484AC0[], D_00484E00[], D_00484E28[];
extern s8 D_004A2AE8[];
extern u8 D_004A2B18[], D_004A2B48[], D_004A43C0[], D_004A43F0[];
extern u16 D_004A4420[];
extern u32 D_004A4480[], D_004A4540[], D_004A4600[];

s32 func_0030E320(u32 arg0, Info *arg1) {
    s8 v;

    arg1->f0 = D_0042D5EC;
    arg1->f9 = D_0042D5C0[0];
    arg1->f7 = D_0042D5BC[0];
    arg1->f8 = D_0042D5AC[0];
    arg1->f4 = D_0042D5D8[0];
    arg1->f5 = D_0042D5DA[0];
    arg1->f6 = D_0042D5D9[0];
    if (arg0 >= D_0042D5F4) {
        func_003F9698(D_00484DD8);
        func_003F9698(D_00484AA0, arg0);
        func_003F9698(D_00484AC0);
        func_003F9698(D_00484E00);
        func_003F9698(D_00484E28);
        return -1;
    }
    v = D_004A2AE8[arg0];
    if (v == 0 || v == 3) arg1->f11 = 0;
    else arg1->f11 = 1;
    arg1->fC = D_004A4600[arg0];
    arg1->f10 = D_004A2B48[arg0];
    arg1->f12 = D_004A2B18[arg0];
    arg1->f13 = D_004A43C0[arg0];
    arg1->f18 = D_004A4540[arg0];
    arg1->f1C = D_004A4480[arg0];
    arg1->f14 = D_004A43F0[arg0];
    arg1->f16 = D_004A4420[arg0];
    return 0;
}
