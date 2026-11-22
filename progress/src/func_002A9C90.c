extern void D_002AD390(void *);
extern void *D_0044DCD8;
extern void *D_0047C938;

void func_002A9C90(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 8) = &D_0047C938;
    D_002AD390(*(void **)((char *)arg0 + 0x3C));
    D_002AD390(*(void **)((char *)arg0 + 0x38));
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
