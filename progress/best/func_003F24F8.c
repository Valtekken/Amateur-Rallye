extern s32 func_003F1EB0(s32);
extern void func_004055A0(s32 *, s32);
extern s32 func_00405E90(void *, s32, s32, s32 *, s32, void *, s32, s32, s32);
extern s32 SignalSema_2(s32);
extern s32 D_0043E72C;
extern s32 D_0043FD40;
extern s32 D_0043F900[];
extern s32 D_00440148[];

s32 func_003F24F8(s32 arg0) {
    if (func_003F1EB0(0x22) == 0) {
        D_0043FD40 = arg0;
        return 0;
    }
    func_004055A0(&D_0043FD40, 4);
    if (func_00405E90(&D_00440148, 0x22, 0, &D_0043FD40, 4, &D_0043F900, 4, 0, 0) < 0) {
        SignalSema_2(D_0043E72C);
        return 0;
    }
    SignalSema_2(D_0043E72C);
    return *(s32 *)((u32)&D_0043F900 | 0x20000000);
}
