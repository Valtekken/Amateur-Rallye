extern void func_003302B8(void);
extern void func_00345B50(s32, s32);
extern void func_00347160(s32);
extern void func_00359610(s32);
extern s32 D_0042DD2C;

void func_0032FF28(void *arg0) {
    void *v, *vt;
    func_003302B8();
    if (D_0042DD2C != 0) func_00359610(D_0042DD2C);
    func_00345B50(*(s32 *)((char *)arg0 + 0x464), *(s32 *)((char *)arg0 + 0x404));
    func_00347160(*(s32 *)((char *)arg0 + 0x464));
    v = *(void **)((char *)arg0 + 0x30);
    vt = *(void **)((char *)v + 0x148);
    (*(void (**)(void *, void *))((char *)vt + 0x24))((char *)v + *(s16 *)((char *)vt + 0x20), v);
}
