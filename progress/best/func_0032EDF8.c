extern s32 D_0042DD2C;
extern s32 func_003302B8(void);
extern s32 func_00359610(s32);
extern s32 func_00345B50(s32, s32);
extern s32 func_00347160(s32);

void func_0032FF28(void *arg0) {
    void *obj, *vt;
    s16 off;
    void (*fn)(void *, void *);
    func_003302B8();
    if (D_0042DD2C != 0) {
        func_00359610(D_0042DD2C);
    }
    func_00345B50(*((s32 *)((char *)arg0 + 0x464)), *((s32 *)((char *)arg0 + 0x404)));
    func_00347160(*((s32 *)((char *)arg0 + 0x464)));
    obj = *(void **)((char *)arg0 + 0x30);
    vt = *(void **)((char *)obj + 0x148);
    off = *(s16 *)((char *)vt + 0x20);
    fn = *(void (**)(void *, void *))((char *)vt + 0x24);
    fn((char *)obj + off, obj);
}

void func_0032EDF8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    **((s32 **)((char *)arg0 + 0x468)) = ((arg2 & 0xFF) << 16) | ((arg3 & 0xFF) << 8) | (arg1 << 24) | (arg4 & 0xFF);
}
