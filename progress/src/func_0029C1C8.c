extern void func_0029C268(void *, void *);
extern void func_0029C2A8(void *, void *, s32);
extern void func_0029C570(void *, void *, s32);

void func_0029C1C8(void *arg0, void *arg1) {
    s32 v = *(s32 *)((u8 *)arg0 + 0x10);
    switch (v) {
    case 1:
        func_0029C268(arg0, arg1);
        break;
    case 2:
        func_0029C2A8(arg0, arg1, 0);
        break;
    case 3:
        func_0029C570(arg0, arg1, 0);
        break;
    case 4:
        func_0029C2A8(arg0, arg1, 1);
        break;
    case 5:
        func_0029C570(arg0, arg1, 1);
        break;
    }
}
