extern void *D_0047CAB8;
extern void *D_0044DCD8;
extern void func_002AD390(void *);

void func_002A9908(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 8) = &D_0047CAB8;
    func_002AD390(*(void **)((char *)arg0 + 0x30));
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        func_002AD390(arg0);
    }
}
