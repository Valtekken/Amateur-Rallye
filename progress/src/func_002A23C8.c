/* identical to func_002A14A0 (matched), with its names changed by decompdecomp */
extern void func_001D2458(void *, char *);
extern s32 func_001D4010(void *);
extern void func_001D2900(void *, void *);
extern void func_001D2ED8(void *, s32, s32);
extern void func_001D4040(void *, s32);
extern void D_002AD390(s32);
extern char D_0047C518[];
extern char D_0047C3D0[];

void func_002A23C8(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    ((s32 *)arg0)[1] = *(s32 *)arg1;
    func_001D2458(&sp0, D_0047C518);
    func_001D2900(&sp0, (void *)func_001D4010(arg1));
    func_001D2900(&sp0, D_0047C3D0);
    func_001D2ED8(&sp0, 0x5C, 0x2F);
    func_001D4040(arg2, sp0);
    D_002AD390(sp0);
}
