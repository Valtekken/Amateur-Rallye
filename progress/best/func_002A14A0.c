extern void func_001D2458(void *arg0, void *arg1);
extern void func_001D4010(void *arg0);
extern void func_001D2900(void *arg0, void *arg1);
extern void func_001D2ED8(void *arg0, s32 arg1, s32 arg2);
extern void func_001D4040(void *arg0, s32 arg1);
extern void D_002AD390(s32 arg0);
extern char D_0047C3C0[];
extern char D_0047C3D0[];

void func_002A14A0(void *arg0, s32 *arg1, s32 arg2) {
    s32 val = *arg1;
    func_001D2458(arg0, &D_0047C3C0);
    func_001D4010(arg1);
    func_001D2900(arg0, &D_0047C3D0);
    func_001D2900(arg0, &D_0047C3D0);
    func_001D2ED8(arg0, 0x2F, 0x5C);
    func_001D4040(arg2, val);
    D_002AD390(val);
}
